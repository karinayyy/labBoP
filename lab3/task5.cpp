#include <iostream>
#include <cmath>

using namespace std;

bool readData(double &, double &, double &, double &);
double yFunc(double, double);

int main(){
    double a, b, h, y, n, x;
    if(readData(a, b, h, n)){
        double x = a;
        while(x <= b){
            cout << "x = " << x << " y = " << y << yFunc(x, n) << endl;
            x+=h;
        }
        return 0;
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
            int i = 1;
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
            double i = 0;
            y = 0;
            while (i <= (n - 1)){
                y += (x - 1) / (i + 1);
                i++;
            }
        }
    return y;
}