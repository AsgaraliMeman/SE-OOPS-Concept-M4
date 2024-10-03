/*Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/

#include <iostream>
using namespace std;

class Bank 
{
       private:
            string dep_name;
            double acc_no;
            string type_acc;
            float bal_amt;

       public:
       Bank() 
	   {
           bal_amt = 29037.90;  // Initial balance
       }

        void assign_value() 
	   {
            cout << "\n Name of the Depositor : ";
            cin >> dep_name;
            cout << "\n Account Number        : ";
            cin >> acc_no;
            cout << "\n Type of Account       : ";
            cin >> type_acc;
       }

       void deposit_amt() 
	   {
            int dep_amt;
            cout << "\n Deposit the Money     : ";
            cin >> dep_amt;
            bal_amt += dep_amt;
       }

        void withdraw_amt() 
	    {
        
            cout << "\n Your Balance Amount is : " << bal_amt;
            int amt;
            cout << "\n Withdraw the Amount   : ";
            cin >> amt;
            if (bal_amt >= amt)
                bal_amt -= amt;
            else
                cout << "\n Your Balance is  Insufficient...";
        
        }

        void display_value() 
	    {
            cout << "\n Depositor's Name      : " << dep_name;
            cout << "\n Balance Amount is     : " << bal_amt;
        }
};

int main() 
{
    Bank B;
    cout << "\n___Enter Bank Details___";
    B.assign_value();
    
    cout << "\n___Deposited the Amount___";
    B.deposit_amt();
    
    cout << "\n___Your Details___";
    B.display_value();
     
    cout << "\n___Withdraw the Amount___"; 
    B.withdraw_amt();
    
    cout << "\n___Remaining Balance___";
    B.display_value();
}

