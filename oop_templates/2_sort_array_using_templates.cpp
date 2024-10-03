/*Write a program of to sort the array using templates.*/

#include <iostream>

using namespace std;

template <class s>
void sort(s num[], int size) 
{
    s temp;
    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = i + 1; j < size; j++) 
		{
            if (num[j] < num[i]) 
			{	
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    cout << "\n \n After Sorting Numbers: ";
    for (int i = 0; i < size; i++) 
	{
        cout << num[i] << ", ";
    }
    cout << endl;
}

main() 
{
    int num[5];
    for (int i = 0; i < 5; i++) 
	{
        cout << " Enter number " << i + 1 << ": ";
        cin >> num[i];
    }

    cout << "\n Before Sorting Numbers: ";
    for (int i = 0; i < 5; i++) 
	{
        cout << "\n Number = " << num[i];
    }

    sort(num, 5);
}

