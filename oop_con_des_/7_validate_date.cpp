/*C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.*/

#include<iostream>

using namespace std;

class date
{
	  private :
	  	     int day;
	  	     int month;
	  	     int year;
	  	     
	  	    int LeapYear(int y)
			{
              return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
            }
            
            int daysInMonth(int m, int y)  
			{
               if (m == 2) 
                    return LeapYear(y) ? 29 : 28;
        
		       else if (m == 4 || m == 6 || m == 9 || m == 11) 
                       return 30;
         
		       else 
                    return 31;
        
           }
            
	  public :
	    void setday(int d) 
		{
            day = d;
        }

        int getday() 
		{
            return day;
        }
		void setmonth(int m) 
		{
            month = m;
        }

        int getmonth() 
		{
            return month;
        }
		void setyear(int y) 
		{
            year = y;
        }

        int getyear() 
		{
            return year;
        }
		
		int ValidDate()  
		{
        if (month < 1 || month > 12) 
		{
            return false;
        }
        if (day < 1 || day > daysInMonth(month, year)) 
		{
            return false;
        }
        return true;
    }

			  
		void display_date()
		{
			cout<<"\n Day: "<<day;
			cout<<"\n Month: "<<month;
			cout<<"\n year: "<<year;
			
			if (ValidDate()) 
              cout << "\n\t Date is Valid: "<<day<<'/'<<month<<'/'<<year;
             
		    else 
                cout << "\n\t Date is Not Valid: "<<day<<'/'<<month<<'/'<<year;
       }
};
main()
{
	date d;
	int day,month,year;
	
	cout<<"\n Enter a Day: ";
	cin>>day;
	d.setday(day);
	
	cout<<"\n Enter a Month: ";
	cin>>month;
	d.setmonth(month);
	
	cout<<"\n Enter a Year: ";
	cin>>year;
	d.setyear(year);
	
	d.display_date();
}

