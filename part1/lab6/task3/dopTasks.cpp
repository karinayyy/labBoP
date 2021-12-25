#include <iostream>
#include <cmath>
#include "dopTasks.h"

using namespace std;

void minMax(int i){
    static int min = i;
    static int max = i;
    if (i < min)
        min = i;
    if(i > max)
        max = i;
    cout << "min = " << min << endl << "max = " << max << endl;
}

double sum(int m, double x){
    if(m < 1){
        return 1;
    } else{
        return (x + m) * sum(m - 1, x); // n = 4 x = 5 (4+5)(3+5)(2+5)(1+5)=3024
    }
}

double sum3(double x){
    return x;
}

double sum3(double x, double y){
    return x * y;
}

double sum3(){
    return 1;
}

double sum31(double x, double y){
    return x * y;
}


double taskTwo( double a4,
                double b4,
                double c4,
                double& x14,
                double& x24){
    if(a4 == 0){
        if(b4 == 0){
            if(c4 == 0)
                return -1;
            else
                return 0;
        }else{
            x14 = -c4/b4;
            return 1;
        }
    }else{
        double d = pow(b4, 2) - (4 * a4 * c4);
        if(d < 0)
            return 0;
        if(d > 0){
            d = sqrt(d);
            x14 = (-b4 + d) / (2 * a4);
            x24 = (-b4 - d) / (2 * a4);
            return 2;
        }else{
            x14 = -b4 / (2 * a4);
            return 1;
        }
    }
}


bool readData(double& a, double& b, double& h, double& n){
    cout << "Введите входные данные (интервал a-b(a <= b), шаг h > 0, n > 1)" << endl;
    cin >> a >> b >> h >> n;
    if (a <= b && h > 0 && n > 1){
        return true;
    }
    else{
        cout << "Введите: (a <= b)&&(h > 0)&&(n > 1) " << endl;
        return false;
    }
}

double yFunc(double x, double n){
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


double sumOfPowers(double q, int w){
    double sum = 0;
    double power = 1;
    // Степені та суму можна розрахувати за один цикл:
    for (int i = 0; i < w; i++){
        power *= q;
        sum += power;
    }
    return sum;
}

int add(int p){
    static int sum = 0;
    sum += p;
    return sum;
}


int read(){
    int g;
    cout << "Input n:";
    cin >> g;
    return g;
}

int calc(int g){
    int f = 0;
    for (int i = 1; i <= g; i++)
    {
       f += i * i;
    }
    return f;
}

void write(int f){
    cout << "y = " << f;
}