#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(std::string name, int age) : name(name), age(age) {}

    void printInfo() {
        std::cout << "Name: " << this->name << ", Age: " << this->age << std::endl;
    }
};

int main() {
    Person person1("Ganesh", 30);
    Person person2("Rakesh", 25);

    // Call the printInfo() function using "this" pointer
    std::cout << "Person 1's info: ";
    person1.printInfo();

    std::cout << "Person 2's info: ";
    person2.printInfo();

    return 0;
}
