#include <iostream>
using namespace std;

int main(){
    string name = "Ethan";
    int age = 12;
    bool student = true;


    // the '&' symbol is the "address of" operator which shows the address of the thing you put next to it
    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}