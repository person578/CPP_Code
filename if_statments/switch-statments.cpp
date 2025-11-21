#include <iostream>
using namespace std;

int main()
{

    int month;

    cout << "What month is it (1-12)? ";
    cin >> month;

    switch(month){
        case 1:
            cout << "It's January" << '\n';
            break;
        case 2:
            cout << "It's Febuary" << '\n';
            break;
        case 3:
            cout << "It's March" << '\n';
            break;
        case 4:
            cout << "It's Apirl" << '\n';
            break;
        case 5:
            cout << "It's May" << '\n';
            break;
        case 6:
            cout << "It's June" << '\n';
            break;
        case 7:
            cout << "It's July" << '\n';
            break;
        case 8:
            cout << "It's Auguast" << '\n';
            break;
        case 9:
            cout << "It's September" << '\n';
            break;
        case 10:
            cout << "It's October" << '\n';
            break;
        case 11:
            cout << "It's November" << '\n';
            break;
        case 12:
            cout << "It's December" << '\n';
            break;
        default:
            cout << "pick a number (1-12)" << '\n';
    }

    return 0;
}