/* Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include <iostream>
using namespace std;

class Student 
{
    public:
        int roll_number;
        void get_student() 
	    {
             cout << "\n Enter Student Roll Number: ";
             cin >> roll_number;
        }
};

class Test : public Student 
{
    public:
        int marks[2];
        void get_test() 
		{
            for (int i = 0; i < 2; i++) 
		    {
                cout << "\n Enter marks for subject " << i + 1 << ": ";
                cin >> marks[i];
            }
        }
};

class result : public Test 
{
        public:
            int total_marks;
        void get_result() 
	    {
            total_marks = 0;
            for (int i = 0; i < 2; i++) 
		    {
                total_marks += marks[i];
            }
        }
        void print_result() 
	    {
            cout << "\n Roll Number: " << roll_number;
            for (int i = 0; i < 2; i++) 
		    {
                cout << "\n Marks in subject " << i + 1 << ": " << marks[i];
            }
            cout << "\n Total Marks: " << total_marks;
        }
};

int main() 
{
   result r;
   r.get_student();
   r.get_test();
   r.get_result();
   cout << "\n \n___Student Result___";
   r.print_result();
}

