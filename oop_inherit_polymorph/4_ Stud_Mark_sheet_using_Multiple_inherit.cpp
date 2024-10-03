/*C++ Program display Student Mark sheet using Multiple inheritance.*/

#include<iostream>

using namespace std;

class Student
{
	int roll_number;
	string sname;
	
	public :
	void get_Student()
	{
		cout << "\n \n Enter Student Roll Number : ";
        cin >> roll_number;
        cout << "\n Enter Student name : ";
        cin >> sname;
	}
	
    	void print_Student()
	{	
		cout << "\n \n Student Roll Number : "<< roll_number;
        cout << "\n Student name : "<< sname;
	}
};
class Subject 
{
	protected :
	int mark[5];
	
	public :
		int i;
	void get_subject()
	{
		for (i=0;i<5;i++)
		{
			cout << "\n \n Enter marks for  subjects: "<< i + 1 << ": ";
            cin>>mark[i];
        }
	}
	void ptint_subject()
	{
	    
		for (i=0;i<5;i++)
		{
			cout << "\n \n Subject: "<< i + 1 << ": ";
            cout <<mark[i] << "\n ";
        }
	}	
};
class Marksheet :  public  Student, public Subject
{
	int total_mark;
	float percentage;
	public :
	void get_marksheet()
	{
		get_Student();
		get_subject();
		
	    total_mark=0;
        for (i=0;i<5;i++) 
		{
            total_mark+=mark[i];
        }
        percentage=total_mark/5;
	}
	void print_marksheet()
	{
		print_Student();
		ptint_subject();
		cout << "\n Total Marks : "<< total_mark;
        cout << "\n percentage : "<<percentage<< "%";
	}	      
};
main()
{
   Marksheet m;
   cout << "\n___Enter Student Details___";
   m.get_marksheet();
   
   cout << "\n \n___Student Marksheet___";
   m.print_marksheet();

}
