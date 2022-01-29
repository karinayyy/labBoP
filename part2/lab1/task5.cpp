#include <iostream>

class DotXYZ{
private:
    double m_x, m_y, m_z;
public:
    DotXYZ(double x = 0, double y = 0, double z = 0){
        m_x = x;
        m_y = y;
        m_z = z;
    }
    double getX(){return m_x;}
    double getY(){return m_y;}
    double getZ(){return m_z;}
    friend std::istream& operator>>(std::istream &in, DotXYZ &coord){
        return in >> coord.m_x >> coord.m_y >> coord.m_z;
    }
    friend std::ostream& operator<<(std::ostream &out, const DotXYZ &coord){
        return out << "x = " << coord.m_x
                    << " y = " << coord.m_y
                    << " z = " << coord.m_z;
    }
    
};


int main(){
    DotXYZ coord1;
    std::cout << "Enter xyz" << std::endl;
    std::cin >> coord1;
    std::cout << coord1 << std::endl;
    DotXYZ coord2;
    std::cout << coord2 << std::endl;

    return 0;
}