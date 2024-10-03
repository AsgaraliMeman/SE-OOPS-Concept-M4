/*Write a program to find the max number from given two numbers
using friend function*/

#include <iostream>

using namespace std;

class Max 
{
     public:
           int num1, num2;
           int max;

    void inputNumbers() 
	{
        cout << "Enter a Number1: ";
        cin >> num1;
        cout << "Enter a Number2: ";
        cin >> num2;
    }

    void displayMax() 
	{
        cout << "\nMax Number is: " << max;
    }

    friend void findMax(Max&);
};

void findMax(Max& m) 
{
    m.max = (m.num1 > m.num2) ? m.num1 : m.num2;
}

main() 
{
    Max m;
    m.inputNumbers();
    findMax(m);
    m.displayMax();
}

