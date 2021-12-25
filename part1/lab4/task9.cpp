#include <iostream>

using namespace std;

int main(){
    int size = 5;
    int arr[size];
    int sum = 0;
    cout << "Enter " << size << " el" << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        if(arr[i]%2 == 0)
            sum += arr[i];
    }
    cout << "Sum = " << sum << endl;
    return 0;
}