#include <iostream>

class Building{
private:
    std::string m_adress;
public:
    Building(std::string adress = "") 
        : m_adress(adress){}
    virtual void show(){
        std::cout << "Adress: " << m_adress << std::endl;
    }
};

class Campus : public Building{
private:
    std::string m_university;
public:
    Campus(std::string adress = "", std::string university = "")
        : m_university(university) {}
    void show() override{
        Building::show();
        std::cout << "University: " << m_university << std::endl;
    }
};

int main(){
    const int SIZE = 4;

    Building* buildings[SIZE]{
        new Building("Gagarina 194/2"),
        new Building("Sokolowskaja 147/9"),
        new Campus("Dzewunskaja 10", "Nure"),
        new Campus("Proforgowskaja 37", "HPI")
    };

    for(int i = 0; i < SIZE; i++){
        buildings[i] -> show();
        std::cout<<"\n\n";
    }

    for(int i = 0; i < SIZE; i++)
        delete buildings[i];

    return 0;
}