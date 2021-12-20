#include <iostream>
#include "./table.h"

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

int validData(double& a, double& b, double& step){
    if (a <= b && step > 0)
        return 1;
    else{
        cout << "Введите: (a <= b)&&(h > 0)&&(n > 1) " << endl;
        return 0;
    }
}

int validData(double& a, double& b, double& step, int& n){
    if (a <= b && step > 0 && n > 1)
        return 1;
    else{
        cout << "Введите: (a <= b)&&(h > 0)&&(n > 1) " << endl;
        return 0;
    }
}

void tableValues(double a, double b, double step, signumPointer func){
    if(validData(a, b, step)){
        double x = a;
        while(x <= b){
            int y = signumFunc(x);
            cout << "x = " << x << endl;
            cout << " y = " << y << endl;
            x+=step;
        }
    }
}

void tableValues(double a, double b, double step, int n, yFuncPointer func){
    if(validData(a, b, step, n)){
        double x = a;
        while(x <= b){
            cout << "x = " << x << endl;
            cout << " y = " << yFunc(x, n) << endl;
            x+=step;
        }
    }
}
