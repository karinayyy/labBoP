#include <iostream>
#include <cmath>

using namespace std;

bool readData(double &, double &, double &, double &);
double yFunc(double, double);

int main(){
    double a, b, h, n;
    if(readData(a, b, h, n)){    
        double x = a;
        while(x <= b){
            cout << yFunc(x, n) << endl;
            cout << "x = " << x << endl;
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