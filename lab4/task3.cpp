#include <iostream>

using namespace std;  
int main()
{
    const int arrSize = 5;
    int a[] = {21, 3, 12, 5, 4};
    bool repeat;
    do{
        repeat = false;
        for (int i = 0; i < arrSize - 1; i++)
        {
            if (a[i] < a[i+1]){
                double temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                repeat = true;
            }
        }
    }while (repeat);
    for (int i = 0; i < arrSize; i++){
        cout << a[i] << ' '; 
    }
    return 0;
}