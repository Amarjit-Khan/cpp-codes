// Bfs on matrix and list

#include <iostream>
#include <stdlib.h>
using namespace std;

int a[10][10];
int visited[10];

int queue[30];
int front = -1, rear = -1;

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

void enqueue(int n)
{
    if (rear == 29)
    {
        printf("\nQueue Overflow");
    }
    else
    {
        rear++;
        queue[rear] = n;
        if (front == -1)
            front = 0;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("\nQueue Underflow");
    }
    else
    {
        front++;
        // printf("\nItem is deleted from queue");
    }
}

void bfs_matrix(int n)
{
    int k;
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }

        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                enqueue(j);
                cout << j << " ";
            }
        }
        visited[i] == 1;
        while (front <= rear && rear != -1)
        {
            k = queue[front];
            dequeue();
            if (visited[k] != 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[i][j] == 0)
                    {
                        enqueue(j);
                        cout << j << " ";
                    }
                }
            }
            visited[k] = 1;
        }
        rear = -1;
        front = -1;
    }
    cout << endl;
}

void bfs_list(int n)
{
    int k;
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }
        node *temp = new node();
        temp = vertex[i];
        while (temp != NULL)
        {
            enqueue(temp->data);
            cout << temp->data << " ";
            temp = temp->next;
        }
        visited[i] = 1;
        while (front <= rear && rear != -1)
        {
            k = queue[front];
            dequeue();
            if (visited[k] == 0)
            {
                node *temp2 = new node();
                temp2 = vertex[k];
                while (temp2 != NULL)
                {
                    enqueue(temp2->data);
                    cout << temp2->data << " ";
                    temp2 = temp2->next;
                }
                visited[k] = 1;
            }
        }
        front = -1;
        rear = -1;
    }
    cout << endl;
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

    bfs_matrix(5);
    cout << endl;
    bfs_list(5);
}