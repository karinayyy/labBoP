#include <iostream>
#include <fstream>

using namespace std;

int main(){
    const int row = 3;
    const int col = 4;
    double arr[row][col] = {
        {-1.5, 3, 4, -2},
        {3, -3, 5, -4},
        {-5, 3, 4, -6}
    };
    int countMinus = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] < 0)
                countMinus+=1;
        }
    }
    double* newArr = new double[countMinus];
    ofstream out("task2result.txt");
    int count = 0;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] < 0){
                newArr[count] = arr[i][j];
                cout << "New arr " << count+1 << " el = " << newArr[count] << endl; 
                out << newArr[count] << ' ';
                count++;
            }
        }
    }
    out.close();

    delete[] newArr;
    return 0;
}