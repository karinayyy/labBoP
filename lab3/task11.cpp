#include <iostream>

using namespace std;

void evenNums(int a, int b){
    for (int i = a; i <= b; i++){
        if(i % 2 == 0)
            cout << i << endl;
        else
            continue;
    }
}

int main(){
    evenNums(-20, 20);
    return 0;
}