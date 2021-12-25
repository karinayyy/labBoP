#pragma once

int validChosen(int& chosen);
int validDataExp(double& a, double& b, double& step);
int validDataY(double& a, double& b, double& step, int& n);

typedef double (*theFunc)(double, int);

double expFunc(double x, int power);
double yFunc(double x, int n);
double findMinSecondDerivative(double a, double b, double step, int n, theFunc func, double& min);
