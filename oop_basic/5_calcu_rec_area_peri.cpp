/*C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.*/

#include<iostream>

using namespace std;

class Rectangle
{
    private :
    	float length,width;
    
	public :
	Rectangle(float l,float w) 
	{
        length = l;
        width = w;
    }

    float getLength() 
	{
        return length;
    }

    float getWidth() 
	{
        return width;
    }

    float area() 
	{
        return length * width;
    }

    float perimeter() 
	{
        return 2*(length + width);
    }
};
main()
{
	float length,width;
    cout << "\n Enter Rectangle length : ";
    cin >> length;
    cout << "\n Enter Rectangle width : ";
    cin >> width;
    
    Rectangle Rectangle(length,width);
    cout <<"\n Length of Rectangle: "<<  Rectangle.getLength();
	cout <<"\n width of Rectangle: "<< Rectangle.getWidth();
	cout <<"\n Area of Rectangle: "<< Rectangle.area();
	cout <<"\n Perimeter of Rectangle: "<< Rectangle.perimeter(); 

}
