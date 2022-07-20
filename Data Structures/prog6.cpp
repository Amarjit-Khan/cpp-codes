// Append last k nodes to the beginning of the linked list

#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
} *head = 0;

void insert_at_beg(int x)
{
    node *newnode = new node();
    newnode->data = x;
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

void appendk(int k)
{
    node *newhead;
    node *temp = head;
    for (int i = 0; i < k - 1; i++)
    {
        temp = temp->next;
    }
    newhead = temp->next;
    temp->next = NULL;

    node *newtemp = newhead;
    while (newtemp->next != NULL)
    {
        newtemp = newtemp->next;
    }
    newtemp->next = head;
    head = newhead;
}

void display()
{
    node *temp;
    if (head == 0)
    {
        cout << "No data to display \n";
    }
    else
    {
        temp = head;
        while (temp)
        {
            cout << " " << temp->data;
            temp = temp->next;
        }
        cout << "\n";
    }
}

int main()
{
    insert_at_beg(45);
    insert_at_beg(78);
    insert_at_beg(56);
    insert_at_beg(99);
    insert_at_beg(200);

    display();

    appendk(2);

    display();
}
