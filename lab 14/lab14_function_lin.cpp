/*
Wilson Lin
June 12, 2026
Lab 14, function calling function using AI
*/

#include<iostream>

using namespace std;

// function 1
int inputMarks(){
    int Mark;
    do{
        cout<<"Enter your score: ";
        cin>>Mark;
        if(Mark < 1 || Mark >100 ){
            cout<<"Error, Please enter a number between 1 and 100."<<endl;
        }
    }while (Mark < 1 || Mark >100 );
    return Mark;
}
// function 2
int totalMarks(int m1, int m2, int m3){
    int total = m1 + m2 + m3;
    return total;
}
// function 3
float calculatePercentage(int total){
    int percentage = (total/300.0)*100;
    return percentage;
}
// function 4
char determineGrade(float percentage){
    char letter;
    if(percentage <= 100 && percentage >= 90){
        letter = 'A';
   }
   else if(percentage <= 89 && percentage >= 80){
        letter = 'B';
   }
   else if(percentage <= 79 && percentage >= 70){
        letter = 'C';
   }
   else if(percentage <= 69 && percentage >= 60){
        letter = 'D';
   }
   else if(percentage <= 59){
        letter = 'F';
   }
   else{
    cout<<"Error, Please restart."<<endl;
   }
   return letter;
}
// function 5
void displayResult(int m1, int m2, int m3,  char grade){
    cout<<"With marks "<<m1<<" , "<<m2<<" , "<<m3<<" , the GRADE is "<<grade<<endl;
}