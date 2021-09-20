#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, k, i;
    double x, y;
    cout << "Enter n, k, x" << endl;
    cin >> n >> k >> x;
    if (n >= 0){
        if (k <= n){
            y = 0; 
            i = 1;    
            while (i <= n){
                if(i != k){
                    if ((x+2*i) != 0){
                        y += i/( x+2*i);
                        i++; 
                    }else{
                        cout << "x+2i == 0 Error"<< endl;
                    } 
                }else{
                    i++;
                } 
                cout << "y = " <<  y << ", i = " << i << endl;
            }
            cout << "Y = " << y << endl;
        }else{
            cout << "Wrong k" << endl;
        }
    }else{
        cout << "Wrong n" << endl;
    }

    return 0;
}
