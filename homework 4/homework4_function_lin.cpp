/*
Wilson Lin
June 21, 2026
Homework 4 - arrays
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

// function 1
void winningDigits(int win[]){
    for(int i=0; i<5; i++){
        bool duplicate;
        do{
            duplicate=false;
            win[i] = 1 + rand()%19;
            for(int j=0; j<i; j++){
                if(win[i] == win[j]){
                    duplicate = true;
                }
            }
        }while(duplicate);
    }
}
// function 2
void userTicket(int user[]){
    for(int i=0; i<5; i++){
        bool duplicate;
        do{
            duplicate =false;
            cout<<"Enter number "<<i+1<<" (1-19): ";
            cin>>user[i];
            if(user[i]<1 || user[i]>19){
                cout<<"Error! Invalid number, try again."<<endl;
                duplicate=true;
            }
            else{
                for(int j=0; j<i; j++){
                    if(user[i] == user[j]){
                        cout<<"Error! Duplicate number, try again."<<endl;
                        duplicate=true;
                    }
                }
            }
        }while(duplicate);
    }
}
// function 3
int checkWinner(int win[], int user[]){
    int matches=0;
    for(int i=0; i<5; i++){
        if(win[i] == user[i]){
            matches++;
        }
    }
    return matches;
}
// function 4
void print(int win[], int user[], int matches){
    cout<<"Winning digits = ";
    for(int i=0; i<5; i++){
        cout<<win[i]<<" ";
    }
    cout<<endl;
    cout<<"User ticket = ";
    for(int i=0; i<5; i++){
        cout<<user[i]<<" ";
    }
    cout<<endl;
    cout<<"Match numbers = "<<matches<<endl;
}