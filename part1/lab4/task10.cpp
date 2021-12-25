#include <iostream>

using namespace std;

int main(){
    const int ROW = 3;
    const int COL = 3;
    double arr[ROW][COL];
    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            cin >> arr[i][j];
        }
    }

    double dobutok = 1; 
    for (int j = 0; j < COL; j++) { 
        double max = 0; 
        for (int i = 0; i < ROW; i++) { 
            if (arr[i][j] > max)
                max = arr[i][j]; 
            if(i==ROW-1)
                dobutok *= max; 
        } 
    } 
    cout<<"Dobutok = " << dobutok<<endl; 
    return 0;
}