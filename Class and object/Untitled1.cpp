#include<iostream>
#include<stdlib.h>
#define max 5 
using namespace std;

int flag=0;
class Bank
{
	int acc;
	float bal;
	
	public:
	void create();
	void display();
	void deposit();	
	void withdraw(int b);
	void dispbal();
	int getaccno();
	int srchacc(int d);
};

void Bank::create()
{
//	cout<<"Enter details for creating a bank account";
	cout<<"Enter the account number (min 5 digits) : ";
	cin>>acc;
	cout<<"Enter the balance : ";
	cin>>bal;
}

void Bank::display()
{
	cout<<"Account Number: "<<acc<<endl;
	cout<<"Account Balance: "<<bal<<endl;
	
}

void Bank::dispbal()
{
	cout<<"The balance is: "<<bal<<endl;
}
int Bank::getaccno()
{
	return acc;
}

void Bank::withdraw(int b)
{
	if(b<bal)
	{
		bal = bal-b;
		cout<<"Present Account balance is: "<<bal<<endl;
	}
	else
	{
		cout<<"Account balance not sufficient";
	}
}

void Bank::deposit()
{
	int c;
	cout<<"Enter the amount to deposit: ";
	cin>>c;
	bal = bal + c;
	cout<<"Balance now is: "<<bal<<endl;
}



int main()
{
	Bank ob[max];
	int count=0;
	int ch;
	while(1)
	{
	
		cout<<"Press 1 for Creating Account ,2 for viewing the Account Details, 3 for viewing account balance, 4 todeposit and 5 to withdraw money: ";
		cin>>ch;
		switch (ch)
		{
			case 1: //Create account
				if(count<=max-1)
					ob[count++].create();
				else
				{
					cout<<"No more account can be created"<<endl;
				}
				break;
			case 2: //Display details
				for(int i=0;i<count;i++)
				ob[i].display();
				break;
			case 3://Display details for searched account
				int a;
				cout<<"Enter the account number: ";
				cin>>a;
				for(int i=0;i<count;i++)
				{
					if(ob[i].getaccno() == a)
					{
						ob[i].dispbal();
					}
				}
				break;
				
				case 4: //deposit
				cout<<"Enter the account number: ";
				cin>>a;
				flag=0;
				for(int i=0;i<count;i++)
				{
					if(ob[i].getaccno() == a)
					{
						flag=1;
						ob[i].deposit();
						break;
					}
				}
				if(flag==0)
					cout<<a<<"Number invalid";
				break;
				
			case 5: //withdrawl
				cout<<"Enter the account number: ";
				cin>>a;
				int b;
				cout<<"Enter amount to withdraw: ";
				cin>>b;
				for(int i=0;i<count;i++)
				{
					if(ob[i].getaccno() == a)
					{
						ob[i].withdraw(b);
					}
				}
				break;
	
			default:
				exit(0);
		}		
	}
}
