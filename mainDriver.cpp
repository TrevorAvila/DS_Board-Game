#include <iostream>
#include <cmath>
#include <time.h> 
#include "GameEntries.hpp"
#include "ScoreEntries.hpp"
#include "Students.hpp"
#include "GameEntries.cpp"
#include "ScoreEntries.cpp"
#include "Students.cpp"

using namespace std;

int GameboardDisplay(int boardSize);

int negativeFunction( int score, int boardSize);

int positiveFunction( int score, int boardSize);

int diceRoll( int score, int boardSize);


int main()
{
    srand(time(0));

    int totalPlayers;
    int boardSize;

    //cout << "max players allowed: 2" << endl;
    cout << "Enter total max players: ";
    cin >> totalPlayers;

    cout << "use perfect sqaure numbers only" << endl;
    cout << "Enter top score for board: ";
    cin >> boardSize;

    cout << endl;

    // create player objects 
    GameEntries playerOne(0, "Trevor", 0, "Soccer");
    playerOne.gpa = 3.7;
    playerOne.semester = 8;
    GameEntries playerTwo(0, "Josh", 0, "Soccer");
    playerTwo.gpa = 3.2;
    playerTwo.semester = 7;

    // object and parameter
    ScoreEntries boardTracker(totalPlayers);

    cout << "Game Board: " << endl;
    // int highestscore = sqrt(boardSize);
    // int temp = boardSize;
    // int** board = new int*[highestscore];

    // for(int i = 0; i < highestscore; i++)
    // {
    //     board[i] = new int [highestscore];
    // }   

    // for(int i = 0; i < highestscore; i++)
    // {
    //     for(int j = 0; j < highestscore; j++)
    //     {
    //         board[i][j] = temp;
    //         temp --;
    //     }
    // }
    
    // //GameboardDisplay(boardSize);
    
    // for(int i = 0; i < highestscore; i++)
    // {
    //     for(int j = 0; j < highestscore; j++)
    //     {

    //         cout << board[i][j] << " ";
    //     }
        
    //     cout << endl;
    // }


    // variables to track players in turns
    int play1; 
    int play2;
    int completedPlayers = 0;
    int turns = 1;

    // playing until players finish
    while (completedPlayers < totalPlayers)
    {
        // scores below top score to add score
        if( playerOne.getScore() < boardSize || playerTwo.getScore() < boardSize)
        {
            cout<< " turn: " << turns << endl;

            // setting score for players
            playerOne.setScore(diceRoll(playerOne.getScore(), boardSize));
            cout << "Player 1: " << playerOne.getScore() << endl;

            playerTwo.setScore(diceRoll(playerTwo.getScore(), boardSize));
            cout << "Player 2: " << playerTwo.getScore() << endl;

            // score added to score object if they reach top score
            if(playerOne.getScore() == boardSize && play1 == 0)
            {
                play1++;
                playerOne.setTurn(turns);
                boardTracker.add(playerOne);
            }

            if(playerTwo.getScore() == boardSize && play2 == 0)
            {
                play2++;
                playerTwo.setTurn(turns);
                boardTracker.add(playerTwo);
            }

            turns++;
           
        }

        // end game when players have top score 
        else
        {
            completedPlayers = totalPlayers;
        }

    }

    cout << "\n" << "Final Scores of Game: " << endl;

    // print names, score and turns 
    boardTracker.Display(playerOne, playerTwo);
    cout << endl;

    // playerOne.~GameEntries();
    // playerTwo.~GameEntries();
    // boardTracker.~ScoreEntries();

    // compare function of players to say which is better or not
    playerComparsion(playerOne, playerTwo);
    
    cout << endl;

    cout << "Infomations on Players: " << endl;
    cout << playerOne;
    cout << playerTwo;

    //selectionSort(float a[], float n, playerOne, playerTwo);


    return 0;
}

// gameboard
int GameBoardDisplay(int boardSize)
{
    int highestscore = sqrt(boardSize);
    int temp = highestscore;
    int** board = new int*[highestscore];

    for (int i = 0; i < sqrt(highestscore); i++)
    {
        board[i] = new int [highestscore];
    }   

    for (int i = 0; i < sqrt(highestscore); i++)
    {
        for (int j = 0; j <sqrt(highestscore); j++)
        {
            board[i][j] = temp;
            temp --;
        }
    }

    for (int i = 0; i < sqrt(highestscore); i++)
    {
        for (int j = 0; j <sqrt(highestscore); j++)
        {

            cout << board[i][j] << " ";
        }
        
        cout << endl;
    }

    //delete[] board;
}

int negativeFunction(int score, int boardSize)
{

    bool isPrime;
    // create copy of score in temp variable 
    int temp = score; 

    // nums less than 5 rule not applied 
    if (score <= 5)
    {
        isPrime == false; 
    }

    //start from 5 to see if num is prime
    for(int i = 5; i < score; i++)
    {
        if(score % i == 0)
        {
            isPrime = false;

        }
        else 
        {
            isPrime = true;
        }
    }

    // num is prime
    if( isPrime == true)
    {
        // if num is divisble by 7 take 3 away from score
        if(score % 7 == 0)
        {
            temp = temp - 3;
        }
        else //take 5 away if num is prime
        {
            temp = temp - 5;
        }

        // if score is over boardsize, player doesnt move 
        if (temp > boardSize)
        {
            score = score;

        }
        else // if under move player
        {
            score = temp;
        }
                     
    }

    return score;
}

bool perfectNum( int score)
{
    int sum = 0;
    int i;

    // find the sum of a score value 
    // to check if it is a perfect number 
    for(i = 1; i < score; i++)
    {
        if(score % i == 0)
        {
            sum = sum +i;
        }
    }

    // sum and score are equal, then num is perfect 
    if(score == sum)
    {
        return true;
    }
    else // not perfect num 
    {
        return false;
    }

    return false;

}

int positiveFunction( int score, int boardSize)
{
    // bool perfectNum;
    // int sum = 0;
    // int temp = score;
    // int i;

    // for(i = 1; i < score; i++)
    // {
    //     if(score % i == 0)
    //     {
    //         sum = sum +i;
    //     }
    // }

    // if(score == sum)
    // {
    //     perfectNum = true;
    // }
    // else
    // {
    //     perfectNum = false;
    // }

    // create a copy of score
    int temp = score; 

    bool perfectScore = perfectNum(score);

    // if perfect number
    if(perfectScore == true)
    {
        // if num can be divided by 10 them add 2 to score
        if(score % 10 == 0)
        {
            temp = temp + 2;
        }
        else // if num not divisble by 10 add 15 to score
        {
            temp = temp + 15;

        }
    }

    if (temp > boardSize)
    {
        score = score;
    }
    else
    {
        score = temp;
    }

    return score;

}

int diceRoll(int score, int boardsize)
{
    // create rand num
    int randomNum = rand();
    // 1 - 6 dice roll
    int rollDice = (randomNum %6 + 1);

    cout << "Dice Roll: " << rollDice << endl;

    int temp = 0;
    // sum of dice have to be under boardsize to make a move
    if(score + rollDice <= boardsize)
    {
        score = score + rollDice;

        // if roll on 6, score not affected by negative function 
        if( rollDice != 6 )
        {
            temp = negativeFunction(score, boardsize);
        }

        temp = positiveFunction(score, boardsize);

    }
    else // score will stay same if score over board size
    {
        temp = score;
    }

    return temp;
}
