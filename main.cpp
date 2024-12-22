#include <iostream>
#include <iomanip>
#include "DLLHeader.h"

using namespace std;

int main()
{
	matr a; vect x;
	elem_Matr(a);
	cout << "Matrix:\n";
	cout << fixed;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++)
			cout << setprecision(2) << a[i][j] << "\t";
		cout << endl;
	}
	elem_Vect(a, x);
	cout << "\nVector:\n";
	for (int i = 0; i < n; i++)
		cout << setprecision(2) << x[i] << "\t";
	cout << endl;
	double result = product(a);
	cout << "\nProduct: " << result << endl;
	return 0;
}