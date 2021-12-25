#include <iostream>
#include "dopTasks.h"

using namespace std;


bool readData(double &, double &, double &, double &);
double yFunc(double, double);

int main(){

    cout << "Task1" << endl;

    int i;
    do{
        cout << "Enter i" << endl;
        cin >> i;
        minMax(i);
    }while (i);

    cout << "Task2" << endl;

    int m;
    double x;
    cout << "Enter n, x" << endl;
    cin >> m >> x;
    cout << sum(m, x) << endl;

    cout << "Task3" << endl;

    cout << sum3() << endl;
    cout << sum3(3) << endl;
    cout << sum3(1, 2) << endl;
    cout << sum31() << endl;
    cout << sum31(3) << endl;
    cout << sum31(1, 2) << endl;

    cout << "Task4" << endl;

    double a4, b4, c4, x14, x24;
    cout << "Enter a, b, c" << endl;
    cin >> a4 >> b4 >> c4;
    int res = taskTwo(a4, b4, c4, x14, x24);
    switch(res){
        case 0:
            cout << "Нет корней" << endl;
            break;
        case 1:
            cout << "x = " << x14 << endl;
            break;
        case 2:
            cout << "x1 = " << x14 << " x2 = " << x24 << endl;
            break;
        case -1:
            cout << "Бессконечное кол-во корней" << endl;
            break;
    }

    cout << "Task5" << endl;

    double a, b, h, n;
    if(readData(a, b, h, n)){    
        double x = a;
        while(x <= b){
            cout << "x = " << x << endl;
            cout << "y = " << yFunc(x, n) << endl;
            x+=h;
        }
    }

    cout << "Dop1" << endl;

    signum(5) ; 
    signum(0) ;
    signum(-15);

    cout << "Dop2" << endl;

    cout << threeArg(2, 3, 4) << endl;
    cout << threeArg(2, 3) << endl;
    cout << threeArg(2) << endl;

    cout << "Dop3" << endl;

    cout << taskEight(2) << endl;
    cout << taskEight(4) << endl;
    cout << taskEight(5) << endl;

    cout << "Dop4" << endl;

    cout << sum(1.0) << endl;
    cout << sum(2.0) << endl;
    cout << sum(5.0) << endl;

    cout << "Dop5" << endl;

    cout << fac(1) << endl;
    cout << fac(2) << endl;
    cout << fac(5) << endl;
    cout << fac(6) << endl;

    cout << "Dop6" << endl;

    evenNums(-20, 20);

    cout << "Dop7" << endl;

    cout << sum(1) << endl;
    cout << sum(2) << endl;
    cout << sum(4) << endl;

    cout << "Dop8" << endl;

    nod(12, 9); //3
    nod(24, 18); //6
    nod(28, 16); //4

    cout << "Example1" << endl;

    double q;
    int w;
    cout << "Enter x and n:";
    cin >> q >> w;
    cout << sumOfPowers(q, w) << endl;

    cout << "Example2" << endl;

    int p;
    do
    {
        cin >> p;
        cout << add(p) << endl;
    }
    while (p);

    cout << "Example3" << endl;

    int g = read();
    int f = calc(g);
    write(f);
    return 0;


    return 0;
}