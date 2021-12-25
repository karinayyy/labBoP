#include <iostream>

using namespace std;

double sum(int n){
    double y = 1;
    for(int i =2 * n; i >= 1; i--){
        if(i % 2 == 0)
            y *= i;
    }
    return y;
}

int main(){
    cout << sum(1) << endl;
    cout << sum(2) << endl;
    cout << sum(4) << endl;
    return 0;
}