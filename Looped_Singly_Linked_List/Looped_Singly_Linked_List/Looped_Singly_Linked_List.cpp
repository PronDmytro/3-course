#include <iostream>
#include <Windows.h>
#include <ctime>

using namespace std;

template<typename T>
class List
{
public:
    List();
    ~List();

    void push_back(T data);
    int GetSize() { return Size; };
    void insert(T value, int index);
    T& operator[](const int index);

private:

    template<typename T>
    class Node
    {
    public:
        Node* pNext;
        Node* pPrev;
        T data;

        Node(T data = T(), Node* pNext = nullptr, Node* pPrev = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
            this->pPrev = pPrev;
        }
    };

    int Size;
    Node<T>* head;
    Node<T>* tail;
};

template<typename T>
List<T>::List()
{
    Size = 0;
    head = nullptr;
    tail = nullptr;
}

template<typename T>
List<T>::~List()
{
    Size = 0;
    head = nullptr;
    tail = nullptr;
}

template<typename T>
void List<T>::push_back(T data)
{
    if (head == nullptr)
    {
        head = new Node<T>(data);
    }
    else
    {
        Node<T>* current = this->head;

        while (current->pNext != nullptr)
        {
            current = current->pNext;
        }
        current->pNext = new Node<T>(data);
    }

    Size++;
}

template<typename T>
T& List<T>::operator[](const int index)
{
    int count = 0;
    Node<T>* current = this->head;

    while (current != nullptr)
    {
        if (count == index)
        {
            return current->data;
        }
        current = current->pNext;
        count++;
    }
}

template<typename T>
void List<T>::insert(T value, int index)
{

    if (index == 0)
    {
        cout << "Lazy error";
    }
    else
    {
        Node<T>* previous = this->head;

        for (int i = 0; i < index - 1; i++)
        {
            previous = previous->pNext;
        }

        Node<T>* newNode = new Node<T>(value, previous->pNext);
        previous->pNext = newNode;

        Size++;
    }


}

void fill(List<char>&);
void print(List<char>&);
void func1(List<char>&);
void func3(List<char>&);

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    List<char> p;

    fill(p);
    print(p);
    p.insert('F', 1);

    cout << endl;
    print(p);

    func1(p);
    p.~List();

    system("pause");
    return 0;
}

void fill(List<char>& lst)
{
    for (int i = 0; i < 10; i++)
    {
        lst.push_back(char((rand() % 75) + '0'));
    }
}

void print(List<char>& lst)
{
    for (int i = 0; i < lst.GetSize(); i++)
    {
        cout << lst[i] << " ";
    }
    cout << endl;
}

void func1(List<char>& lst) {

    if (lst[0]<lst[1] && lst[lst.GetSize() - 1]>lst[lst.GetSize()]) {
        cout << endl << "Елементи списку впорядковані" << endl;
    }
    else
    {
        cout << endl << "Елементи списку НЕ впорядковані" << endl;
    }
}

void func2(List<int>& lst, List<int>& lst_1) {
    char hNum = lst[0];
    for (int i = 1; i < lst.GetSize(); i++)
    {
        if (hNum < lst[i])
        {
            hNum = lst[i];
        }
    }

    for (int i = 0; i < lst.GetSize(); i++)
    {
        lst_1.push_back(hNum - lst[i]);
    }
}
