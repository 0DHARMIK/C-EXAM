#include <iostream>

using namespace std;

class Animal {
public:
    virtual void makeSound() const = 0;
    virtual void move() const = 0;
};

class tiger : public Animal {
public:
    void makeSound() const override {
        cout << "tiger: Roar!" << endl;
    }

    void move() const override {
        cout << "tiger: Running on land" << endl;
    }
};

class dolphin : public Animal {
public:
    void makeSound() const override {
        cout << "dolphin: Blub blub!" << endl;
    }

    void move() const override {
        cout << "dolphin: Swimming in water" << endl;
    }
};

int main() {
    Animal* animals[2];

    tiger lion;
    dolphin fish;

    animals[0] = &tiger;
    animals[1] = &dolphin;

    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound();
        animals[i]->move();
        cout << endl;
    }

    return 0;
}