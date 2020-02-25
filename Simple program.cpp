#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
 

main()
{
	int arr[10],no;
	int i,j;
	cout<<"Size of an array: ";
	cin>>no;
	cout<<"Enter any "<<no<<" num in array:";
	for(i = 0; i <=no; i++)
	{
		cin>>arr[i];  
	}
	cout<<"Duplicate values are:";
	
	for(i=0; i<no;i++)
	{
		for(j=i+1;j<no;j++)
		{
			if(arr[i]==arr[j])
			{
				cout<<"\n"<<arr[i];
			}
			
		}
	}
}
