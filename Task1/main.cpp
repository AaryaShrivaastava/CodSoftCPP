#include<iostream>
#include"random.hpp"
#include"NumberGuessingGame.hpp"
using namespace std;

int main()
{
    Guess a;
    a.setTarget();
    a.guess();
    
    return 0;
}
