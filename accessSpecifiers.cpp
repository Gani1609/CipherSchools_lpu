#include <iostream>
#include <string>
#include <vector>

class Student {
private:
    std::string name;
    int rollNumber;
    bool attendance;
    int marks;

public:
    Student(const std::string& name, int rollNumber)
        : name(name), rollNumber(rollNumber), attendance(false), marks(0) {}

    void markAttendance(bool isPresent) {
        attendance = isPresent;
    }

    void setMarks(int score) {
        marks = score;
    }

    void displayReport() const {
        std::cout << "Name: " << name << ", Roll Number: " << rollNumber << std::endl;
        std::cout << "Attendance: " << (attendance ? "Present" : "Absent") << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "-------------------\n";
    }
};

int main() {
    std::vector<Student> students;

    // Add students
    students.push_back(Student("Rakesh", 1));
    students.push_back(Student("Ganesh", 2));
    students.push_back(Student("Arvind", 3));

    // Mark attendance and set marks
    students[0].markAttendance(true);
    students[1].markAttendance(true);
    students[2].markAttendance(false);

    students[0].setMarks(85);
    students[1].setMarks(78);
    students[2].setMarks(60);

    // Display students, attendance, and marks
    std::cout << "Students Report:\n";
    for (const auto& student : students) {
        student.displayReport();
    }

    return 0;
}
