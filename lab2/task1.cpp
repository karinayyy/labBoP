#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, x1, x2, d;
    cout << "Введите a, b, c " << endl;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            cout << "Бесконечное количевство корней" << endl;
        }

        else if (b != 0) {
            if (c == 0) {
                cout << "Нет корней" << endl;
            }
            else if (c != 0) {
                x1 = -c / b;
                cout << "x1 = " << x1 << endl;
            }
        }
    }

    else if (a != 0) {
        d = pow(b, 2) - 4 * a * c;
        cout << "D = " << d << endl;
        if (d < 0) {
            cout << "Нет корней" << endl;
        }
        else if (d > 0) {
            x1 = (-(b) + sqrt(d)) / (2 * a);
            x2 = (-(b) - sqrt(d)) / (2 * a);
            cout << "x1 = " <<  x1 << ", x2 =  " << x2 << endl;
        }
        else if (d == 0) {
            x1 = -b / (2 * a);
            cout << "x1 = " <<  x1 << endl;
        }
    }

    return 0;
}
