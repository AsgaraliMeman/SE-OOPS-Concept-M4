/*Write a program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area.*/

#include <iostream>
using namespace std;

class AreaCalculator 
{
    public:
        float area(float radius) 
        {
            return 3.14159f * radius * radius;
        }

        float area(float length, float breadth) 
        {
            return length * breadth;
        }

        float area(float base, float height, bool isTriangle) 
        {
            return 0.5f * base * height;
        }
};

main() 
{
    AreaCalculator calc;
    float radius, length, breadth, base, height;

    cout<<"\n Enter the radius of the circle: ";
    cin>>radius;
    cout<<"Area of Circle: " << calc.area(radius);

    cout<<"\n Enter the length and breadth of the rectangle: ";
    cin>>length>>breadth;
    cout<<"\n Area of Rectangle: " << calc.area(length, breadth);

    cout<<"\n Enter the base and height of the triangle: ";
    cin>>base>>height;
    cout<<"\n Area of Triangle: " << calc.area(base, height, true);
}
