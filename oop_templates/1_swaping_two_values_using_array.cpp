/*program of to swap the two values using template*/

#include<iostream>

using namespace std;

template <class n>
void swapping(n a, n b)
{
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"\n \n After Swapping ----------------";
	cout<<"\n Number1 = "<<a;
	cout<<"\n Number2 = "<<b;
}


main()
{
 	int num1, num2;
	
	cout<<"\n Enter a Number1 : ";
	cin>>num1;
	cout<<"\n Enter a Number2 : ";
	cin>>num2;
	
	cout<<"\n Before Swapping ----------------";
	cout<<"\n Number1 = "<<num1;
	cout<<"\n Number2 = "<<num1;
	
	swapping(num1, num2);
}
