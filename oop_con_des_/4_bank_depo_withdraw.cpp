/*C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include<iostream>
using namespace std;

class Bank
{
	private :
		double acc_num;
		int bal_amt;
	public :
		void get_value()
		{
			cout<<"\n Enter Account Number: ";
			cin>>acc_num;
			cout<<"\n Enter Account Balance: ";
			cin>>bal_amt;
		}
		void deposit() 
		{
        int dep_amt;
        cout << "\n Deposit the Money     : ";
        cin >> dep_amt;
        bal_amt += dep_amt;
        cout << "\n Total Balance is              : "<< bal_amt;
        }
        void withdraw() 
		{
            char select;
            cout << "\n\t Do you want to withdraw money? (Y/N): ";
            cin >> select;
            if (select == 'Y' || select == 'y')
			{
             cout << "\n\t Your Balance Amount is : " << bal_amt;
                 int amt;
                cout << "\n\t Withdraw the Amount   : ";
                cin >> amt;
                if (bal_amt >= amt)
                {
                    bal_amt -= amt;
                    cout << "\n\t Total Balance is              : "<< bal_amt;
                }
                else
                     cout << "\n\t Your Balance is not Sufficient...";
            }
            else 
                  cout << "\n\n\tNo Money Withdrawal";
        
        }  
};
main()
{
	Bank b;
	b.get_value();
	b.deposit();
	b.withdraw();
}
