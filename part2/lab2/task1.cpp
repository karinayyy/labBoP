#include <iostream>
#include <cstring>

class Human{
private:
    std::string m_name;
    int m_age;
public:
    Human(std::string name = "", int age = 0)
        : m_name(name), m_age(age) {}

    std::string getName(){ return m_name; }
    int getAge(){ return m_age; }
    virtual void show(){
        std::cout << "Name: " << m_name << "\tAge: " << m_age << std::endl;
    }
    virtual ~Human(){}
};

class Citizen : public Human{
private:
    std::string m_country;
public:
    Citizen(std::string name = "", int age = 0 , std::string country = "")
        : Human(name, age), 
            m_country(country) {}
    
    std::string getCountry(){ return m_country; }
    void show() override{
        Human::show();
        std::cout << "Country: " << m_country << std::endl;
    }
};

class Student : public Citizen{
private:
    int m_sholarship;
    long m_studentID;
public:
    Student(std::string name = "", int age = 0 , std::string country = "", int sholarship = 0, long studentID = 0)
        : Citizen(name, age, country), 
             m_sholarship(sholarship), m_studentID(studentID) {}
    int getSholarchip(){ return m_sholarship; }
    long getStudentID(){ return m_studentID; }
    void show() override{
        Citizen::show();
        std::cout << "Sholarchip: " << m_sholarship << "\tStudentID: " << m_studentID << std::endl;
    }
};

class Employee : public Citizen{
private:
    int m_wage;
    long m_employeeID;
public:
    Employee(std::string name = "", int age = 0 , std::string country = "", int wage = 0, long employeeID = 0)
        : Citizen(name, age, country), 
            m_wage(wage), m_employeeID(employeeID) {}
    int getWage(){ return m_wage; }
    long getEmployeeID(){ return m_employeeID; }
    void show() override{
        Citizen::show();
        std::cout << "Wage: " << m_wage << "\tEmployeeID: " << m_employeeID << std::endl;
    }
};

int main(){
    const int N = 3;
    Human *human[N] = {
        new Citizen("name1", 17, "Ukraine"),
        new Student("name2", 18, "Ukraine", 2500, 123),
        new Employee("name3", 19, "Ukraine", 4500, 456)
    };
    for(int i = 0; i < N; i++){
        human[i]->show();
        std::cout << std::endl;
    }
    for(int i = 0; i < N; i++)
        delete human[i];

    return 0;
}