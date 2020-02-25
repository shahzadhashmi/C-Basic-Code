#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

main()
{
	int size =0;
	int i,j,a[size];
	cout<<"Enter size of array: ";
	cin>>size;
	
	for(i=1; i<=size; i++)
	{
		cout<<"Enter Values of array: ";
		cin>>a[i];
	}
	
	cout<<"Array is: ";
	for(i=1; i<=size; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"Duplicate Numbers are: ";
	for(i=1; i<=size; i++)
	{
		for(j=i+1; j<=size; j++)
		{
			if(a[i]==a[j])
			{
				cout<<a[i];
			}
		}
	}
}
