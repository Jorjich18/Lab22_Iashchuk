#include <math.h>
#include "DLLHeader.h"

void elem_Matr(matr c)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			c[i][j] = sqrt(log(i * i + j * j + 2.5)) * pow(i - 2.5, j);
}

void elem_Vect(matr c, vect v)
{
	for (int i = 0; i < n; i++) {
		double sr = 0;
		v[i] = 0;
		for (int j = 1; j < k; j += 3) {
			sr += c[i][j] / n;
			v[i] += sr;
		}
	}
}

double product(matr c)
{
	double prdct = 1.0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			if (c[i][j] < 10) {
				prdct *= c[i][j];
			}
	return prdct;
}