#include <iostream>

class Device{
private:
    std::string m_producer;
    int m_voltage;
public:
    Device(std::string producer = "", int voltage = 0)
        : m_producer(producer), m_voltage(voltage){}
    virtual void show(){
        std::cout << "Producer: " << m_producer
        << "\nVoltage: " << m_voltage << std::endl;
    }
    virtual ~Device(){}
};

class Phone : public Device{
private:
    std::string m_model;
public: 
    Phone(std::string producer = "", int voltage = 0, std::string model = "")
        : Device(producer, voltage),
             m_model(model){}
    void show() override{
        Device::show();
        std::cout << "Model: " << m_model << std::endl;
    }
};

int main(){
    const int SIZE = 4;
    Device* devices[SIZE] = {
        new Device("Apple", 220),
        new Device("Samsung", 120),
        new Phone("Microsoft", 180, "x7/12"),
        new Phone("NEXT", 600, "Star.s01")
    };

    for(int i = 0; i < SIZE; i++){
        devices[i] -> show();
        std::cout << "\n\n";
    }

    for(int i = 0; i < SIZE; i++)
        delete devices[i];

    return 0;
}