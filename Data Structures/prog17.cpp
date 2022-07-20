// Adj matrix to List

#include <iostream>
#include <stdlib.h>
using namespace std;

int a[10][10];

class node
{
public:
    int data;
    node *next;
};

node *vertex[10];

void adjmat_create(int n)
{
    int x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            x = rand() % 2;
            a[i][j] = x;
        }
    }
}

void adjlist_maker(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1 && i != j)
            {
                if (vertex[i] == NULL)
                {
                    vertex[i]->data = j;
                    vertex[i]->next = NULL;
                }
                else
                {
                    node *newnode = new node();
                    newnode->data = j;
                    newnode->next = vertex[i];
                    vertex[i] = newnode;
                }
            }
        }
    }
}

void adjlist_display(int n)
{
    node *temp = new node();
    for (int i = 0; i < n; i++)
    {
        temp = vertex[i];
        while (temp != NULL && temp->next != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << endl;
    }
}

int main()
{
    adjmat_create(5);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        vertex[i] = new node();
        vertex[i]->data = NULL;
        vertex[i]->next = NULL;
    }

    adjlist_maker(5);
    adjlist_display(5);
}
