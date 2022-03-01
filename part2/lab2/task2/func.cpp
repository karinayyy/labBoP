#include <iostream>
#include <cmath>
#include "task2.h"

double YClass::findMinSecondDerivative(double a, double b, double step, int n, double& min){
    min = func(a, n);
    double dx = 0.0000001;
    for(double x = a; x <= b; x+= step){
        double y1 = (func(x + dx, n) - func(x, n)) / dx;
        double y2 = (pow(dx, 2)*y1)/(pow(dx, 2));
        if(y2 == 0){
            if(y2 < min) min = x;
        }
    }
    return min;
}