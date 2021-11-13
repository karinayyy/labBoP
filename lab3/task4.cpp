#include <iostream>
#include <cmath>

using namespace std;

double taskTwo( double a,
                double b,
                double c,
                double& x1,
                double& x2){
    if(a == 0){
        if(b == 0){
            if(c == 0)
                return -1;
            else
                return 0;
        }else{
            x1 = -c/b;
            return 1;
        }
    }else{
        double d = pow(b, 2) - (4 * a * c);
        if(d < 0)
            return 0;
        if(d > 0){
            d = sqrt(d);
            x1 = (-b + d) / (2 * a);
            x2 = (-b - d) / (2 * a);
            return 2;
        }else{
            x1 = -b / (2 * a);
            return 1;
        }
    }
}

int main(){
    double a, b, c, x1, x2;
    cout << "Enter a, b, c" << endl;
    cin >> a >> b >> c;
    int res = taskTwo(a, b, c, x1, x2);
    switch(res){
        case 0:
            cout << "Нет корней" << endl;
            break;
        case 1:
            cout << "x = " << x1 << endl;
            break;
        case 2:
            cout << "x1 = " << x1 << " x2 = " << x2 << endl;
            break;
        case -1:
            cout << "Бессконечное кол-во корней" << endl;
            break;
    }
    return 0;
}