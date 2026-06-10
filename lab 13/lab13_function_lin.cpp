/*
Wilson Lin
June 10, 2026
lab 13: introduction to function
*/
#include<iostream>

using namespace std;

// eaxample 1: void function.
// void function is a function that doesn't retuen a value

void printhi(){
    cout<<"Hello Function!"<<endl;
    return; // for a void function, the return is nothing
}
// example 2: void function with parameter
// function that prints a new with a message
// the name is passed to the function
void greeting(string username){
    cout<<"Good Morning "<<username<<endl;
}