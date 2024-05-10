#include <iostream>

using namespace std;

class Device {
private:
    string brand;
    int powerConsumption;

public:
    void setBrand(const string& b) {
        brand = b; 
    }

    void setPowerConsumption(int pc) {
        powerConsumption = pc; 
    }

    string getBrand() const {
        return brand;
    }

    int getPowerConsumption() const {
        return powerConsumption;
    }
};

class Laptop : public Device {
public:
    void displayLaptopInfo() const {
        cout << "Laptop Brand: " << getBrand() << endl;
        cout << "Laptop Power Consumption: " << getPowerConsumption() << " Watts" << endl;
    }
};

class Smartphone : public Device {
public:
    void displaySmartphoneInfo() const {
        cout << "Smartphone Brand: " << getBrand() << endl;
        cout << "Smartphone Power Consumption: " << getPowerConsumption() << " Watts" << endl;
    }
};

int main() {
    Laptop l;
    l.setBrand("Dell");
    l.setPowerConsumption(45);

    cout << "Laptop Information:" << endl;
    l.displayLaptopInfo();
    cout << endl;

    Smartphone p;
    p.setBrand("Apple");
    p.setPowerConsumption(10);

    cout << "Smartphone Information:" << endl;
    p.displaySmartphoneInfo();

    return 0;
}