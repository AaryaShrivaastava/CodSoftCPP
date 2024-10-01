#include<iostream>
#include"random.hpp"
#include"NumberGuessingGame.hpp"
using namespace std;

Guess::Guess()
{
    this->target = 0;
    this->key = 0;
}
Guess::~Guess()
{

}
void Guess::setTarget()
{
    this->target = target_num();
    
}

int Guess::getTarget()
{
    return this->target;
}
int Guess::get_Key()
{
    return this->key;
}
int Guess::target_num()
{
    Randomize();
    
    int n = Random(100)+1;     
    return n;
}

void Guess::guess()
{
    int count = 10;
    cout<<"\n\nYou have 10 chaces to guess the number. \n\nAll the best!!";
    do
    {
        cout<<"\nEnter Your Guess : ";
        cin>>this->key;

        if(this->key>this->target)
            cout<<"\n\nThe guess is too high.";
        else if(this->key<this->target)
            cout<<"\n\nThe guess is too low";
        count--;
        cout<<endl<<count<<" chances left.";
    } while (this->key != this->target && count>0);
    if (count>0)
        cout<<"\n\nCongratulations!! You Won in "<<10-count<<" chances.";
    else
    cout<<"\n\nThe number was : "<<target<<"\nYou couldn't win... No worries, better luck next time!!";
}