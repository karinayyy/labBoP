#include <iostream>

using namespace std;

// double signum(int n){
//     double y = 0;
//     for (int i = 1; i <= n; i++){
//         y+=i;
//     }
//     return y;
// }

double signum(int n, double y = 0){
    return n <= 1 ? 1 : y + n + signum(n - 1, y);
}

int main(){
    cout << signum(5) << endl; //5+4+3+2+1=15
    cout << signum(10) << endl;
    cout << signum(15) << endl;
    return 0;
}