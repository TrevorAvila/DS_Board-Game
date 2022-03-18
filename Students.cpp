#include<iostream>
#include "Students.hpp"

using namespace std;

// constructor 
Students :: Students(const string A , float B , int C)
    :name(A), gpa(B), semester(C)
{}

// sets name for student object 
void Students :: setName(string StudentName)
{
    name = StudentName;
}

// sets gpa for student object 
void Students :: setGPA(float StudentGPA)
{
    gpa = StudentGPA;
}

// sets semester for student object 
void Students :: setSemester(int StudentSemester)
{
    semester = StudentSemester;
}

// void selectionSort(float a[], float n, GameEntries& playerInfo)
// {
    
//     int i, j, min, temp;
//     for ( i = 0; i < n - 1; i++)
//     {
//         min = i;
//     }
//     for ( j = i +1; j < n; j++)
//     {
//         if (a[j] < a[min])
//         {
//             min = j;
//             temp = a[i];
//             a[i] = a[min];
//             a[min] = temp; 
//         }
//     }

//     float a[] = {playerInfo.getGPA()};
//     int n = sizeof(a)/sizeof(a[0]);
//     for (i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//         selectionSort(a,n,playerInfo);
//     }
//     for (i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }

// };