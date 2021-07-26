#include <iostream>
#include <string>
#include <ctime>
#include <windows.h> 
#include <stdio.h>
#include <stack>
using namespace std;
int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 11));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));
    stack <int> way;
    string maze[1000], question = "p";
    int a = 1, c[1000], c1 = 2, n, k = 0, height = 0, width = 0;
    while (height % 2 == 0 || width % 2 == 0 || height < 5 || width < 5 || (height + 2) * (width + 2) >= 1000 || width>70) {
        cout << "Введіть не парну висоту, ширену: рекомендовано 15 27." << endl << "Самая жесть 23 37: ";
        cin >> height >> width;
        if (height < 5) cout << "За маленька висота!!!" << endl;
        if (width < 5) cout << "За маленька ширина!!!" << endl;
        if ((height + 2) * (width + 2) >= 1000) cout << "Сильно великий лабіринт" << endl;
        if (width > 70)cout << "Завелика ширина" << endl;
        if (width % 2 == 0 || height % 2 == 0)cout << "Числа повинні бути не парними!!" << endl;
    }
    height += 2;
    width += 2;
    for (int x = 0; x < height * width; x++) {
        maze[x] = " ";
        if (x < width)maze[x] = "#";
        if (x > height * width - width - 1)maze[x] = "#";
        if (x % width == 0)maze[x] = "#";
        if (x % width == width - 1)maze[x] = "#";
    }
    while (a % 2 == 1)
        a = rand() % (width - 4) + width * height - width + 2;
    maze[a] = ".";
    maze[a - width] = ".";
    a = 1;
    while (a % 2 == 1)
        a = rand() % (width - 4) + 2;
    maze[a] = ".";
    maze[a + width] = ".";
    a += width * 2;
    while (c1 > 1) {
        int a1 = a;
        if (k < 15) {
            c[c1] = a;
            c1++;
        }
        maze[a] = ".";
        way.push(a);
        k = 0;
        while (a1 == a && k < 15) {
            n = rand() % 4 + 1;
            if (n == 1 && maze[a + 2] == " ")a++;
            if (n == 2 && maze[a + width * 2] == " ")a += width;
            if (n == 3 && maze[a - width * 2] == " ")a -= width;
            if (n == 4 && maze[a - 2] == " ")a--;
            k++;
        }
        if (k == 15) {
            c[c1 - 1] = 0;
            c1 -= 2;
            a = c[c1];
            c1++;
        }
        if (a > 0)
            maze[a] = ".";
        if (a < 0)
            c1 = 0;
        if (k < 15) {
            if (n == 1)a++;
            if (n == 2)a += width;
            if (n == 3)a -= width;
            if (n == 4)a--;
            maze[a] = ".";
        }
    }
    maze[width * 2] = "#";
    for (int x = 0; x < width * height; x++) {
        if (maze[x] == "#")maze[x] = "";
        if (maze[x] == " ")maze[x] = "#";
        if (x > width * 2 || x < width)
            if (maze[x] == ".")
            {
	            maze[x] = " ";
                way.pop();
            }
    }
    system("CLS");
    for (int x = 0; x < width * height; x++) {
        cout << maze[x];
        if (x % width == width - 1)
            cout << endl;
    }
    //Проходження
    int a1, a2, m[1000], j;
    c1 = 0;
    cout << "Хочити слідити за прохождением лабіринту?(Y/n): ";
    while (true) {
        cin >> question;
        if (question == "y" || question == "Y") {
            j = 0;
            break;
        }
        if (question == "n" || question == "N") {
            j = 1;
            break;
        }
    }
    k = j;
    for (int x = 0; x < width; x++) {
        for (int y = 0; y < width * height; y++)
            maze[y] = maze[y + 1];
    }
    for (int x = 0; x < width; x++)
        if (maze[x] == ".")
            a = x;
    for (int x = width * (height - 3) - 1; x < width * (height - 2); x++)
        if (maze[x] == " ")
            a1 = x;
    for (int x = 0; x < 1000; x++)
        c[x] = 0;
    maze[a] = ".";
    while (a != a1) {
        if (k == 0) {
            system("CLS");
            for (int x = 0; x < width * height; x++) {
                cout << maze[x];
                if (x % width == width - 1)
                    cout << endl;
            }
            Sleep(150);
        }
        n = 0;
        a2 = a;
        while (a2 == a) {
            n++;
            k = j;
            if (n == 1 && maze[a - width] == " " && a - width > 0 && m[a - width] != 666)a -= width;
            if (n == 2 && maze[a - 1] == " " && m[a - 1] != 666)a--;
            if (n == 3 && maze[a + 1] == " " && m[a + 1] != 666)a++;
            if (n == 4 && maze[a + width] == " " && m[a + width] != 666)a += width;
            if (n == 5) {
                k = 1;
                n = 0;
                c1--;
                maze[a] = " ";
                m[a] = 666;
                c1--;
                a = c[c1];
                c1++;
            }
        }
        maze[a] = ".";
        c[c1] = a;
        c1++;

    }
    system("CLS");
    for (int x = 0; x < width * height; x++) {
        if (maze[x] == ".")
            SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 14));
        cout << maze[x];
        if (x % width == width - 1)
            cout << endl;
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 11));
    }
    
	for(auto i = 0; i<way.size();i++)
	{
        int n = way.top();
		way.pop();
        cout <<n%width<< " | " << n % height << endl;
        
	}    
    return 0;
}