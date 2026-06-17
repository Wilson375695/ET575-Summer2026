/*
Wilson Lin
June 17, 2026
lab 17, array application
*/
#include<iostream>
#include "lab17_function_lin.cpp"

using namespace std;

int main(){
    // declare size of the array
    const int sizea = 10;
    // declare the array
    int a[sizea] ={0};
    // declare the variable to save the index of the last positive number
    int listsize;
    // declare the target number
    int targetnumber = 10;

    // calling function
    filluparray(a, listsize, sizea);
    printelements(a, listsize);
    int foundindex = search(a, listsize, targetnumber);
    cout<<"Index of found number: "<<foundindex<<endl;

    cout<<"\n --- example 2: 2d array ---"<<endl;
    intro2darray();

    
    return 0;
}