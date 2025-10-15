// Variable Scope 
//o Write a program that demonstrates the difference between local and global 
//variables in C++. Use functions to show scope. 
//o Objective: Reinforce the concept of variable scope. 

#include<iostream>
using namespace std;

int x=10;
//when we calling local varibale the its consider as main function value passed first its print 
//the we are calling global variable the we are using :: 
void show()
{
	cout<<"Local Variable : "<<x<<endl;
	cout<<"Global Variable : "<<::x;
}
int main()
{
	int x=5;
	show();	
	return 0;
}
