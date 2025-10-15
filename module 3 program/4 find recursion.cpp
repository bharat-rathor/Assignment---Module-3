//Factorial Calculation Using Recursion 
//o Write a C++ program that calculates the factorial of a number using recursion. 
//o Objective: Understand recursion in functions. 

#include<iostream>
using namespace std;

int fac(int number)
{
	if(number==0)
	{
		return 1;
	}
	
	int number_minus=fac(number-1);
	int fact=number_minus*number;
	return fact;
}
int main()
{
	int number;
	cout<<"Enter Number : ";
	cin>>number;
	cout<<"The Factorail : "<<fac(number);
	return 0;
}
