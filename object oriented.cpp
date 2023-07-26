#include <iostream>

class Car {
private:
    std::string name;
    int x, y;

public:
    Car(std::string carName) : name(carName), x(0), y(0) {}

    void move(int newX, int newY) {
        x = newX;
        y = newY;
    }

    std::pair<int, int> getCoordinates() const {
        return std::make_pair(x, y);
    }
};

int main() {
    Car car1("Car A");
    Car car2("Car B");

    car1.move(3, 4);
    car2.move(1, 2);

    auto car1Coordinates = car1.getCoordinates();
    auto car2Coordinates = car2.getCoordinates();

    std::cout << car1Coordinates.first << ", " << car1Coordinates.second << "\n";
    std::cout << car2Coordinates.first << ", " << car2Coordinates.second << "\n";

    return 0;
}
