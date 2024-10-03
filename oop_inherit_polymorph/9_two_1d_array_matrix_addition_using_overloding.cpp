/* Write a Program of Two 1D Matrix Addition using Operator Overloading*/

#include<iostream>

using namespace std;


class Matrix
{
	private:
			int size;
			int *arr;

	public:
			Matrix(int s)
			{
				size = s;
				arr = new int[size];
			}

			void input()
			{
				for(int i=0; i<size; i++)
				{
					cout<<"\t Enter the element "<<i+1<<" : ";
					cin>>arr[i];
				}
			}

			void display()
			{
				for(int i=0; i<size; i++)
				{
					cout<<" "<<arr[i];
				}cout<<endl;
			}

			Matrix operator + ( Matrix &m)
			{
				Matrix m3(5);

				for(int i=0; i<size; i++)
				{ 
					m3.arr[i] = arr[i] + m.arr[i];
				}
				return m3;
			}
};
main()
{
	Matrix m1(5);

	cout<<"\n Enter the Matrix 1 values  :\n";
	m1.input();
	cout<<"\n Matrix 1 values :";
	m1.display();

	cout<<"\n Enter the Matrix 2 values :\n";
	Matrix m2(5);
	m2.input();
	cout<<"\n Matrix 2 values :";
	m2.display();

	Matrix m3(5);
	m3 = m1 + m2; 

	cout<<"\n Two matrix Addition : ";
	m3.display();

}
