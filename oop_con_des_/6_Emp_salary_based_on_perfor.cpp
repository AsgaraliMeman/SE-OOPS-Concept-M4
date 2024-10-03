/*C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor*/

#include<iostream>

using namespace std;

class Employee
{
	private :
	        string name;
       	    int id;
	        int salary;
	public :
	Employee(string emp_name,int emp_id,int emp_salary)
	{
		name=emp_name;
		id = emp_id;
		salary= emp_salary;
	}  
	void emp_performance(float performance_rating)
	{
        if (performance_rating >= 0.0 && performance_rating <= 1.0) 
		{
            float increment = salary * performance_rating;
            salary += increment;
            cout << "\n Performance-based increment: " << increment;
        } 
		else 
            cout << "\n Invalid performance rating. Salary remains unchanged.";
    } 
	void display()  
	{
        cout << "\n Employee Data: ";
        cout << "\n Employee ID: " << id;
        cout << "\n Employee Name: " << name;
        cout << "\n Employee Salary: " << salary;
    }     	
};
main()
{
	string name;
    int id;
	int salary;
	
	cout << "\n Enter the Employee ID: ";
    cin >> id;
    cout << "\n Enter the Name: ";
    cin >> name;
    cout << "\n Enter the Salary: ";
    cin >> salary;
    
    Employee e(name, id, salary);
    
    e.display();

    float performance_rating;
    cout << "\n Enter performance rating (0.0 to 1.0): ";
    cin >> performance_rating;
    e.emp_performance(performance_rating);

    e.display();
}
