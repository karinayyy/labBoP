#include <iostream>

using namespace std;

int main()
{
    int x, n, y, i;
    cout << "Enter x, n " << endl;
    cin >> x >> n;
    if (n >= 0){
        y = 1;
        i = 1;
        while(i <= n){
            y *= (x - 2*i);
            i++;
            cout << "y = " << y << " i = " << i << endl;
        }
        cout << "Y = " << y << endl;
    }else
        cout << "Wrong n" << endl;
    return 0;
}
