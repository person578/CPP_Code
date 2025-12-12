#include <iostream>
using namespace std;

int main(){
    string foods[100];

    fill(foods, foods + 100, "pizza");

    for(string food : foods){
        cout << food << '\n';
    }

    return 0;
}
