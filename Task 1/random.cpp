#include<iostream>
#include<ctime>
#include"random.hpp"

void Randomize()
{
    time_t t;
    time(&t);
    srand(t);
}

int Random(int x)
{
    return rand() % x;
}
