/*C++ Program to show access to Private Public and Protected using 
Inheritance*/

#include <iostream>
using namespace std;

class Base 
{
    private:
    int privatevar;
     protected:
    int protectedvar;
    public:
    int publicvar;

    Base() : privatevar(1), protectedvar(2), publicvar(3) {}


    int getPrivatevar() 
	{
        return privatevar;
    }
};

class Derived : public Base 
{
    public:
           void display() 
	{
        cout<<"\n Private Variable (accessed via function):"<< getPrivatevar();
        cout<<"\n Protected Variable: " << protectedvar ;
        cout<<"\n Public Variable: " << publicvar;
    }
};

int main() {
    Derived obj;
    obj.display();
    return 0;
}

