#include <iostream>
using namespace std;

int main()
{
    string name;
    int mids;
    float ends;
    bool pre_abs;

    string name_1;
    int mids_1;
    float ends_1;
    bool pre_abs_1;

    cout << "Enter the name of the first student: ";
    cin >> name;
    cout << "Enter the marks of the first student in the mid-term exam: ";
    cin >> mids;
    cout << "Enter the marks of the first student in the end-term exam: ";
    cin >> ends;
    cout << "Was the first student present in the class? (1 for true / 0 for false): ";
    cin >> pre_abs;

    cout << "Enter the name of the second student: ";
    cin >> name_1;
    cout << "Enter the marks of the second student in the mid-term exam: ";
    cin >> mids_1;
    cout << "Enter the marks of the second student in the end-term exam: ";
    cin >> ends_1;
    cout << "Was the second student present in the class? (1 for true / 0 for false): ";
    cin >> pre_abs_1;

    // Perform any desired operations with the entered information

    return 0;
}
