#include <iostream>

using namespace std;

double sum(int n, double x)
{
    if(n < 1){
        return 1;
    } else{
        return (x + n) * sum(n - 1, x); // n = 4 x = 5 (4+5)(3+5)(2+5)(1+5)=3024
    }
}

int main()
{
    int n;
    double x;
    cout << "Enter n, x" << endl;
    cin >> n >> x;
    cout << sum(n, x);
    return 0;
}