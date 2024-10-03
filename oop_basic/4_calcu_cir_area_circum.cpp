/*C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference.*/

#include<iostream>

using namespace std;

class Circle
{
    private :
    	float radius;
		 
    public:
    Circle(float r) 
	{
        radius = r;
    }

    float area() 
	{
        return 3.14*radius*radius;
    }

    float circumference() 
	{
        return 2*3.14*radius;
    }	
	
};
main()
{
    float radius;
    cout << " Enter circle radius: ";
    cin >> radius;

    Circle circle(radius);

    cout << "\n Radius of Circle: " << radius;
    cout << "\n Area of Circle: " << circle.area();
    cout << "\n Circumference of Circle : " << circle.circumference();

}
