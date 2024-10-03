/*Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/

#include<iostream>

using namespace std;

class calculator
{
	private:
           float result;
    
	public:
		calculator(float a, float b, char op)
		{
	        switch(op)
	        {
		           case '+' : cout<<"\n Addition = "<<a+b;
				   break;
				
		           case '-' : cout<<"\n Subtraction = "<<a-b;
				   break;
			
		           case '*' : cout<<"\n Multipication = "<<a*b;
				   break;
				
		           case '/' : cout<<"\n Divisin = "<<a/b;
				   break;
				
		          default:		
		          cout<<" Enter a Valid Number.";
	        }
	    }
};
main()
{
	float num1, num2;
    char operation;

    cout << "Enter Number1: ";
    cin >> num1;
    
	cout << "Enter Number2: ";
	cin>> num2;
	
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    calculator c(num1, num2, operation);
}
