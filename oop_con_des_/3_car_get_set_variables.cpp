/*C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables.*/

#include <iostream>
using namespace std;

class Car 
{
    private:
         string company;
         string model;
         int year;

    public:
    void setCompany( string &comp) 
	{
        company = comp;
    }

    string getCompany() 
	{
        return company;
    }

    void setModel(string &mdl) 
	{
        model = mdl;
    }

    
    string getModel() 
	{
        return model;
    }

   
    void setYear(int yr) 
	{
        year = yr;
    }

    
    int getYear() 
	{
        return year;
    }

    
    void displayCarDetails() 
	 {
        cout << "\nCar Company Name: " << company;
        cout << "\nCar Model: " << model;
        cout << "\nModel Year: " << year << endl;
    }
};

main() 
{
    Car c;
    string company, model;
    int year;

    cout << "Enter Car Company Name: ";
    cin >> company;
    c.setCompany(company);

    cout << "Enter Car Model: ";
    cin >> model;
    c.setModel(model);

    cout << "Enter Model Year: ";
    cin >> year;
    c.setYear(year);

    c.displayCarDetails();
}
