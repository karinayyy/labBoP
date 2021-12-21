#include <iostream>
#include "dopTasks.h"

using namespace std;

void signum(double x){
    if(x < 0)
        cout << "y = " << -1 << endl;
    else if (x > 0)
        cout << "y = " << 1 << endl;
    else 
        cout << "y = " << 0 << endl;
}

double threeArg(double x, double y, double z){
    return x * y * z;
}

int taskEight(int n){
    int res = 1, i = 1;
    while(i <= 2 * n){
        if (i % 2 != 0)
            res *= i;
        i++;
    }
    return res;
}

double sum(double x){
    double  y = 0;
    int i =1;
    for(double z = 1; z > 0.00001; i++){
        y += z;
        z *= x / i;
    }
    return y;
}

int fac(int n){
    return n <= 1 ? 1 : n * fac(n - 1);
}

void evenNums(int a, int b){
    for (int i = a; i <= b; i++){
        if(i % 2 == 0)
            cout << i << endl;
    }
}

double sum(int n){
    double y = 1;
    for(int i =2 * n; i >= 1; i--){
        if(i % 2 == 0)
            y *= i;
    }
    return y;
}

void nod(int a, int b, int c){
    while(a != b){ //В самом простом случае алгоритм Евклида применяется к паре положительных целых чисел и формирует новую пару, которая состоит из меньшего числа и разницы между большим и меньшим числом. Процесс повторяется, пока числа не станут равными. 
        if (a < b)
            b = b - a;
        else{
            c = b;
            b = a - b;
            a = c;
        }
    }
    cout << a << endl;
}