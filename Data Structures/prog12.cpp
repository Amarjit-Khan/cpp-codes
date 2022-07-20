// queue using array

#include <iostream>
using namespace std;

#define n 5
int q[n];
int front = -1, rear = -1;

void enqueue()
{
    int x;
    cout << "Enter the data: ";
    cin >> x;
    if (rear == n - 1)
    {
        cout << "Overflow" << endl;
    }

    else if (front == -1 && rear == -1)
    {
        rear++;
        front++;
        q[rear] = x;
    }
    else
    {
        rear++;
        q[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        front++;
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main()
{
    int c = 1;
    while (c < 4)
    {
        cout << "press 1 to enqueue, 2 to dequeue, 3 to display: ";
        cin >> c;
        switch (c)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
}