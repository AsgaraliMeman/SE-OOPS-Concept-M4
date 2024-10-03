/*Write a program to find the multiplication values and the cubic values using
inline function*/

#include<iostream>

using namespace std;
class calculator 
{
    public:
    
        inline float multiply(int x) 
	    {
            return x * x;
        }

        inline float cube(int x) 
	    {
           return x * x * x;
        }  
};

main()  
{
        calculator c;
        int val;

        cout << "\n Enter values: ";
        cin >> val ;
    
        cout << "\n Multiplication value is: " << c.multiply(val);
        cout << "\n Cube value of " << val << " is: " <<c.cube(val);
}
