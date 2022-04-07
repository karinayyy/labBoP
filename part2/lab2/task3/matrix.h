#ifndef MATRIX_H
#define MATRIX_H

template <class T>
class Matrix{
private:
    int m_row = 0, m_col = 0;
    T **pa = nullptr;

    void allocSpce();
public:
    Matrix(int row, int col);
    Matrix(int **a, int row, int col);
    ~Matrix();

    T getRow() { return m_row; }
    T getCol() { return m_col; }

    int& operator()(int row, int col);
         
    friend Matrix operator+(const Matrix<T> &a, const Matrix<T> &b);
    friend Matrix operator-(const Matrix<T> &a, const Matrix<T> &b);
    friend Matrix operator*(const Matrix<T> &a, const Matrix<T> &b);
    friend std::istream& operator>><T>(std::istream &in, Matrix &a);
    friend std::ostream& operator<<<T>(std::ostream &out, const Matrix &a);

    class Errnum{
    private:
        int err;
    public:
        Errnum(int errNum) : err(errNum) { }
        int getRow() { return getRow(); }
        int getCol() { return getCol(); }
    };
    class OutOfBounds{
    private:
        double row, col;
    public:
        OutOfBounds(double r, double c) : row(r), col(c) { }
        int getRow() { return row; }
        int getCol() { return col; } 
    };
};




#endif