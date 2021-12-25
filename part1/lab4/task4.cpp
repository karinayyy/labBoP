#include <iostream>

using namespace std;

int main(){
    int row, col;
    cout << "Enter str and col  :" << endl;
    cin >> row >> col;
    int **arr = new int* [row];
    for (int i = 0; i < row; i++){
        arr[i] = new int [col];
    }
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cin >> arr[i][j];
        }
    }
    int rowSum[row];
    for (int i = 0; i < row; i++){
        int oneRow = 0;
        for (int j = 0; j < col; j++){
            oneRow += arr[i][j];
        }
        rowSum[i] = oneRow;
        cout << "sum of the " << i + 1 << " row = " << rowSum[i] << ' ';
    }
    return 0;
}