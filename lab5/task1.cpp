#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrom(char arr[]){
    char now;
    for(int i = 0; i < strlen(arr) / 2; i++){
        now = arr[i];
        if(now == arr[strlen(arr) - i - 1] || now == ' ' || now == ',' || arr[strlen(arr) - i - 1] == ' ' || arr[strlen(arr) - i - 1] == ',')
            now = arr[i+1];
        else
            return 0;
        
    }
    return 1;
}

int main(){
    char arr[256];
    cin.getline(arr, 256);
    if(isPalindrom(arr))
        cout << "Палиндром" << endl;
    else
        cout << "неПалиндром" << endl;
    return 0;
}