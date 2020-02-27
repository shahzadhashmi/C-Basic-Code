# include<iostream>

using namespace std;

main()
{
	int i, n, num;
	cout<<"Enter Array size: "; 
	cin>>n;
	int arr[n]; 
	
	for(i=0; i<n; i++)
	{
		cout<<"Enter Array  Element:" << i <<" ";
		cin>>arr[i];
	}
	
	cout<<"Enter Element to be searched: ";
	cin>>num;
	for(i=0; i<n; i++)
	{
		if(arr[i] == num)
		{
			cout<<"Element Found At Position: "<<num;
			break;
		}
		if(i == n - 1)
		{
			cout<<"Not Found: ";
			break;
		}
	}
}
