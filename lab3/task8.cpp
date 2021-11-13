#include <iostream>

using namespace std;

int taskEight(int n){
    int res = 1, i = 1;
    while(i <= n){
        if (i % 2 != 0)
            res *= i;
        i++;
    }
    return res;
}

int main(){
    cout << taskEight(5) << endl;
    cout << taskEight(7) << endl;
    cout << taskEight(10) << endl;
    return 0;
}