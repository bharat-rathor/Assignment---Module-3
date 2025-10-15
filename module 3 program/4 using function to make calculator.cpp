//Simple Calculator Using Functions 
// 
//o Write a C++ program that defines functions for basic arithmetic operations (add, 
//subtract, multiply, divide). The main function should call these based on user input. 
//o Objective: Practice defining and using functions in C++. 

#include<iostream>
using namespace std;

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	if(a>0 && b>0)
	{
		return a/b;
	}
	else{
		cout<<"Enter Valid Number ";
	}
}

int main()
{
	char ch;
	int x,y;
	int choice;
	
	do{
	cout<<"\n---calculator-----\n";
	cout<<"1 Addition\n";
	cout<<"2 Subtraction \n";
	cout<<"3 Multiplication\n";
	cout<<"4 Division\n";
	cout<<"Enter Choice : ";
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter Number 1 : ";
		cin>>x;
		cout<<"Enter Number 2 : ";
		cin>>y;
		cout<<"Sum : "<<add(x,y);
	}
	else if(choice==2)
	{
		cout<<"Enter Number 1 : ";
		cin>>x;
		cout<<"Enter Number 2 : ";
		cin>>y;
		cout<<"Subtraction : "<<sub(x,y);
	}
	else if(choice==3)
	{
		cout<<"Enter Number 1 : ";
		cin>>x;
		cout<<"Enter Number 2 : ";
		cin>>y;
		cout<<"Multiplication : "<<mul(x,y);
	}
	else if(choice==4)
	{
		cout<<"Enter Number 1 : ";
		cin>>x;
		cout<<"Enter Number 2 : ";
		cin>>y;
		cout<<"Division : "<<div(x,y);
	}
	else{
		cout<<"Enter Valid Choice\n";
	}
	cout<<"\nDo You Want To Continue : ";
	cin>>ch;
}while(ch=='y' || ch=='Y');
	return 0;
}
