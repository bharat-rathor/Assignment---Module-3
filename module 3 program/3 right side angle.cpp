//. Nested Control Structures 
//o Write a program that prints a right-angled triangle using stars (*) with a nested loop. 
//o Objective: Learn nested control structures. 

#include<iostream>
using namespace std;

int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=i;j<5;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	for(int i=1;i<=5;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=5;j>=i;j--)
		{
			cout<<" *";
		}
		cout<<endl;
	}
	return 0;
}
