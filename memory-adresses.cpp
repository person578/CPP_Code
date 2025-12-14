#include <iostream>
using namespace std;

int main(){
    string name = "Ethan";
    int age = 12;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n';

    return 0;
}