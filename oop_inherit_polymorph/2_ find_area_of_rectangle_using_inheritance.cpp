/*C++ Program to find Area of Rectangle using inheritance.*/
#include<iostream>

using namespace std;

class Rectangle
{	
    public :
    	float length,width;
	void get_Lenwid()
	{
		cout << "\n Enter Rectangle length : ";
        cin >> length;
        cout << "\n Enter Rectangle width : ";
        cin >> width;	
	}
	
};
class area : public Rectangle
{
	public :
		float area; 
	void get_area()
	{
		area=length*width;
	}
	void print_area()
	{
		cout <<"\n Length of Rectangle: "<<length;
	    cout <<"\n width of Rectangle: "<<width;
		cout <<"\n \n Area of Rectangle: "<<area;
	}
};
main()
{
	area a;
	a.get_Lenwid();

	
	a.get_area();
	a.print_area();
}
