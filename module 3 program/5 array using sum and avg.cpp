//. Array Sum and Average 
//o Write a C++ program that accepts an array of integers, calculates the sum and 
//average, and displays the results. 
//o Objective: Understand basic array manipulation.
#include<iostream>
using namespace std;

int main()
{
	double avg;
	int size;
	cout<<"Enter Number Of Marks : ";
	cin>>size;
	int arr[size];
	int sum=0;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter Marks "<<i+1<<" : ";
		cin>>arr[i];
		sum+=arr[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<"The Marks : "<<arr[i]<<" ";
	}
	avg=sum/size;
	cout<<"\nThe Sum Is : "<<sum;
	cout<<"\nAverage : "<<avg;
	return 0;
}
