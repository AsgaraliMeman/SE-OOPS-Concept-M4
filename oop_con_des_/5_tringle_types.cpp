/*C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include <iostream>

using namespace std;

class triangle 
{
    private:
        int side1, side2, side3;

    public:
        
        triangle(int s1, int s2, int s3) 
		{
            side1 = s1;
            side2 = s2;
            side3 = s3;
        }

        void Triangle_type() 
		{
            if (side1 == side2 && side2 == side3) 
                cout <<"\n Equilateral Triangle";
                
            else if (side1 == side2 || side1 == side3 || side2 == side3) 
                cout <<"\n Isosceles Triangle";
            
			 else 
                cout <<"\n Scalene Triangle";
            
        }
        
        void display_Sides() 
		{
            cout <<"\n Sides of the triangle are: " << side1 << ", " << side2 << ", " << side3;
        }
};

main() 
{
    int s1, s2, s3;

    cout<<"\n Enter three sides of the triangle:" << endl;
    cout<<"\n Side 1: ";
    cin>>s1;
    cout<<"\n Side 2: ";
    cin>>s2;
    cout<<"\n  Side 3: ";
    cin>>s3;

    triangle t(s1, s2, s3);
    t.display_Sides();
    t.Triangle_type();
}



