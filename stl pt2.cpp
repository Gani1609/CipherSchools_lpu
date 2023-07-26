#include <iostream>
#include <map>

int main() {
    // Create a map of person names and ages
    std::map<std::string, int> personAges;

    // Add elements to the map
    personAges["Ganesh"] = 25;
    personAges["Arvind"] = 30;
    personAges["Rakesh"] = 22;

    // Find the age of a person
    std::string nameToFind = "Alice";
    if (personAges.find(nameToFind) != personAges.end()) {
        int age = personAges[nameToFind];
        std::cout << nameToFind << " is " << age << " years old." << std::endl;
    } else {
        std::cout << nameToFind << " not found in the map." << std::endl;
    }

    // Print all elements in the map
    std::cout << "All elements in the map:\n";
    for (const auto& pair : personAges) {
        std::cout << pair.first << ": " << pair.second << " years old\n";
    }

    return 0;
}
