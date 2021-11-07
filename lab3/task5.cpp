#include <iostream>
#include <cmath>

using namespace std;

bool readData(double &, double &, double &, double &);
double yFunc(double, double, double, double, double, double);

int main(){
    double a, b, h, y, n, x;
    if(readData(a, b, h, n)){
            cout << yFunc(x, n, h, y, a, b) << endl;
        return 0;
    }
    return -1;
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

double yFunc(double x, double n, double h, double y, double a, double b){
        x = a;
        while (x <= b){
            if (x < 0) {
                int i = 1;
                y = 1;
                while (i <= (n - 1)){
                    double s = 0, j = 1;
                    while (j <= n){
                        s += pow((x - pow(i, 2) + j), 2);
                        j++;
                    }
                    y *= s;
                    i++;
                }
            }
            else if (x >= 0) {
                int i = 0;
                y = 0;
                while (i <= (n - 1)){
                    y += (x - 1) / (i + 1);
                    i++;
                }
            }
            x+=h;
        }
        return y;
}