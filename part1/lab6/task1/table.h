#pragma once

int validChosen(int& chosen);

typedef int (*signumPointer)(double);
typedef double (*yFuncPointer)(double, int);

int signumFunc(double x);
double yFunc(double x, int n);

void tableValues(double a, double b, double step, signumPointer func);
void tableValues(double a, double b, double step, int n, yFuncPointer func);