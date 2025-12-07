#include <iostream>
using namespace std;

int main(){
    string name = "Ethan";
    double gpa = 2.5;
    char grade = 'F';
    bool adult = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};

    cout << sizeof(gpa) << " byte(s)\n";
    cout << sizeof(name) << " byte(s)\n";
    cout << sizeof(grade) << " byte(s)\n";
    cout << sizeof(adult) << " byte(s)\n";
    cout << sizeof(grades)/sizeof(char) << " elements\n";

    return 0;
}