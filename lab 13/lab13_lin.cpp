/*
Wilson Lin
June 10, 2026
lab 13: introduction to function
*/
#include<iostream>
#include "lab13_function_lin.cpp"

using namespace std;

int main(){
    cout<<"\n --- example 1: void fuction ---"<<endl;
    printhi();
    printhi();
    printhi();

    cout<<"\n --- example 2: void function with arguments ---"<<endl;
    greeting("Peter");
    string user = "Annie";
    greeting(user);


    return 0;
}
