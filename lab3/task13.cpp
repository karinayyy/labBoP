#include <iostream>

using namespace std;

void nod(int a, int b, int c = 0){
    while(a != b){ //В самом простом случае алгоритм Евклида применяется к паре положительных целых чисел и формирует новую пару, которая состоит из меньшего числа и разницы между большим и меньшим числом. Процесс повторяется, пока числа не станут равными. 
        if (a < b)
            b = b - a;
        else{
            c = b;
            b = a - b;
            a = c;
        }
    }
    cout << a << endl;
}

int main(){
    nod(12, 9); //3
    nod(24, 18); //6
    nod(28, 16); //4
    return 0;
}