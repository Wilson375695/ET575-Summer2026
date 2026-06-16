/*
Wilson Lin
June 16, 2026
Lab 16: intro array
*/

#include<iostream>

using namespace std;

// Exercise A

// example 1: intro to pointer
void intropointer(){
    // declare variable
    int num = 12;
    char sym ='#';
    string n = "Peter";

    // declare pointer with out inital values
    int* ptrint;
    char* ptrchar;
    string* ptrstring = &n;

    // check & pointer info
    cout<<ptrint<<endl;

    // initialize a pointer with a loocation of a variable
    ptrint = &num;
    ptrchar = &sym;

    // check pointers info
    cout<<ptrint<<endl;
    cout<<ptrchar<<endl;
    cout<<ptrstring<<endl;
    
    // get the value of a pointed variable
    cout<<*ptrint<<endl;
    cout<<*ptrchar<<endl;
    cout<<*ptrstring<<endl;
}

// example 2
void a(string v){
    cout<<"V = "<<v<<endl;
    v = "update A";
}
void b(string& v){
    cout<<"B = "<<v<<endl;
    v = "update B";
}
void c(string* v){
    cout<<"C = "<<v<<endl;
}