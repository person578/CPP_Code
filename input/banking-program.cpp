#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 397;
    int choice = 0;
    do{
        cout << "******************\n";
        cout << "Enter your choice\n";
        cout << "******************\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n\n";
        cout << "What is your choice? ";
        cin >> choice;

        switch(choice){
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                cout << "Thanks for visiting\n";
                break;
            default:
                cout << "Invalid response";
        }
        break;
    }while(choice != 4);

    return 0;
}

void showBalance(double balance){
    cout << "Your balance is $" << setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
    return 0;
}   
double withdraw(double balance){
    return 0;
}