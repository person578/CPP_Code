#include <iostream>
using namespace std;

void sort(int array[], int size);

int main(){
    int array[] = {10, 15, 4, 6, 12, 50, 16, 81, 3, 2};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int element : array){
        cout << element << " ";
    }
    cout << '\n';
    
    return 0;
}

void sort(int array[], int size){

}