#include<iostream>
#include<stdlib.h>
#include"tictactoe.hpp"

using namespace std;

void TicTacToe::createBoard()
{    
    int count =0;
    int i = 0;
    
    do
    {
        if(count<2)
        {
            cout<<Board[i]<<" | ";
            i++;
            count++;
        }
        else if(count == 2)
        { 
            cout<<Board[i];
            i++;
            count++;
        }
        else if(count == 3)
        {
            cout<<endl<<"----------"<<endl;
            count = 0;
        }
    } while (i < 9);   

}

void TicTacToe::updateBoard(int a, char b)
{
    if (Board[a-1] != 'O' && Board[a-1] != 'X')
    {
        Board[a-1] = b ;
    }
}

void TicTacToe::player1()
{
    do
    {
        cout<<"\nPlayer 1 : ";  
        cin>>this->input1;
        if( this -> input1 < 1 || this -> input1 > 9  )
        {
            cout<<"Invalid Input!";
            continue;
        }
        else
        {
            updateBoard(this->input1, 'O');
            break;
        }
    } while (this->input2);
}

void TicTacToe::player2()
{    
    do
    {
        cout<<"\nPlayer 2 : ";  
        cin>>this->input2;
        if( this -> input2 < 1 || this -> input2 > 9  )
        {
            cout<<"Invalid Input!";
            continue;
        }
        else
        {
            updateBoard(this->input2, 'X');
            break;
        }
    } while (this->input2);    

}

bool TicTacToe::checkWin(char a)
{
    if (Board[0] == a && Board[1] == a && Board[2] == a)
        return true;
    else if (Board[3] == a && Board[4] == a && Board[5] == a)
        return true;
    else if (Board[6] == a && Board[7] == a && Board[8] == a)
        return true;
    else if (Board[0] == a && Board[3] == a && Board[6] == a)
        return true;
    else if (Board[1] == a && Board[4] == a && Board[7] == a)
        return true;
    else if (Board[2] == a && Board[5] == a && Board[8] == a)
        return true;
    else if (Board[0] == a && Board[4] == a && Board[8] == a)
        return true;
    else if (Board[2] == a && Board[4] == a && Board[6] == a)
        return true;
    else
        return false;
  
}
bool TicTacToe::checkdraw()
{
    if((Board[0]=='X' || Board[0]=='O') && (Board[1]=='X' || Board[1]=='O') && 
       (Board[2]=='X' || Board[2]=='O') && (Board[3]=='X' || Board[3]=='O') && 
       (Board[4]=='X' || Board[4]=='O') && (Board[5]=='X' || Board[5]=='O') && 
       (Board[6]=='X' || Board[6]=='O') && (Board[7]=='X' || Board[7]=='O') && 
       (Board[8]=='X' || Board[8]=='O'))
        return 1;
    return 0;
}

void TicTacToe::startGame()
{
       
    int count ;
    for(count = 0  ; count < 8; count++)
    {
        system("cls");
        this->createBoard();
        this->player1();

        system("cls");
        this->createBoard();

        if(this->checkWin('O') == 1)
        {
            cout<<"\n\nPlayer 1 Wins!!";
            break;
        }
        if(this->checkdraw())
        {
            cout<<"\nDraw!!"<<endl;
            break;
        }
        this->player2();

        system("cls");
        this->createBoard();
        if(this->checkWin('X') == 1)
        {
            cout<<"\n\nPlayer 2 Wins!!";
            break;
        }
        if(this->checkdraw())
        {
            cout<<"\nDraw!!"<<endl;
            break;
        }
        else continue;
    } 
    
}