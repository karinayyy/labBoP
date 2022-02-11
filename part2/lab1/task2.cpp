#include <iostream>
#include <cassert>

class Matrix{
private:
    int **pa = nullptr, m_row = 0, m_col = 0;
    void allocSpace(){
        pa = new int*[m_row];
        for (int i = 0; i < m_row; ++i) {
            pa[i] = new int[m_col];
        }
    }
public:
    Matrix(int row, int col);
    Matrix(int **a, int row, int col);
    ~Matrix();

    int getRow() { return m_row; }
    int getCol() { return m_col; }
    
    int& operator()(int row, int col);
    friend Matrix operator+(const Matrix &a, const Matrix &b);
    friend Matrix operator-(const Matrix &a, const Matrix &b);
    friend Matrix operator*(const Matrix &a, const Matrix &b);
    friend std::istream& operator>>(std::istream &in, Matrix &a);
    friend std::ostream& operator<<(std::ostream &out, const Matrix &a);
};

Matrix::Matrix(int row, int col) : m_row(row), m_col(col){
    allocSpace();
    for(int i = 0; i < m_row; i++){
        for(int j = 0; j < m_col; j++)
            pa[i][j] = 0;
    }
}

Matrix::Matrix(int **a, int row, int col) : m_row(row), m_col(col){
    allocSpace();
    for(int i = 0; i < m_row; i++){
        for(int j = 0; j < m_col; j++)
            pa[i][j] = a[i][j];
    }
}
Matrix::~Matrix(){
    for(int i = 0; i < m_row; i++)
        delete pa[i];
    delete pa;
}

std::istream& operator>>(std::istream &in, Matrix &a){
    for(int i = 0; i < a.m_row; i++){
        for(int j = 0; j < a.m_col; j++)
            in >> a.pa[i][j];
    }
    return in;
}

std::ostream& operator<<(std::ostream &out, const Matrix &a){
    out << "Your matrix is:" << '\n';
    for(int i = 0; i < a.m_row; i++){
        for(int j = 0; j < a.m_col; j++)
            out << a.pa[i][j] << '\t';
        out << std::endl;
    }
    return out;
}

Matrix operator+(const Matrix &a, const Matrix &b){
    Matrix res(a.m_row, a.m_col);
    for(int i = 0; i < a.m_row; i++){
        for(int j = 0; j < a.m_col; j++)
        res.pa[i][j] = a.pa[i][j] + b.pa[i][j];
    }
    return res;
}

Matrix operator-(const Matrix &a, const Matrix &b){
    Matrix res(a.m_row, a.m_col);
    for(int i = 0; i < a.m_row; i++){
        for(int j = 0; j < a.m_col; j++)
        res.pa[i][j] = a.pa[i][j] - b.pa[i][j];
    }
    return res;
}

Matrix operator*(const Matrix &a, const Matrix &b){
    Matrix res(b.m_row, b.m_col);
    for(int i = 0; i < a.m_row; i++){
        for(int j = 0; j < b.m_col; j++)
            for(int k = 0; k < a.m_col; k++){
            res.pa[i][j] += a.pa[i][k] * b.pa[k][j];
        }
    }
    return res;
}

int& Matrix::operator()(int row, int col){
    assert(row >= 0 && row < m_row);
    assert(col >= 0 && col < m_col);

    return pa[row][col];

}

void NegativeToSquare(Matrix &a){
    for(int i = 0; i < a.getRow(); i++){
        for(int j = 0; j < a.getCol(); j++){
            if(a(i,j) < 0)
                a(i,j)*=a(i,j);
        }
    }
}

int main(){
    int rows, cols;
    std::cout << "Enter rows and cols" << std::endl;
    std::cin >> rows >> cols;
    Matrix a(rows, cols);
    std::cout << "Enter matrix a " << a.getRow() << "x" << a.getCol() << std::endl;
    std::cin >> a;


    std::cout << "Enter rows and cols" << std::endl;
    std::cin >> rows >> cols;
    Matrix b(rows, cols);
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
        if(a.getRow() == b.getRow() && a.getCol() == b.getCol())
            std::cout << a + b << std::endl;
        else    
            std::cout << "Matrix a rows and cols must be equel to Matrix b rows and cols" << std::endl;
        break;
    case 2:
        if(a.getRow() == b.getRow() && a.getCol() == b.getCol())
            std::cout << a - b << std::endl;
        else    
            std::cout << "Matrix a rows and cols must be equel to Matrix b rows and cols" << std::endl;
        break;
    case 3:
        if(a.getCol() == b.getRow())
            std::cout << a * b << std::endl;
        else
            std::cout << "Matrix a cols must be equel to matrix b rows" << std::endl;
        break;
    default:
        std::cout << "Something went wrong..." << std::endl;
        break;
    }

    Matrix c(2, 3);
    c(0, 0) = -2;
    c(0, 1) = 1;
    c(0, 2) = -3;
    c(1, 0) = -4;
    c(1, 1) = 2;
    std::cout << c << std::endl;

    NegativeToSquare(c);
    std::cout << c << std::endl;

    return 0;
}