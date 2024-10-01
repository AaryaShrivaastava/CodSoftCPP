#include<iostream>
using namespace std;

class TicTacToe
{
    int input1, input2;
    char Board[9]={'1','2','3','4','5','6','7','8','9'};
    public:
        void createBoard();
        void updateBoard(int a, char b);
        void player1();
        void player2();
        bool checkWin(char a);
        bool checkdraw();
        void startGame();
};
