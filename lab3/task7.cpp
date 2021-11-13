#include <iostream>

using namespace std;

double threeArg(double x = 1, double y = 1, double z = 1){
    return x * y * z;
}

int main(){
    cout << threeArg(2, 3, 4) << endl;
    cout << threeArg(2, 3) << endl;
    cout << threeArg(2) << endl;

    return 0;
}