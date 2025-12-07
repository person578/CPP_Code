#include <iostream>
using namespace std;

int main(){
    string name = "Ethan";
    double gpa = 2.5;
    char grade = 'F';
    bool adult = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    cout << sizeof(gpa) << " bytes\n";
    cout << sizeof(name) << " bytes\n";
    cout << sizeof(grade) << " bytes\n";
    cout << sizeof(adult) << " bytes\n";
    cout << sizeof(grades) << " bytes\n";

    return 0;
}