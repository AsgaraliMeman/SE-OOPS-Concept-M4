/* Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance).*/

#include <iostream>
using namespace std;

class Person 
{
    protected:
        string name;
        int age;
    public:
        Person() : name(""), age(0) {}
    void getPersonDetails() 
	{
        cout<<"\nEnter the Person's Name: ";
        cin>>name;
        cout<<"\n Enter the Age: ";
        cin>>age;
    }
    void displayPersonDetails(const string& role)  
	{
        cout<<"\n Person's Name: " << name;
        cout<<"\n Age: " << age;
        cout<<"\n Role of the Person (Student/Teacher): " << role;
    }
};

class Student : public Person 
{
    private:
         int marks[5];
         int total;
         float percentage;
    public:
           Student() : total(0), percentage(0.0) {}
    void getMarks() 
	{
        total = 0;
        for (int i = 0; i < 5; ++i) 
		{
            cout<<"\n Enter Marks for Subject " << i + 1 << ": ";
            cin>>marks[i];
            total += marks[i];
        }
        percentage = (total) / 5;
    }
    void displayStudentDetails()
	{
        cout << "\nMarks:";
        for (int i = 0; i < 5; ++i)
		 {
            cout<<"\n Subject " << i + 1 << ": " << marks[i];
        }
        cout<<"\n Total Marks: " << total;
        cout<<"\n Percentage: " << percentage << "%";
    }
};

class Teacher : public Person 
{
    private:
         float salary;
    public:
    Teacher() : salary(0.0) {}
    void getSalary() 
	{
        cout<<"\n Enter the Salary: ";
        cin>>salary;
    }
    void displayTeacherDetails()  
	{
        cout<<"\n Salary: "<< salary;
    }
};

main() 
 {
    string role;
    Teacher t;
    Student s;

    cout<<"\n Enter the Details\n";
    t.getPersonDetails();
    cout<<"\n Role of the Person (Student/Teacher): ";
    cin>>role;

    cout<<"\n Display Details\n";
    t.displayPersonDetails(role);

    if (role == "Student" || role == "student") 
	{
        s.getMarks();
        s.displayStudentDetails();
    } 
	else if (role == "Teacher" || role == "teacher") 
	{
        t.getSalary();
        t.displayTeacherDetails();
    } 
	else 
        cout<<"\n Invalid role entered!";
    
}

