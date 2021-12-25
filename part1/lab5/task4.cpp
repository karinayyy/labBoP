#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char arr[256];
    cin.getline(arr, 256);
    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] == ' ')
            arr[i] = '_';
    }
    cout << arr << endl;
    return 0;
}