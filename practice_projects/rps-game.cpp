#include <iostream>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    cout << "Your choice: ";
    showChoice(player);

    return 0;
}

char getUserChoice(){

    char player;

    cout << "Rock-Paper-Scissors Game!\n";

    do{
        cout << "Choose one of the following\n";
        cout << "****************************\n";
        cout << "'r' for Rock\n";
        cout << "'p' for Paper\n";
        cout << "'s' for Scissors\n";
        cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice(){

}
void showChoice(char choice){
    switch(choice){
        case 'r':
            cout << "Rock\n";
            break;
        case 'p':
            cout << "Paper\n";
            break;
        case 's':
            cout << "Scissors\n";
            break;
    }
}
void chooseWinner(char player, char computer){

}