/*Program do wyznaczania fukcji Eulera
Autor: Dominik Galoch */
#include <iostream>
using namespace std;
int check(int n);
float getPhi(int n);
int main()
{
	int number;
	cout << "Podaj argument funkcji Eulera: ";
	cin >> number;
	cout << "Wynik: ";
	if(!check(number))
		cout << number-1;
	else
	{
		cout << getPhi(number);
	}
	cout << endl;
	system("pause");
	return 0;
}
int check(int n)
{
	for(int i=(n-1); i>=2; i--)
	{
		if(n%i==0)
			return 1;
	}
	return 0;
}
float getPhi(int n)
{
	float phi = n; 
	for(int i=2; i<n; i++)
	{
		if(!check(i) && (n%i==0))
		{
			phi*=(float)(1-(1/(float)i));
		}
	}
	return phi;
}
