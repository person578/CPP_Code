#include <iostream>
using namespace std;

int main(){
    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);

    for(int i = 0; i < size; i++){
        i++;
        cout << "Enter a food you like #" << i << ": ";
        i--;
        getline(cin, foods[i]);
    }

    return 0;
}