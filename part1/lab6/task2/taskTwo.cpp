#include <iostream>
#include <cmath>
#include "taskTwo.h"

using namespace std;

int validChosen(int& chosen){
    while(true){
        cin >> chosen;
        if((chosen != 0 && chosen != 1 && chosen != 2) && (chosen < '0' || chosen > '9'))
            cout << "Select 0, 1 or 2" << endl;
        else
            return chosen;
    }
}

int validDataExp(double& a, double& b, double& step){
    if(a <= b && step > 0)
        return 1;
    else{
        cout << "Введите: (a <= b)&&(step > 0)" << endl;
        return 0;
    }
}

int validDataY(double& a, double& b, double& step, int& n){
    if (a <= b && step > 0 && n > 1)
        return 1;
    else{
        cout << "Введите: (a <= b)&&(step > 0)&&(n > 1) " << endl;
        return 0;
    }
}

double expFunc(double x, int power){
    double result = 1;
    if(x == 0) return 0;
    if(power == 0) return result;
    if(power > 0){
        for(int i = 0; i < power; i++)
            result *= x;
        return result;
    }else{
        for(int i = 0; i > power; i--)
            result/=x;
        return result;
    }
}

double yFunc(double x, int n){
    double y;
    if (x < 0) {
        y = 1;
        for (int i = 1; i <= (n - 1); i++){
            double s = 0;
            for (int j = 1; j <= n; j++){
                s += pow((x - pow(i, 2) + j), 2);
            }
            y *= s;
        }
    }
    else if (x >= 0) {
        y = 0;
        for (int i = 0; i <= (n - 1); i++){
            y += (x - 1) / (i + 1);
        }
    }
    return y;
}

double findMinSecondDerivative(double a, double b, double step, int n, theFunc func, double& min){
    min = func(a, n);    
    double dx = 0.0000001;
    for(double x = a; x <= b; x+= step){
        double y1 = (func(x + dx, n) - func(x, n)) / dx;
        double y2 = (pow(dx, 2)*y1)/(pow(dx, 2));
        if(y2 == 0){
            if(y2 < min) min = x;
        }
    }
    cout << endl << "Min = " << min << endl;
    return 0;
}