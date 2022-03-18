#ifndef GameEntries_HPP
#define GameEntries_HPP
#include <iostream>
#include "Students.hpp"

using namespace std;

class GameEntries: public Students
{
    public:
        GameEntries(const int A = 0, const string B = "", const int T = 0, const string S = "");
        
        string& getName() {return name;};
        int& getScore() {return score;};
        int& getTurn() {return roundTurn;};
        
        //updated
        string& getSportPlayed() {return sportName;};

        void Display() const;
        void setScore(int firstScore);
        void setTurn(int TurnTotal);
        void getName() const;
        void getScore() const;

        // updated
        void setSportPlayed(string nameSport);
        //compares players
        friend void playerComparsion(GameEntries& p1, GameEntries& p2);   
        // overloading << operator to display info   
        friend void operator << (ostream& os, GameEntries& p0);


        //~GameEntries();

    private:
        string sportName;
        string name;
        int score;
        int roundTurn;
};


#endif