// Implement DFS recursively and iteratively

#include <iostream>
#include <stdlib.h>
using namespace std;

int a[10][10];
int visited[10];

int stack[30];
int top = -1;

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

void push(int n)
{
    if (top == 30 - 1)
    {
        cout << "Overflow\n";
    }
    else
    {
        top++;
        stack[top] = n;
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
        // cout << "Data deleted\n"<< stack[top];
        top--;
    }
}

void dfs_itr(int sv)
{
    top = -1;
    push(sv);
    cout << sv << " ";
    struct node *temp;
    temp = vertex[sv];
    while (top != -1)
    {
        temp = vertex[stack[top]];
        pop();
        while (temp != NULL && temp->data != NULL)
        {
            if (visited[temp->data] == 0)
            {
                push(temp->data);
                visited[temp->data] = 1;
                cout << temp->data << " ";
                temp = vertex[stack[top]];
            }
            else
            {
                temp = temp->next;
            }
        }
    }
}

void dfs_rec(int sv)
{
    struct node *temp;
    int p;
    temp = vertex[sv];
    visited[sv] = 1;
    cout << sv << " ";
    while (temp != NULL)
    {
        if (visited[temp->data] == 0)
        {
            visited[temp->data] = 1;
            p = temp->data;
            dfs_rec(p);
        }
        temp = temp->next;
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
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        vertex[i] = new node();
        vertex[i]->data = NULL;
        vertex[i]->next = NULL;
    }

    adjlist_maker(5);
    adjlist_display(5);
    cout << endl;

    for (int i = 0; i < 5; i++)
    {
        if (visited[i] == 0)
            dfs_rec(i);
    }

    cout << "done rec" << endl;

    for (int i = 0; i < 5; i++)
    {
        if (visited[i] == 0)
            dfs_itr(i);
    }
}