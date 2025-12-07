#include <iostream>
using namespace std;

int main(){
    int array[] = {10, 15, 4, 6, 12, 50, 16, 81, 3, 2};
    int size = sizeof(array)/sizeof(array[0]);

    for(int element : array){
        cout << element << " ";
    }
    cout << '\n';
    
    return 0;
}