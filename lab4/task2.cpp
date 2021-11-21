#include <iostream>
#include <cmath>

using namespace std;

int main(){
    const int arrSize = 5;
    double arr[arrSize]{};
    int indexOfMax = 0;
    int indexOfMin = 0;
    for(int i = 0; i < arrSize; i++){
        cout << "Enter the " << i << " el" << endl;
        cin >> arr[i];
    }
    for (int i = 1; i < arrSize; i++) 
    {
        if (arr[i] > arr[indexOfMax])
            indexOfMax = i;
        if (arr[i] < arr[indexOfMin])
            indexOfMin = i;
    }
    cout << "IndexOfMax = " << indexOfMax << " max = " << arr[indexOfMax] << endl;
    cout << "IndexOfMin = " << indexOfMin << " min = " << arr[indexOfMin] << endl;
    cout << "max + min = " << arr[indexOfMax] + arr[indexOfMin]<< endl;

    return 0;
}