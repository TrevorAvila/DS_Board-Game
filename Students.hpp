#ifndef Students_HPP
#define Students_HPP
#include <iostream>

using namespace std;

class Students
{
    public:
    
        Students(const string A = "", float B = 0.0, int C = 0);
        string& getName() {return name;};
        float& getGPA() {return gpa;};
        int& getSemester() {return semester;};

        void setName(string StudentName);
        void setGPA(float StudentGPA);
        void setSemester(int StudentSemester);
        void selectionSort();

        string name;
        float gpa;
        int semester;
};

#endif