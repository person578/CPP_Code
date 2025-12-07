#include <iostream>
using namespace std;

int main(){
    string students[] = {"Ashdon", "Emily", "Jace", "James", "Kate", "Zach", "Zane"};

    for(std::string student : students){
        cout << student << '\n';
    }

    return 0;
}