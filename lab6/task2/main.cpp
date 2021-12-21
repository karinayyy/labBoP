#include <iostream>
#include "taskTwo.h"

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
        double min;
        if(chosen == 1){
            int n;
            cout << endl << "Enter n (power) "; 
            cin >> n;
            if(validDataExp(a,b,step))
                min = findMinSecondDerivative(a, b, step, n, expFunc, min);
        }else{
            int n;
            cout << endl << "Enter n (num of iterations)";
            cin >> n;
            if(validDataY(a,b,step,n))
                min = findMinSecondDerivative(a, b, step, n, yFunc, min);
        }
        cout << endl << "Min = " << min << endl;
    }
    return 0;
}