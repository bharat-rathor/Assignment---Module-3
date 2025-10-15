//Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise 
//operators. Perform operations using each type of operator and display the results. 
//o Objective: Reinforce understanding of different types of operators in C++. 

#include<iostream>
using namespace std;
int choice;
int arithmetic(int a,int b)
{
	char ch;
	do{
		cout<<"\narithmetic operation\n";
		cout<<"1 sum\n";
		cout<<"2 sub\n";
		cout<<"3 mul\n";
		cout<<"4 Div \n";
		cout<<"choice : ";
		cin>>choice;
		if(choice==1)
		{
			cout<<"sum : "<<a+b;
		}
		else if(choice==2)
		{
			cout<<"sub : "<<a-b;
		}
		else if(choice==3)
		{
			cout<<"multiplication : "<<a*b;
		}
		else if(choice==5)
		{
			cout<<"Division : "<<a/b;
		}
		else{
			cout<<"Enter Valid Choice \n";
		}
		cout<<"\ndo you want to continue :";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
}
int logical(int a,int b)
{


    cout << "=== RELATIONAL OPERATORS ===" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    cout << "a == b : " << (a == b) << endl;  // false ? 0
    cout << "a != b : " << (a != b) << endl;  // true  ? 1
    cout << "a < b  : " << (a < b)  << endl;  // true  ? 1
    cout << "b <= a : " << (b <= a) << endl;  // false ? 0

    cout << "\n=== LOGICAL OPERATORS ===" << endl;
    bool x = true, y = false;

    cout << "x && y : " << (x && y) << endl;  // AND ? false
    cout << "x || y : " << (x || y) << endl;  // OR  ? true
    cout << "!x     : " << (!x)     << endl;  // NOT ? false

    cout << "\n=== BITWISE OPERATORS ===" << endl;
    int p = 6;  // 0110 in binary
    int q = 3;  // 0011 in binary

    cout << "p & q  : " << (p & q) << endl;   // AND  ? 0010 (2)
    cout << "p | q  : " << (p | q) << endl;   // OR   ? 0111 (7)
    cout << "p ^ q  : " << (p ^ q) << endl;   // XOR  ? 0101 (5)
    cout << "~p     : " << (~p)    << endl;   // NOT  ? flips all bits
    cout << "p << 1 : " << (p << 1) << endl;  // Left shift ? 1100 (12)
    cout << "q >> 1 : " << (q >> 1) << endl;  // Right shift ? 0001 (1)

    return 0;

}

void all(int a,int b)
{
	
}
int main()
{
	int a,b;
	int choice;
	while(1)
	{
	cout<<"1 Arithmatic \n";
	cout<<"2 All Operation\n";
	

	cout<<"Enter Choice : ";
	cin>>choice;
	cout<<"Enter Number 1 : " ;
	cin>>a;
	cout<<"Enter Number 2 : ";
	cin>>b;
	if(choice==1)
	{
		arithmetic(a,b);
	}
	else if(choice==2)
	{
		logical(a, b);
	}
	else{
		cout<<"Vaid Choice\n";
	}
}
}
