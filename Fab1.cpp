# include<iostream>

using namespace std;

main()
{
	int f0 = 0 ,f1 = 1, fn,n;
	cout<<"Enter the number: ";
	cin>>n;
	
	for(int i =1; i<=n; i++)
	{
		if (i == 1)
		{
			cout<<f0<<" ";
		}
		if (i == 2)
		{
			cout<<f1<<" ";
		}
		
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
		
		cout<<fn<<" ";
	}
	return 0;
}
