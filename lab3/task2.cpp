#include <iostream>

using namespace std;

double sum(int n, double x)
{
    return n <= 1 ? 1 : x + sum(n - 1, x);
}

int main()
{
    int n;
    double x;
    cin >> n >> x;
    cout << sum(n, x);
    return 0;
}