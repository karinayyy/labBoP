#include <iostream>
#include <cmath>

using namespace std;

double sum(double x){
    double  y = 0;
    int i =1;
    for(double z = 1; z > 0.00001; i++){
        y += z;
        z *= x / i;
    }
    return y;
}

int main(){
    cout << sum(1) << endl;
    cout << sum(2) << endl;
    cout << sum(5) << endl;
    return 0;
}