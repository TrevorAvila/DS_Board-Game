#include<iostream>
#include "GameEntries.hpp"

using namespace std;

//constuctor
GameEntries :: GameEntries( const int A, string B, int T, string D)
    : score(A), name(B), roundTurn(T), sportName(D)
{}

//gets name
void GameEntries :: getName() const
{
    cout<< name << endl;
}

// gets score
void GameEntries :: getScore() const
{
    cout << score << endl;
}

//display players
void GameEntries :: Display() const
{

    getName();
    getScore();
}

// sets scores
void GameEntries :: setScore(int firstScore)
{
    score = firstScore;
}

// sets turns
void GameEntries :: setTurn (int TurnTotal)
{
    roundTurn = TurnTotal;
}

// sets sport name 
void GameEntries :: setSportPlayed(string nameSport)
{
    sportName = nameSport;
}

// compares players by sport and gpa
void playerComparsion(GameEntries& p1, GameEntries& p2)
{
    cout << "Two players compared based on GPA and score: " << endl;

    if (p1.getSportPlayed() == p2.getSportPlayed() && p1.getSemester() == p2.getSemester())
    {
        // if player 1 gpa and score are better than the other
        if(p1.getScore() >= p2.getScore() && p1.getGPA() >= p2.getGPA())
        {
            cout << "Player: " << p1.getName() << "is better than. " << p2.getName() << endl;
        }
        // if player 2 gpa and score are better than the other
        else if (p1.getScore() <= p2.getScore() && p1.getGPA() <= p2.getGPA())
        {
            cout << "Player: " << p2.getName() << "is better than. " << p1.getName() << endl;
        }
        // If both are equal
        else if (p1.getScore() == p2.getScore() && p1.getGPA() == p2.getGPA())
        {
            cout << "Player: " << p1.getName() << "and " << p2.getName() << " are equal."<<endl;
        }
        else
        {
            cout << "The players are not equal and none is better than the other in the categories of gpa and score." << endl;
        }
    }
    else 
    {
        cout << "Players cannot be compared because their semester and sport are not the same." << endl;
    }
};

// Overloading output from GameEntries info
void operator << (ostream& os, GameEntries& p0)
{
    cout << p0.getName() << ": " 
    << " Semester: " << p0.getSemester() 
    << " GPA: " << p0.getGPA() 
    << " Sport: " << p0.getSportPlayed() << endl;
}

//destructor
// GameEntries :: ~GameEntries()
// {
//     delete[] &name, score, roundTurn;
// }


