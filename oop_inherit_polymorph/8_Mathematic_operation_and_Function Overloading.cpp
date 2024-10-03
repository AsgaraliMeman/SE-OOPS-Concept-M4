/* Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading.*/

#include <iostream>
using namespace std;

class calculater
{
        public:
            int operate(int a, int b) 
			{
                return a + b;
            }
    
           int operate(int a, int b, char op) 
	       {
               if (op == '-') 
		       {
                   return a - b;
               } 
           }
		    
           float operate(float a, float b) 
	       {
                return a * b;
           }

           float operate(float a, float b, char op) 
		   {
              if (op == '/') 
              return a / b;
           }
        
};
main()
{
	calculater c;
	int a = 10, b = 5;
    float x = 10.5, y = 2.5;

    cout<<"\n Addition of integers: " <<c.operate(a, b);
    cout<<"\n Subtraction of integers: " <<c.operate(a, b, '-');
    cout<<"\n Multiplication of doubles: " <<c.operate(x, y);
    cout<<"\n Division of doubles: " <<c.operate(x, y, '/');
}
