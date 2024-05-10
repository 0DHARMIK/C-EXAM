#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
    string brand;
    int powerConsumption;

public:
    Device(const string& b, int pc) : brand(b), powerConsumption(pc) {}
    virtual double calculateDiscount() const = 0;
};

class Laptop : public Device {
public:
    Laptop(const string& b, int pc) : Device(b, pc) {}

    double calculateDiscount() const override {
        return 0.1 * powerConsumption; 
    }
};


class Smartphone : public Device {
public:
    Smartphone(const string& b, int pc) : Device(b, pc) {}

    double calculateDiscount() const override {
        return 0.05 * powerConsumption;
    }
};

int main() {

    Device* devices[2];

    devices[0] = new Laptop("Dell", 50);
    devices[1] = new Smartphone("Apple", 20);

    for (int i = 0; i < 2; ++i) {
        cout << "Discount for " << devices[i]->brand << ": " << devices[i]->calculateDiscount() << endl;
    }

    for (int i = 0; i < 2; ++i) {
        delete devices[i];
    }

    return 0;
}
