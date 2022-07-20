// Reverse a linked list
// iterative approach - we need 3 pointers

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
node *temp, *nextnode, *prevnode, *head = 0, *newnode;

void insert_at_beg()
{
    newnode = new node();
    cout << "Enter data: ";
    cin >> newnode->data;
    if (head == 0)
    {
        newnode->next = NULL;
        head = newnode;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void display()
{
    if (head == 0)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        temp = head;
        while (temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

void reverse()
{
    prevnode = 0;
    temp = nextnode = head;

    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        temp->next = prevnode;
        prevnode = temp;
        temp = nextnode;
    }

    head = prevnode;
    cout << "Linked list reversed" << endl;
}

int main()
{
    int c = 1;
    while (c < 4)
    {
        cout << "Press 1 to insert data at beg, 2 to display, 3 to reverse: ";
        cin >> c;
        switch (c)
        {
        case 1:
            insert_at_beg();
            break;
        case 2:
            display();
            break;
        case 3:
            reverse();
            break;
        default:
            break;
        }
    }
}