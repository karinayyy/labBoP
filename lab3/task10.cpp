#include <iostream>

using namespace std;

int fac(int n){
    return n <= 1 ? 1 : n * fac(n - 1);
}

int main(){
    cout << fac(1) << endl;
    cout << fac(2) << endl;
    cout << fac(5) << endl;
    cout << fac(6) << endl;
    return 0;
}