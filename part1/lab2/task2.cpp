#include <iostream>

using namespace std;

int main()
{
    int n, k;
    double x;
    cout << "Enter n, k, x" << endl;
    cin >> n >> k >> x;
    if (n >= 0 && k <= n){
            double y = 0; 
            int i = 1;    
            while (i <= n){
                if(i != k){
                    try{
                        if ((x+2*i) == 0)
                            throw 359;
                        y += i/( x+2*i);
                        i++;
                    }
                    catch(int i){
                        cout << "Error #" << i << " - divide by 0" << endl;
                        break;
                    }
                }else
                    i++;
                cout << "y = " <<  y << ", i = " << i << endl;
            }
            cout << "Y = " << y << endl;
    }else
        cout << "Enter n>= 0 && k <= n" << endl;
    return 0;
}
