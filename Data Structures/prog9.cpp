// Stack using array

#include <iostream>
using namespace std;

#define n 5
int stack[n];
int top = -1;

void push()
{
	int x;
	cout << "Enter the data: ";
	cin >> x;
	if (top == n - 1)
	{
		cout << "Overflow\n";
	}
	else
	{
		top++;
		stack[top] = x;
	}
}

void pop()
{
	if (top == -1)
	{
		cout << "Underflow\n";
	}
	else
	{
		cout << "Data deleted\n"
			 << stack[top];
		top--;
	}
}

void peek()
{
	if (top == -1)
	{
		cout << "Underflow\n";
	}
	else
	{
		cout << "The data is: " << stack[top];
		cout << endl;
	}
}

int main()
{
	int c = 1;
	while (c < 4)
	{
		cout << "press 1 to push, 2 to pop, 3 to peek: ";
		cin >> c;
		switch (c)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			peek();
			break;
		default:
			break;
		}
	}
}
