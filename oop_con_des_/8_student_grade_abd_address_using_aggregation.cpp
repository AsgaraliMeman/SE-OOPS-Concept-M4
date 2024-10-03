/*C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation.*/

#include<iostream>
using namespace std;

class Address
{
	 private :
	        string land,city,state;
	 public :
	 	Address(string land,string city,string state)
	 	  {
	 	    this-> land=land;
	 	    this-> city=city;
	 	    this-> state=state;
	 	  }
	 	void display_address()
		{
			cout<<"\n Address: "<<land<<','<<city<<','<<state;
		}     
	 	    
};

class Student 
{
     private :
	        string name,cls;
			int rnum,marks;
			Address a;
			
	 public :
	  	Student(string n, string c, int r, int m, Address a) : a(a)
		  {
		  	name=n;
		  	cls=c;
		  	rnum=r;
		  	marks=m;	
		  }
		  	
	 void display_student()
	 {
	 	cout<<"\n Student Name: "<<name;
	 	cout<<"\n Student Class: "<<cls;
	 	cout<<"\n Student Roll Number: "<<rnum;
	 	cout<<"\n Student marks: "<<marks;
	 	cout<<"\n Student Grade: "<<calculateGrade();
	 	a.display_address();
	 }
	 
	 string calculateGrade() 
	  {
         if (marks >= 90) return "A+";
         else if (marks >= 80) return "A";
         else if (marks >= 70) return "B";
         else if (marks >= 60) return "C";
         else return "D";
      }	  
};
main()
{
	string name,cls,land,city,state;
	int rnum,marks;
	
	cout<<"\n___Enter Student Details___";
	cout<<"\n Enter student name: ";
    getline(cin, name);
    cout<<"\n Enter student class: ";
    getline(cin,cls);
    cout<<"\n Enter roll number: ";
    cin>>rnum;
    cout<<"\n Enter marks: ";
    cin>>marks;
    cin.ignore();
    
    cout<<"\n___Enter Student Adress__";
    cout<<"\n Enter Socity: ";
    getline(cin, land);
    cout<<"\n Enter city: ";
    getline(cin,city);
    cout<<"\n Enter state: ";
    getline(cin, state);
    
    Address a(land,city,state);
    Student s(name,cls,rnum,marks,a);
    
    s.display_student();
}
