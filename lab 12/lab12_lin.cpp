/*
Wilson Lin
June 10, 2026
lab 12, nested loops
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"\n --- example 1: nested for loop ---"<<endl;
    // one run of the outer loop will have one complete cycle of the inner loop
    int i = 0;
    while(i++ < 3){
        cout<<"Outer Loop = "<<i<<endl;
        // inner loop. print from 1 to 5
        cout<<"\t\t Innter Loop"<<endl;
        int j = 0;
        while(j++ < 5){
            cout<<"\t"<<j;
        }
    }

    cout<<"\n --- example 2: nested for loop ---"<<endl;
    // cinema seats arrangment
    // row and seats per row (colum)
    int row = 0, seats = 0;
    cout<<"Enter the number of rows: ";
    cin>>row;
    cout<<"Enter the numbe of seats per row: ";
    cin>>seats;

    for(int r = 1; r <= row; r++){
        for(int c = 1; c <= seats; c++){
            cout<<"Row "<<r<<" seat "<<c<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n --- example 3: graphing using nested loops ---"<<endl;
    const int Graphsize = 9;
    for(int row = 1; row <= Graphsize; row++){
        for(int col =1; col <= Graphsize; col++){
            if(col==5 || row==5){
                cout<<" x ";
            }
            else {
                cout<<" . ";
            }
        }
        cout<<endl;
    }
    cout<<"\n --- example 4: graphing H using nested loops ---"<<endl;
    int Dimension = 10;
    for(int row = 1; row <= Dimension; row++){
        for(int col = 1; col <= Dimension; col++){
            if(col>=3&&col<=4 && row<=8&&row>=3 || col>=5&&col<=6 && row<=6&&row>=5 || col>=7&&col<=8 && row<=8&&row>=3){
                cout<<" % ";
            }
            else{
                cout<<" . ";
            }
        }
        cout<<endl;
    }

    cout<<"\n --- Exercise A ---"<<endl;
    int number = 5;
    int guess;
    cout<<"guesses a number between 1 and 10"<<endl;
    do{
        cout<<"\n Enter your guess: ";
        cin>>guess;

        while(guess < 1 || guess > 10){
        cout<<"Error, Please enter a number between 1 and 10: ";
        cin>>guess;
        }
        if(guess < number){
            cout<<"Too low"<<endl;
        }
        else if(guess > number){
            cout<<"Too high"<<endl;
        }
        else{
            cout<<"You guess right!"<<endl;
        }
    }while(guess != number);

    cout<<"\n --- Exercise B ---"<<endl;
    for(int row = 1; row <= Dimension; row++){
        for(int col = 1; col <= Dimension; col++){
            if(col>=3&&col<=4 && row<=8&&row>=3 || col>=5&&col<=6 && row<=10&&row>=7 || col>=7&&col<=8 && row<=8&&row>=3){
                cout<<" % ";
            }
            else{
                cout<<" . ";
            }
        }
        cout<<endl;
    }
    return 0;
}