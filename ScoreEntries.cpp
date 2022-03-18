#include <iostream>
#include "ScoreEntries.hpp"
#include "GameEntries.hpp"


using namespace std;

// constructor
ScoreEntries :: ScoreEntries(int maxEnt)
{
    maxEntries = maxEnt; // save the maz size
    entries = new GameEntries[maxEntries]; // allocate array storage
    numEntries = 0; // initially no elements
}
// destructor
ScoreEntries :: ~ScoreEntries()
{
    delete[] entries;
}

// add entries
void ScoreEntries :: add(GameEntries& e)
{
    int newScore = e.getScore(); // score to add 
    
    //array full
    if(numEntries == maxEntries)
    {
        // not high enough
        if(newScore <= entries[maxEntries-1].getScore())
        {
            return;
        }
    }
    else numEntries ++; //not full, one more entry

    int i = numEntries-2; // start with the next to last
    while ( i >= 0 && newScore > entries[i].getScore() ) 
    {
        entries[i+1] = entries[i]; // shift right if smaller
        i--;
    }
        entries[i+1] = e; // put e in the empty spot

}

// displays turns (rounds)
void ScoreEntries :: Display(GameEntries& playerOne, GameEntries& playerTwo)
{
    cout << playerOne.getName() << "--" << playerOne.getTurn() << endl;
    cout << playerTwo.getName() << "--" << playerTwo.getTurn() << endl;

}

