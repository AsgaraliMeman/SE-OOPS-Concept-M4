/*C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.*/

#include<iostream>

using namespace std;

class Person 
{
    private:
        string name, country;
        int age;

    public:
        void setName(string pname) 
		{
            name = pname;
        }

        string getName() 
		{
            return name;
        }

        void setAge(int page) 
		{
            age = page;
        }

        int getAge() 
		{
            return age;
        }

        void setCountry(string pcountry) 
		{
            country = pcountry;
        }

        string getCountry() 
		{
            return country;
        }

        void displayPersonDetails() 
		{
            cout << "\n Person Name: " << name;
            cout << "\n Person Age: " << age;
            cout << "\n Person Country: " << country;
        }
};

main() 
{
    Person p;
    string name, country;
    int age;

    cout << "Enter Person Name: ";
    cin >> name;
    p.setName(name);

    cout << "Enter Person Age: ";
    cin >> age;
    p.setAge(age);

    cout << "Enter Person Country: ";
    cin >> country;
    p.setCountry(country);

    p.displayPersonDetails();
}

