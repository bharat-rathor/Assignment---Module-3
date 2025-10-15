//Matrix Addition 
//o Write a C++ program to perform matrix addition on two 2x2 matrices. 
//o Objective: Practice multi-dimensional arrays. 

#include<iostream>
using namespace std;

int main()
{
	int row;
	int sum=0;
	int col;
	cout<<"Enter Row : ";
	cin>>row;
	cout<<"Enter Coloumn : ";
	cin>>col;
	int arr1[2][2];
	int arr2[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter Number : "<<i<<" "<<j<<" : ";
			cin>>arr1[i][j];
//			sum+=arr[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Enter Number : "<<i<<" "<<j<<" : ";
			cin>>arr2[i][j];
			sum+=arr1[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n";
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<arr1[i][j]+arr2[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	
}
