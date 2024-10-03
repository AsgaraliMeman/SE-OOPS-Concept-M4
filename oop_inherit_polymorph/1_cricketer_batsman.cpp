/*Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/

#include<iostream>

using namespace std;

class cricketer
{
	string name;
	int age;
	
	public :
	void get_cricketer()
	{
		cout << "___Enter Cricketer Details___";
		cout << "\n Enter Cricketer Name : ";
        cin >> name;
        cout << "\n Enter Cricketer Age : ";
        cin >> age;
	}
	
	void print_cricketer()
	{
		cout << "\n___Cricketer Details___";
		cout << "\n Cricketer Name : "<<name;
        cout << "\n Cricketer Age : "<< age;
	}	
};
class batsman : public cricketer
{
	int total_runs, best_performance,matches_played;
	float average_runs;
	
	public:
	void get_batsman()
	{
		cout << "\n___Enter Batsman Details___";
		cout << "\n Enter Batsman Total Run : ";
        cin >> total_runs;
        cout << "\n Enter Batsman Best Performance  : ";
        cin >> best_performance;
		cout << "\n Enter Batsman Matches Played  : ";
        cin >> matches_played;
        average_runs=total_runs/matches_played;
	}
	void print_batsman()
	{
		cout << "\n___Batsman Dtails___";
		cout << "\n Batsman Total Run : "<< total_runs;
        cout << "\n Batsman Best Performance  : "<< best_performance;
        cout << "\n Enter Batsman Matches Played  : "<< matches_played;
		cout << "\n Batsman Average Runs: " << average_runs;
	}	
};
main()
{
	batsman b;

	b.get_cricketer();
	b.get_batsman();
	
	b.print_cricketer();
	b.print_batsman();
	
}
