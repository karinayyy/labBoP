#include <iostream>

class NVector{
    friend std::ostream& operator<<(std::ostream& out, const NVector& a);
    friend std::istream& operator>>(std::istream& in, NVector& a);
    friend NVector operator+(const NVector &v1, const NVector &v2);
    friend NVector operator*(const NVector &v1, const NVector &v2);
    friend NVector operator*(double num, const NVector &v);
    friend NVector operator*(const NVector &v, double num);
private:
    double *pa = nullptr;
    int size = 0;
    void allocSpace(){
        pa = new double[size];
    }
public:
    NVector(int n);
    NVector(double *a, int n);
    ~NVector();    

    int getSize() { return size; }

};

NVector::NVector(int n) : size(n){
    allocSpace();
    for(int i = 0; i < size; i++)
        pa[i] = 0;
}

NVector::NVector(double *a, int n) : size(n){
    allocSpace();
    for(int i = 0; i < size; i++)
        pa[i] = a[i];
}

NVector::~NVector(){
    if(pa != nullptr)
        delete[] pa;
}

std::ostream& operator<<(std::ostream& out, const NVector& a){
    for (int i = 0; i < a.size; i++)
        out << "x" << i+1 << " = " << a.pa[i] << '\n';
    return out;
}

std::istream& operator>>(std::istream& in, NVector& a){
    for (int i = 0; i < a.size; i++){
        in >> a.pa[i];
    }
    return in;
}

NVector operator+(const NVector &v1, const NVector &v2){
    NVector res(v1.size);
    for(int i = 0; i < v1.size; i++)
        res.pa[i] = v1.pa[i] + v2.pa[i];
    return res;
}

NVector operator*(const NVector &v1, const NVector &v2){
    NVector res(v1.size);
    for(int i = 0; i < v1.size; i++)
        res.pa[i] = v1.pa[i] * v2.pa[i];
    return res;
}

NVector operator*(double num, const NVector &v){
    NVector res(v.size);
    for(int i = 0; i < v.size; i++)
        res.pa[i] = num * v.pa[i];
    return res;
}

NVector operator*(const NVector &v, double num){
    return operator*(num, v);
}

int main(){
    int size = 4;
    NVector a(size);
    std::cout << "Enter " << size << " values" << std::endl;
    std::cin >> a;

    NVector b(size);
    std::cout << "Enter " << size << " values" << std::endl;
    std::cin >> b;

    std::cout << "a + b: \n" << a + b << std::endl;
    std::cout << "a * b: \n" << a * b << std::endl;
    std::cout << "3 * a: \n" << a * 3.0 << std::endl;
    std::cout << "a * 3: \n" << 3.0 * a << std::endl;

    return 0;
}