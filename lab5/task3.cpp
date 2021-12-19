#include<iostream>
#include <fstream>
#include <cmath>

using namespace std;

struct Link {
    int data;
    Link* next;
};

int main() {
    const int COL = 4;
    ifstream in("data.txt");
    Link* first = 0;
    Link* last = 0;
    Link* link = 0;
    int d;
    in >> d;
    link = new Link();
    link->data = d;
    link->next = 0;
    first = link;
    last = link;
    double count = 0;
    while (in >> d) {
        link = new Link();
        link->data = d;
        link->next = 0;
        last->next = link;
        last = link;
        count++;
    }
    const int ROW = ceil(count / COL);
    int** arr = new int* [ROW];
    for (int i = 0; i < ROW; i++)
        arr[i] = new int[COL];
    link = first;
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++){
            if (link != 0) {
                arr[i][j] = link->data;
                link = link->next;
            }
            else {
                arr[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < ROW; i++){
        for (int j = 0; j < COL; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    while (first){
      link = first;
      first = first->next;
      delete link;
    }
    cout << "1" << endl;
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if(arr[i][j] < 0)
                arr[i][j] = pow(arr[i][j], 2);
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    cout << endl << "2" << endl;
    const int SIZE = 4;
    double *dArr = new double[ROW];
    for(int i = 0; i < ROW; i++){
        dArr[i] = sqrt(arr[i][i]);
        cout << dArr[i] << ' ';
    }
    in.close();

    ofstream out("result.txt");
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++){
            if(arr[i][j] < 0)
                arr[i][j] = pow(arr[i][j], 2);
            out << arr[i][j] << ' ';
        }
        out << endl;
    }
    for (int i = 0; i < ROW; i++){
        out << dArr[i];
        out << "\t";
    }
    out.close();
    for (int i = 0; i < ROW; i++)
        delete[] arr[i];

    delete[] arr;
    delete[] dArr;
}