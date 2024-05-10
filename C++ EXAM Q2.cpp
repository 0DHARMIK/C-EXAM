#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;
    int year;
    double speed;

public:
    
    void setModel(string carModel) {
        model = carModel;
    }

    void setYear(int carYear) {
        year = carYear;
    }

    void setSpeed(double carSpeed) {
        speed = carSpeed;
    }

    string getModel()  {
        return model;
    }

    int getYear()  {
        return year;
    }

    double getSpeed()  {
        return speed;
    }
};

int main() {
    Car myCar;

    myCar.setModel("Toyota Camry");
    myCar.setYear(2022);
    myCar.setSpeed(60.5);

    cout << "Car Model: " << myCar.getModel() << endl;
    cout << "Car Year: " << myCar.getYear() << endl;
    cout << "Car Speed: " << myCar.getSpeed() << " mph" << endl;

    
}