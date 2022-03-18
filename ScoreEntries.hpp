#ifndef ScoreEntries_HPP
#define ScoreEntries_HPP
#include <iostream>
#include "GameEntries.hpp"


class ScoreEntries
{
    public:
        ScoreEntries(int maxEnt = 10);
    
        void add(GameEntries& e);
        void Display(GameEntries& playerOne, GameEntries& playerTwo);

        ~ScoreEntries();

    private:
        int maxEntries;
        int numEntries;
        GameEntries* entries;
};




#endif