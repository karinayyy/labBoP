#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Введите a, b, c " << endl;
    cin >> a >> b >> c;
    if(a == 0){
        if(b == 0)
            c == 0 ? cout << "Бессконечное кол-во корней" << endl : cout << "Нет коренй" << endl;
        else{
            double x1 = -c / b;
            cout << "x1 = " << x1;
        }
    }else{
        double d = pow(b, 2) - (4 * a * c);
        cout << "d = " << d << endl;
        if (d < 0)
            cout << "Нет корней" << endl;
        else if (d > 0){
            double x1, x2;
            d = sqrt(d);
            cout << "sqrt(d) = " << d << endl;
            x1 = (-b + d) / (2 * a);
            x2 = (-b - d) / (2 * a);
            cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
        }else{
            double x1 = -b / (2 * a);
            cout << "x1 = " << x1 << endl;
        }
    }
    return 0;
}
