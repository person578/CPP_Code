#include <iostream>
using namespace std;

int main()
{

    int number;

    do {
        cout << "Enter a postive # ";
        cin >> number;
    }while(number < 0);

    if(number == 2147483647){
      cout << "You reached the integer limit of 2147483647 or got higher then it" << '\n';
    }

    else{
      cout << "The number is " << number << '\n';
    }
    return 0;
}
