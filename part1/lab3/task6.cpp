#include <iostream>

using namespace std;

void signum(double x){
    if(x < 0)
        cout << "y = " << -1 << endl;
    else if (x > 0)
        cout << "y = " << 1 << endl;
    else 
        cout << "y = " << 0 << endl;
}

int main(){
    signum(5) ; 
    signum(0) ;
    signum(-15);
    return 0;
}