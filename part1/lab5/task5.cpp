#include <iostream>

using namespace std;

struct nums{
    int a, b;
};

int multiply(nums mult){
    return mult.a * mult.b;
}

int main(){
    nums mult;
    cout << "Enter a, b" << endl;
    cin >> mult.a >> mult.b;
    cout << "Result = " << multiply(mult) << endl;
    return 0;
}