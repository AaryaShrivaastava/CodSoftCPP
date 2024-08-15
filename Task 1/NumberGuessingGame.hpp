#include<iostream>
#include"random.hpp"
using namespace std;

class Guess
{
    int target, key;

    public:
        Guess(); //Default Constructor
        ~Guess(); //Destructor

        void setTarget(); //Setter for target.
        int getTarget(); //Getter for target.
        int get_Key(); //getter for key.

        int target_num(); //Method for assigning a random value to target between 1 to 100.
        void guess(); //Method fr assigning user entered value to key and to compare it with target.
        
};
