#include <iostream>
#include <cmath>
#include "./table.h"

using namespace std;

int main(){
    while(true){
        cout << "Do you want to continue? Enter 0 if no, 1 to start individuel func, 2 signum" << endl;
        int chosen = validChosen(chosen);
        if (chosen == 0){
            cout << "Bye" << endl;
            return 0;
        }
        double a, b, step;
        cout << endl << "Enter a "; 
        cin >> a;
        cout << endl << "Enter b "; 
        cin >> b;
        cout << endl << "Enter step "; 
        cin >> step;
        if(chosen == 1){
            int n;
            cout << endl << "Enter n "; 
            cin >> n;
            tableValues(a, b, step, n, yFunc);
        }else
            tableValues(a, b, step, signumFunc);

    }
    return 0;
}

int signumFunc(double x){
    return x > 0 ? 1 : (x < 0 ? -1 : 0);
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