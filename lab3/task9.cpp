#include <iostream>
#include <cmath>

using namespace std;

double sum(int x){
    return x < 1 ? 1 : pow(M_E,x) + sum(x - 1) - 1;
}

int main(){
    cout << sum(1) << endl;
    cout << sum(2) << endl;
    cout << sum(5) << endl;
    return 0;
}