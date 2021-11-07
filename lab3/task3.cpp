#include <iostream>

using namespace std;

double firstSum(double x = 1){
    return x;
}

double sum(double x){
    return x;
}

double sum(double x, double y, double z){
    return x + y + z;
}

int main(){
    cout << firstSum() << endl;
    cout << sum(3) << endl;
    cout << sum(1, 2, 3) << endl;
    return 0;
}