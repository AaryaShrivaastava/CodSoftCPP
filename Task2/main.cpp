#include<iostream>
#include<conio.h>
#include"tictactoe.hpp"
using namespace std;

int main()
{
    TicTacToe a;
    char ch;
    system("cls");
    cout<<"\nWelcome to TicTacToe!!";
    cout<<"\n\nPlayer 1 : O \nPlayer 2 : X";
    cout<<"\n\nEnter the number of the postion you want to choose for your move.";
    cout<<"\n\nLet the game begin!!!!!";
    cout<<"\nPress any key to start...";
    getch();
    do
    {
        a.startGame();
        cout<<"\n\nDo you want to play again? [Y/N] : ";
        cin>>ch;
    } while (ch=='Y'||ch=='y');  
    

    return 0;
}