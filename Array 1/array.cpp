# include<iostream>

using namespace std;

main()
{
	int a,cnt=0,pos;
	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
	//cout<<arr[9];
	cout<<"Enter number to check in array: ";
	cin>>a;
	
	for(int i=0; i<=10; i++)
	{
		if(arr[i]==a)
		{
			cnt=1;
            pos=i+1;
			cout<<"Number Present: ";
			cout<<a;
			//break;
		}
		
		else
		{
			cout<<"Not Present: ";
		}
	}
	
}
