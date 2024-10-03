/*WAP to create simple calculator using class*/

#include<iostream>

using namespace std;

class calcu
{
	private :
		int a,b;
		int ch;
			
	public :
	void get_calcu()
	{
		cout<<" Enter a Number : ";
		cin>>a;
		cout<<"\n Enter a Number : ";
		cin>>b;
		
		cout<<"\n\n Select a Choice : ";
		cout<<" \n 1 for Addition : ";
		cout<<" \n 2 for Subtraction : ";
		cout<<" \n 3 for Multipication : ";
		cout<<" \n 4 for Divison : ";
		
		cout<<"\n\n Enter a Choice : ";
		cin>>ch;
	}
	void print_calcu()
	{
		switch(ch)
	    {
		case 1 : cout<<"\n Addition = "<<a+b;
				break;
				
		case 2 : cout<<"\n Subtraction = "<<a-b;
				break;
			
		case 3 : cout<<"\n Multipication = "<<a*b;
				break;
				
		case 4 : cout<<"\n Divisin = "<<a/b;
				break;
				
		default:		
		        cout<<" Enter a Valid Number.";
	    }
    }
	
};
main()
{
	calcu c;
	c.get_calcu();
	c.print_calcu();
	
}

