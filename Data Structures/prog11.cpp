// Reverse a stack using recursion
// Without using another stack
#include <iostream>
using namespace std;

int top = -1;

void push(int a[], int x)
{
    if (top == 10 - 1)
    {
        cout << "Overflow\n";
    }
    else
    {
        top++;
        a[top] = x;
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
        top--;
    }
}

void insert_at_bottom(int a[10], int ele)
{
    if (top == -1)
    {
        push(a, ele);
        return;
    }

    int topele = a[top];
    pop();
    insert_at_bottom(a, ele);

    push(a, topele);
}

void reverse(int a[10])
{
    if (top == -1)
    {
        return;
    }

    int ele = a[top];
    pop();
    reverse(a);
    insert_at_bottom(a, ele);
}

int main()
{
    int a[10];

    push(a, 10);
    push(a, 20);
    push(a, 30);
    push(a, 40);
    push(a, 50);

    reverse(a);

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}