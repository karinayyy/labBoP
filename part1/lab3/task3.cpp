#include <iostream>

using namespace std;

double sum(double x){
    return x;
}

double sum(double x, double y){
    return x * y;
}

double sum(){
    return 1;
}

double sum1(double x = 1, double y = 1){
    return x * y;
}

int main(){
    cout << sum() << endl;
    cout << sum(3) << endl;
    cout << sum(1, 2) << endl;
    cout << sum1() << endl;
    cout << sum1(3) << endl;
    cout << sum1(1, 2) << endl;
    
    return 0;
}