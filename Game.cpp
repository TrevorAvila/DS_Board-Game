#include <iostream>
//#include <cstdlib>

using namespace std;

int negativeFunction(int score)
{
    int score, i, currentScore;

    bool isPrime = true;

    if (currentScore == 0 || currentScore == 1)
    {
        isPrime = false;

    }

    for (i = 2; i <= currentScore/2;  ++i)
    {
        if (currentScore % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if (isPrime)
    {
        //decrease score by 5
    }
    else if (isPrime <= 5)
    {
        //keep score
    }




}

int positiveFunction(int score)
{

    int score, i, currentScore = 0;

    for(i = 1; i < score; i++)
    {
        if(score % i == currentScore)
        {
            currentScore = currentScore + i;
        }

    }

    if(score == currentScore)
    {
        // increase score by 15
    }
    else if (currentScore % 10 == 0)
    {
        // increase score by 2 if divisble by 10
    }



}




int main()
{

    //int dice = (int) (1 + rand()%6);
    //cout << dice << endl;


    int n ; 
    for (int i = 0; i < n; i++)
    {
        cout << (rand() % 6) + 1 << " ";
    }

    //cout << (rand() % 6) + 1 << " ";







    
    return 0;
}