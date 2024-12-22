#pragma once
#define n 6
#define k 5

typedef double matr[n][k], vect[n];

_declspec(dllexport) void elem_Matr(matr c);
_declspec(dllexport) void elem_Vect(matr c, vect v);
_declspec(dllexport) double product(matr c);