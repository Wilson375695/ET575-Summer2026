/*
Wilson Lin
June 21, 2026
Homework 4 - arrays
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include "homework4_function_lin.cpp"
using namespace std;

int main(){
    srand(time(0));
    int winning[5];
    int ticket[5];
    winningDigits(winning);
    userTicket(ticket);
    int matches=checkWinner(winning, ticket);
    print(winning, ticket, matches);
    return 0;
}