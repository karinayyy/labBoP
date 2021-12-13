#include <iostream>
#include <fstream>

using namespace std;

int main(){
    const int SIZE = 5;
    string path = "resultTaskEight.txt";
    int arr[SIZE];
    int res = 0;
    ofstream out(path);
    for(int i = 0; i < SIZE; i++){
        cout << "Enter " << i << " num" << endl;
        cin >> arr[i];
        if(arr[i] % 2 != 0)
            res+=arr[i];
    }
    out << res;
    out.close();
    return 0;
}