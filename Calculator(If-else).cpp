#include <iostream>

using namespace std;
main()
  {
  	float a, b;
  	char op,d;
  	do{
  	cout<<"Enter First value: ";
  	cin>>a;
  	cout<<"Enter Second value: ";
  	cin>>b;
  	cout<<"Enter operation you want to perform: ";
  	cin>>op;
  	 	if (op == '+')
		   {
  	 		cout<<"The sum of numbers is: " <<a+b<<endl;
  	       }
  	 	else if (op == '-')
		   {
  	 		cout<<"The diff of numbers is: " <<a-b<<endl;
  	 	   }  
  	 	else if (op == '*')
		   {
  	 		cout<<"The mul of numbers is: " <<a*b<<endl;
  	 	   }
  	    else if (op == '/')
		  {
  	 		cout<<"The div of numbers is: " <<a/b<<endl;
  	 	  }
  	 	else
		   {
  	 	   cout<<" Operator is incorrect\n\n ";
  	 	   cout<<"Enter 'Y' if you want to continue and any other key to exit: ";
  	 	   cin>>d;
		   }
	  }
	  while(d == 'Y');
	  
  	 	//float point is not use in modules(Remainder)
  	 	/*case '%':
  	 		cout<<"The div of numbers is: " <<a%b<<endl;
  	 		break;*/
}
