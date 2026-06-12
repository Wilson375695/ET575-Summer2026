/*
Wilson Lin
June 12, 2026
Lab 14, function calling function using AI
*/

#include<iostream>
#include "lab14_function_lin.cpp"
using namespace std;

int main(){
    int mark1, mark2, mark3;

    mark1 = inputMarks();
    mark2 = inputMarks();
    mark3 = inputMarks();
    int total = totalMarks(mark1, mark2, mark3);
    cout<<"Total score: "<<total<<endl;
    float percentage = calculatePercentage(total);
    cout<<"Percentage: "<<percentage<<" %."<<endl;
    char letter = determineGrade(percentage);
    cout<<"Letter grade: "<<letter<<endl;
    displayResult(mark1, mark2, mark3, letter);
    return 0;
}