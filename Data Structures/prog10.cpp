//stack using Linked list

#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
	public:
		int data;
		node * next;
};
int top = -1;
node *head=0, *temp, *newnode;

void push()
{
	newnode = new node();
	cout<<"Enter data: ";
	cin>>newnode->data;
	if(head == 0)
	{
		newnode->next = NULL;
		head = newnode;
	}
	else{
		newnode->next = head;
		head = newnode;
	}
	top++;
}

void pop()
{
	if(head==NULL)
	{
		cout<<"stack Underflow"<<endl;
	}
	else{
		top--;
		temp = head;
		head=head->next;
		free(temp);
	}
}

void peek()
{
	if(head==NULL)
	{
		cout<<"stack Underflow"<<endl;
	}
	else{
		cout<<"data is: "<<head->data;
		cout<<endl;
	}
}

int main()
{
	int c=1;
	while(c<4){
		cout<<"Press 1 to push, 2 to pop, 3 to peek: ";
		cin>>c;
		switch(c)
		{
			case 1: push();
				break;
			case 2: pop();
				break;
			case 3: peek();
				break;
			default:
				break;
		}
	}
}
