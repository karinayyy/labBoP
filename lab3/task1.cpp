#include <iostream>

using namespace std;

int minMax(int i)
{
    static int min = 0;
    static int max = 0;
    if (i < max){
        min = i;
    }if(i > max){
        max = i;
    }
    return min, max;
}

int main()
{
    int i;
    do{
        cout << "Enter i" << endl;
        cin >> i;
        cout << minMax(i) << endl;
    }while (i);
    return 0;
}