/* Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance*/

#include<iostream>

using namespace std;

class Grandparent 
{
      public:
          Grandparent() 
	      {
                cout << "Grandparent constructor called" << endl;
          }
};

class Parent : public Grandparent 
{
      public:
          Parent() 
		  {
               cout << "Parent constructor called" << endl;
          }
};

class Child : public Parent 
{
      public:
          Child() 
		  {
               cout << "Child constructor called" << endl;
          }
};

main() 
{
    Child obj;
}
