// queue using linked list

#include <iostream>
#include <stdlib.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

node *temp;
node *front = NULL, *rear = NULL;

void enqueue()
{
    node *newnode = new node();
    cout << "Enter data to insert: ";
    cin >> newnode->data;
    newnode->next = NULL;
    if (rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    if (front == 0)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
}

void display()
{
    if (front == 0)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
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