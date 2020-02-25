# include <iostream>

using namespace std;

main()
{
	//float sgpa();
	//sgpa();
	
	float cgpa();
	cgpa();
}

float sgpa()
{
	float s1, s2, s3, s4, s5, s6, cr1, cr2, cr3, cr4, cr5, cr6, n;
	
	cout<<"Enter the Grade points of subject 1: "<<" ";
	cin>>s1;
	cout<<endl;
	
	cout<<"Enter the credit hour of subject 1: "<<" ";
	cin>>cr1;
	cout<<endl;
	
	cout<<"Enter the grade point of subject 2: "<<" ";
	cin>>s2;
	cout<<endl;
	
	cout<<"Enter the credit hour of subject 2: "<<" ";
	cin>>cr2;
	cout<<endl;
	
	
	cout<<"Enter the grade point Subject3: "<<" ";
	cin>>s3;
	cout<<endl;
	
	cout<<"Enter the credit hour of subject 3: "<<" ";
	cin>>cr3;
	cout<<endl;
	
	cout<<"Enter the grade point of Subject4: "<<" ";
	cin>>s4;
	cout<<endl;
	
	cout<<"Enter the credit hour of subject 4: "<<" ";
	cin>>cr4;
	cout<<endl;
	
	cout<<"Enter the grade point of Subject5: "<<" ";
	cin>>s5;
	cout<<endl;
	
	cout<<"Enter the credit hour of subject 5: "<<" ";
	cin>>cr5;
	cout<<endl;
	
	cout<<"Enter the grade point of Subject6: "<<" ";
	cin>>s6;
	cout<<endl;
	
	cout<<"Enter the credit hour of subject 6: "<<" ";
	cin>>cr6;
	cout<<endl;
	
	n = ((s1*cr1)+(s2*cr2)+(s3*cr3)+(s4*cr4)+(s5*cr5)+(s6*cr6))/((cr1+cr2+cr3+cr4+cr5+cr6));
	cout<<"Gpa of this Semester: "<<n<<" ";
	
	return 0;
	
}

float cgpa()
{
	int a, i, j;
	float gpa, cp, c[10], d[10], e[10], sum= 0, pro = 0;
	
	cout<<"Enter the number of semesters you want to calculate their Gpa: "<<" ";
	cin>>a;
	
	for (i = 1; i <= a; i++)
	{
		cout<<"Enter the Gpa: "<<" ";
		cin>>gpa;
		
		cout<<"Enter the credit hours of that semester: "<<" ";
		cin>>cp;
		
		e[i] = gpa*cp;
		d[i] = cp;
	}
	
	for(j = 1; j <= a; j++)
	{
		pro = pro + e[j];
		sum = sum + d[j];
	}
	
	cout<<"Total point Scored: "<<" "<<pro<<endl;
	cout<<"Total credit hours: "<<" "<<sum<<endl;
	cout<<endl;
	cout<<"Total CGPA: "<< " "<<pro / sum;
}
