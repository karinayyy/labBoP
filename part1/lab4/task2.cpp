#include <iostream>
#include <cmath>

using namespace std;

const int arrSize = 5;
double arr[arrSize];
int indexOfMax = 0;
int indexOfMin = 0;

int Max(){
    for (int i = 1; i < arrSize; i++){
        if (arr[i] > arr[indexOfMax])
            indexOfMax = i;
    }
    return indexOfMax;
}

int Min(){
    for (int i = 1; i < arrSize; i++){
        if (arr[i] < arr[indexOfMin])
            indexOfMin = i;
    } 
    return indexOfMax;
}

int main(){
    for (int i = 0; i < arrSize; i++){
        cout << "Enter the " << i << " el" << endl;
        cin >> arr[i];
    }
    Max();
    Min();
    cout << "IndexOfMax = " << indexOfMax << " max = " << arr[indexOfMax] << endl;
    cout << "IndexOfMin = " << indexOfMin << " min = " << arr[indexOfMin] << endl;
    cout << "max + min = " << arr[indexOfMax] + arr[indexOfMin] << endl;

    return 0;
}