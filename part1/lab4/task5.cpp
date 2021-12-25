#include <iostream>
#include <cmath>

using namespace std;

int main(){
    const int ROW = 4;
    const int COL = 4;
    int arr[ROW][COL];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if(arr[i][j] < 0)
                arr[i][j] = pow(arr[i][j], 2);
            cout << arr[i][j] << ' ';
        }
    }
    cout << endl;
    const int SIZE = 4;
    double *dArr = new double[SIZE];
    for(int i = 0; i < ROW; i++){
        dArr[i] = sqrt(arr[i][i]);
        cout << dArr[i] << ' ';
    }
    delete [] dArr;
    return 0;
}