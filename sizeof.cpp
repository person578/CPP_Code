#include <iostream>
using namespace std;

int main(){
    string name = "Ethan";
    double gpa = 2.5;
    char grade = 'F';
    bool adult = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    cout << sizeof(gpa) << " byte(s)\n";
    cout << sizeof(name) << " byte(s)\n";
    cout << sizeof(grade) << " byte(s)\n";
    cout << sizeof(adult) << " byte(s)\n";
    cout << sizeof(grades) << " byte(s)\n";

    return 0;
}