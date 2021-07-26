#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <fstream>
#include <string>
using namespace std;
void outs(stack<int> stack)
{
	while (!stack.empty())
	{
		cout << ' ' << stack.top();
		stack.pop();
	}
}
void stack_sum(stack<int> stack)
{
	double sum = 0;
	double size = stack.size();
	while (!stack.empty())
	{
		sum += stack.top();
		stack.pop();
	}
	
	cout << endl << "Stack avg = " << sum/ size << endl;
}
vector<int> stack_min_max(stack<int> stack)
{
	auto min = stack.top(), max = stack.top();
	while (!stack.empty())
	{
		if(stack.top()< min)
		{
			min = stack.top();
		}
		else if(stack.top() > max)
		{
			max = stack.top();
		}
		stack.pop();
	}
	vector<int> min__max{ min, max };
	return min__max;
}
void stack_change_min_max(stack<int> stack)
{
	vector<int> min_max{ 0, 0 };
	min_max = stack_min_max(stack);
	vector<int> stackk;
	while (!stack.empty())
	{
		if(stack.top() == min_max[0])
		{
			stackk.push_back(min_max[1]);
		}
		else if (stack.top() == min_max[1])
		{
			stackk.push_back(min_max[0]);
		}
		else
		{
			stackk.push_back(stack.top());
		}
		stack.pop();
	}
	while (!stackk.empty())
	{
		stack.push(stackk.back());
		stackk.pop_back();
	}
	outs(stack);
}
void find_letter_in_file(stack<char> stack)
{
	string line;
	char letter_to_find = 'e';

	ifstream in("text.txt"); // окрываем файл для чтения
	if (in.is_open())
	{
		while (getline(in, line))
		{
			for (auto& i : line)
			{
				stack.push(i);
			}
			
		}
	}
	in.close();     // закрываем файл
	auto letter_count = 0;
	while (!stack.empty())
	{
		if (stack.top()==letter_to_find)
		{
			letter_count++;
		}
		stack.pop();
	}
	cout << "Count of '" << letter_to_find << "' in file - " << letter_count << endl;
}

void outq(queue<int> queue)
{
	while (!queue.empty())
	{
		cout << ' ' << queue.front();
		queue.pop();
	}
}
void add_to_queue (queue<int> &queue, const int n)
{
	queue.push(n);
}
int main()
{
    stack<int> stack1;
	stack1.push(0);
	stack1.push(1);
	stack1.push(2);
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	outs(stack1);
	cout << endl << "====================" << endl;
	stack_sum(stack1);
	cout << "====================" << endl;
	stack_change_min_max(stack1);
	cout << endl << "====================" << endl;
	stack<char> stack2;
	find_letter_in_file(stack2);
	cout << endl << "====================" << endl;
	queue<int> queue;
	queue.push(1);
	outq(queue);
	add_to_queue(queue, 2);
	outq(queue);
}
