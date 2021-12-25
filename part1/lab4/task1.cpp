#include <iostream>
#include <ctime>

using namespace std;

int main(){
    unsigned short int k = 1;
    while(true){
        cin >> k;
        bool isOne = 0;
        for(int i = 0; i < 16; i++){
            unsigned short current = k >> 15;
            if (isOne || current == 1){
                isOne = 1;
                cout << current;
            }
            k <<= 1;
        }
        cout << endl;
        if(!isOne)
            break;
    }
    return 0;
}