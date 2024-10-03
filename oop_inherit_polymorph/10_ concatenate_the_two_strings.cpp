/*Write a program to concatenate the two strings using Operator Overloading*/

#include <iostream>
#include <cstring>

using namespace std;

class String 
{
    private:
        char str[100];
    public:
        String() 
        {
            str[0] = '\0'; 
        }

        String( char* s) 
        {
            strcpy(str, s);
        }

        void display() 
        {
            cout << str << endl;
        }

        String operator+(String& s) 
        {
            String temp;
            strcpy(temp.str, str);
            strcat(temp.str, s.str);
            return temp;
        }
        friend istream& operator>>(istream& in, String& s) 
        {
            in >> s.str;
            return in;
        }
};

main() 
{
    String str1,str2,str3;
    
    cout<<"\n Enter a First String: ";
    cin>>str1;
    cout<<"\n Enter a Second String: ";
    cin>>str2;

    str3 = str1 + str2;

    cout << "Concatenated String: ";
    str3.display();
}
