#include <iostream>
using namespace std;

int main()
{

  string cars[] = {"Honda", "Chevy", "Corvette", "Mustang"};

  cars[0] = "Ford";

  cout << cars[0] << '\n';
  cout << cars[1] << '\n';
  cout << cars[2] << '\n';
  cout << cars[3] << '\n';

  return 0;
}