#include <iostream>

using namespace std;

struct nums{
    int a, y = 1;
};

int main(){
    nums mult;
    cout << "Enter nums" << endl;
    while(true){
        cin >> mult.a;
        if(mult.a == 0){
            mult.y--;
            break;
        }
        mult.y*=mult.a;
    }
    cout << "Result = " << mult.y << endl;

    return 0;
}