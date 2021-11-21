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
        {
            indexOfMax = i;
        }
    }
    cout << "IndexOfMax = " << indexOfMax << " num = " << arr[indexOfMax] << endl;
    for(int i = 1; i < arrSize; i++){
        if (arr[i] < arr[indexOfMin])
        {
            indexOfMin = i;
        }
    }
    cout << "IndexOfMax = " << indexOfMin << " num = " << arr[indexOfMin] << endl;

    cout << "max + min = " << round((arr[indexOfMax] + arr[indexOfMin]) * 100)/100 << endl; //Округление до 2го знака   

    return 0;
}