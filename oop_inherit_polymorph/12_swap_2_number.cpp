/*Write a program to swap the two numbers using friend function
without using third variable.*/

#include <iostream>

using namespace std;

class Swap 
{
    public:
          int num1, num2;

    void inputNumbers() 
	{
        cout << "Enter a Number1: ";
        cin >> num1;
        cout << "Enter a Number2: ";
        cin >> num2;
    }

    void displayNumbers() 
	{
        cout << "\n After Swapping Numbers:";
        cout << "\n Number 1: " << num1;
        cout << "\n Number 2: " << num2;
    }

    friend void swapNumbers(Swap &);
};

void swapNumbers(Swap &s) 
{
    s.num1 = s.num1 + s.num2;
    s.num2 = s.num1 - s.num2;
    s.num1 = s.num1 - s.num2;
}

main() 
{
    Swap s;
    s.inputNumbers();
    swapNumbers(s);
    s.displayNumbers();
}
