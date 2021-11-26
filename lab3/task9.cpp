#include <iostream>
#include <cmath>

using namespace std;

double sum(int x, int n){
    double y = 0;
    for(int i = 0; i < n; i++){
        y += ((x^n)/(n))+sum(x,n-1);
    }
    return y + 1;
}

int main(){
    cout << sum(1, 1) << endl;
    cout << sum(2, 5) << endl;
    cout << sum(5, 2) << endl;
    return 0;
}