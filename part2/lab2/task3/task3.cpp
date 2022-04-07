#include <iostream>
#include "matrix.h"

int main(){
    int rows, cols;
    std::cout << "Enter rows and cols" << std::endl;
    std::cin >> rows >> cols;
    Matrix<int> a(rows, cols);
    std::cout << "Enter matrix a " << a.getRow() << "x" << a.getCol() << std::endl;
    std::cin >> a;


    std::cout << "Enter rows and cols" << std::endl;
    std::cin >> rows >> cols;
    Matrix<int> b(rows, cols);
    std::cout << "Enter matrix a " << b.getRow() << "x" << b.getCol() << std::endl;
    std::cin >> b;

    int operatorChoose;
    std::cout << "Choose the operator: " 
              << "\n 1 - '+' "
              << "\n 2 - '-' "
              << "\n 3 - '*' " << std::endl;
    std::cin >> operatorChoose;

    switch (operatorChoose){
    case 1:
        try{
            std::cout << a + b << std::endl;
        }catch(Matrix<int>::ErrNum e){
            std::cout << "Matrix a rows and cols must be equel to Matrix b rows and cols. Err #" << e.getErr() << std::endl;
        }
        break;
    case 2:
        try{
            std::cout << a - b << std::endl;
        }catch(Matrix<T>::ErrNum& e){
            std::cout << "Matrix a rows and cols must be equel to Matrix b rows and cols. Err #" << e.getErr() << std::endl;
        }
        break;
    case 3:
        try{
            std::cout << a * b << std::endl;
        }catch(Matrix<T>::ErrNum& e){
            std::cout << "Matrix a cols must be equel to matrix b rows. Err #" << e.getErr() << std::endl;
        }
        break;
    default:
        std::cout << "Something went wrong..." << std::endl;
        break;
    }
    return 0;
}