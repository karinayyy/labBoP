#include <iostream>

template <typename T>
class Matrix{

friend std::istream& operator>>(std::istream &in, Matrix<T> &a){
    for(unsigned i = 0; i < a.m_row; i++){
        for(unsigned j = 0; j < a.m_col; j++)
            in >> a.pa[i][j];
    }
    return in;
}

friend std::ostream& operator<<(std::ostream &out, const Matrix<T> &a){
    out << "Your matrix is:" << '\n';
    for(unsigned i = 0; i < a.m_row; i++){
        for(unsigned j = 0; j < a.m_col; j++)
            out << a.pa[i][j] << '\t';
        out << std::endl;
    }
    return out;
}

private:
    unsigned m_row = 0, m_col = 0;
    T **pa = nullptr;
    void allocSpace(){
        pa = new T*[m_row];
        for (int i = 0; i < m_row; i++) {
            pa[i] = new T [m_col];
        }
    }
public:
    Matrix(unsigned row, unsigned col);
    Matrix(T **a, unsigned row, unsigned col);
    ~Matrix();

    unsigned getRow() { return m_row; }
    unsigned getCol() { return m_col; }

    class ErrNum{
    private:
        int err;
    public:
        ErrNum(int errNum) : err(errNum) { }
        int getErr(){ return err; }
    };
    class OutOfBounds{
    private:
        double row, col;
    public:
        OutOfBounds(double r, double c) : row(r), col(c) { }
        double getRow() { return row; }
        double getCol() { return col; } 
    };

    // T& operator()(unsigned row, unsigned col);
    // friend Matrix<T> operator+(const Matrix<T> &a, const Matrix<T> &b);
    // friend Matrix<T> operator-(const Matrix<T> &a, const Matrix<T> &b);
    // friend Matrix<T> operator*(const Matrix<T> &a, const Matrix<T> &b);

    friend Matrix<T> operator+(const Matrix<T> &a, const Matrix<T> &b){
        if(a.m_row != b.m_row && a.m_col != b.m_col)
            throw Matrix::ErrNum(123);
        Matrix res(a.m_row, a.m_col);
        for(unsigned i = 0; i < a.m_row; i++){
            for(unsigned j = 0; j < a.m_col; j++)
            res.pa[i][j] = a.pa[i][j] + b.pa[i][j];
        }
        return res;
    }

    friend Matrix<T> operator-(const Matrix<T> &a, const Matrix<T> &b){
        if(a.m_row != b.m_row && a.m_col != b.m_col)
            throw Matrix::ErrNum(234);
        Matrix res(a.m_row, a.m_col);
        for(unsigned i = 0; i < a.m_row; i++){
            for(unsigned j = 0; j < a.m_col; j++)
            res.pa[i][j] = a.pa[i][j] - b.pa[i][j];
        }
        return res;
    }

    friend Matrix<T> operator*(const Matrix<T> &a, const Matrix<T> &b){
        if(a.m_col != b.m_row)
            throw Matrix::ErrNum(345);
        Matrix res(b.m_row, b.m_col);
        for(unsigned i = 0; i < a.m_row; i++){
            for(unsigned j = 0; j < b.m_col; j++)
                for(unsigned k = 0; k < a.m_col; k++){
                res.pa[i][j] += a.pa[i][k] * b.pa[k][j];
            }
        }
        return res;
    }

    T& operator()(unsigned row, unsigned col){
        if((row < 0 || row >= m_row) || (col < 0 || col >= m_col)) 
            throw Matrix::OutOfBounds(row, col);
        return pa[row][col];
    }
};

template <typename T> 
Matrix<T>::Matrix(unsigned row, unsigned col) : m_row(row), m_col(col){
    allocSpace();
    for(unsigned i = 0; i < m_row; i++){
        for(int j = 0; j < m_col; j++)
            pa[i][j] = 0;
    }
}

template <typename T> 
Matrix<T>::Matrix(T **a, unsigned row, unsigned col) : m_row(row), m_col(col){
    allocSpace();
    for(unsigned i = 0; i < m_row; i++){
        for(int j = 0; j < m_col; j++)
            pa[i][j] = a[i][j];
    }
}

template <typename T> 
Matrix<T>::~Matrix(){
    for(unsigned i = 0; i < m_row; i++)
        delete pa[i];
    delete pa;
}


template <typename T>
void NegativeToSquare(Matrix<T> &a){
    for(unsigned i = 0; i < a.getRow(); i++){
        for(unsigned j = 0; j < a.getCol(); j++){
            if(a(i,j) < 0)
                a(i,j)*=a(i,j);
        }
    }
}

int main(){
    //---FOR INT---
    std::cout << "INT" << std::endl;
    int rows, cols;
    std::cout << "Enter rows and cols" << std::endl;
    std::cin >> rows >> cols;
    Matrix <int> a(rows, cols);
    std::cout << "Enter matrix a " << a.getRow() << "x" << a.getCol() << std::endl;
    std::cin >> a;


    std::cout << "Enter rows and cols" << std::endl;
    std::cin >> rows >> cols;
    Matrix <int> b(rows, cols);
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
        }catch(Matrix<int>::ErrNum& e){
            std::cout << "Matrix a rows and cols must be equel to Matrix b rows and cols. Err #" << e.getErr() << std::endl;
        }
        break;
    case 2:
        try{
            std::cout << a - b << std::endl;
        }catch(Matrix<int>::ErrNum& e){
            std::cout << "Matrix a rows and cols must be equel to Matrix b rows and cols. Err #" << e.getErr() << std::endl;
        }
        break;
    case 3:
        try{
            std::cout << a * b << std::endl;
        }catch(Matrix<int>::ErrNum& e){
            std::cout << "Matrix a cols must be equel to matrix b rows. Err #" << e.getErr() << std::endl;
        }
        break;
    default:
        std::cout << "Something went wrong..." << std::endl;
        break;
    }
    
    int indTask;

    std::cout << "Do you want to run individual task? test for double after"
              << "\n 1 - yes"
              << "\n 0 - no" << std::endl;
    std::cin >> indTask;
    
    switch(indTask){
    case 0:
        std::cout << "Bye" << std::endl;
        break;
    case 1:
        {
            Matrix<int> c(2, 3);
            try{
                c(0, 0 ) = -2;
                c(0, 1) = 1;
                c(0, 2) = -3;
                c(1, 0) = -4;
                c(1, 1) = 2;
                // c(3, 5) = 5;
                std::cout << c << std::endl;
                NegativeToSquare(c);
                std::cout << c << std::endl;
            }catch(Matrix<int>::OutOfBounds& e){
                std::cout << "(" << e.getRow() << "x" << e.getCol() << ")" << " -- wrong data" << std::endl;
            }
        }
        break;
    default:
        std::cout << "Something went wrong..." << std::endl;
        break;
    }


    //---FOR DOUBLE---
    
    int rowsD, colsD;
    std::cout << "Double" << std::endl;
    std::cout << "Enter rows and cols" << std::endl;
    std::cin >> rowsD >> colsD;
    Matrix <double> aD(rowsD, colsD);
    std::cout << "Enter matrix a " << a.getRow() << "x" << a.getCol() << std::endl;
    std::cin >> aD;


    std::cout << "Enter rows and cols" << std::endl;
    std::cin >> rowsD >> colsD;
    Matrix <double> bD(rowsD, colsD);
    std::cout << "Enter matrix a " << b.getRow() << "x" << b.getCol() << std::endl;
    std::cin >> bD;

    std::cout << "Choose the operator: " 
              << "\n 1 - '+' "
              << "\n 2 - '-' "
              << "\n 3 - '*' " << std::endl;
    std::cin >> operatorChoose;

    switch (operatorChoose){
    case 1:
        try{
            std::cout << aD + bD << std::endl;
        }catch(Matrix<double>::ErrNum& e){
            std::cout << "Matrix a rows and cols must be equel to Matrix b rows and cols. Err #" << e.getErr() << std::endl;
        }
        break;
    case 2:
        try{
            std::cout << aD - bD << std::endl;
        }catch(Matrix<double>::ErrNum& e){
            std::cout << "Matrix a rows and cols must be equel to Matrix b rows and cols. Err #" << e.getErr() << std::endl;
        }
        break;
    case 3:
        try{
            std::cout << aD * bD << std::endl;
        }catch(Matrix<double>::ErrNum& e){
            std::cout << "Matrix a cols must be equel to matrix b rows. Err #" << e.getErr() << std::endl;
        }
        break;
    default:
        std::cout << "Something went wrong..." << std::endl;
        break;
    }
    

    std::cout << "Do you want to run individual task?"
              << "\n 1 - yes"
              << "\n 0 - no" << std::endl;
    std::cin >> indTask;
    
    switch(indTask){
    case 0:
        std::cout << "Bye" << std::endl;
        break;
    case 1:
        {
            Matrix<double> cD(2, 3);
            try{
                cD(0, 0 ) = -2.2;
                cD(0, 1) = 1.1;
                cD(0, 2) = -3.3;
                cD(1, 0) = -4.4;
                cD(1, 1) = 2.2;
                // cD(3, 5) = 5;
                std::cout << cD << std::endl;
                NegativeToSquare(cD);
                std::cout << cD << std::endl;
            }catch(Matrix<double>::OutOfBounds& e){
                std::cout << "(" << e.getRow() << "x" << e.getCol() << ")" << " -- wrong data" << std::endl;
            }
        }
        break;
    default:
        std::cout << "Something went wrong..." << std::endl;
        break;
    }

    return 0;
}