#include <iostream>

using namespace std;

int taskEight(int n){
    int res = 1, i = 1;
    while(i <= 2 * n){
        if (i % 2 != 0)
            res *= i;
        i++;
    }
    return res;
}

int main(){
    cout << taskEight(2) << endl;
    cout << taskEight(4) << endl;
    cout << taskEight(5) << endl;
    return 0;
}