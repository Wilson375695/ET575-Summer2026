/*
Wilson Lin
June 16, 2026
Lab 16: intro array
*/

#include<iostream>
#include "lab16_function_lin.cpp"
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    cout<<"--- Exercise A ---"<<endl;
    int* ptr; // pointer hold value of address or what to point that use hexadecimal number of the address. At the start pointer don't point at any thing it's value is 0x0.
    int var = 7; // var have the value of 7. if the pointer point at "var" the value is 7. 
    int foo = 21; // var have the value of 21. if the pointer point at "foo" the value is 21. 
    ptr = &var; // the pointer value is equal to "var" or 7
    ptr = &foo; // the pointer value is equal to "foo" or 21
    int ref = var; // the pointer can point to "var" or "ref" the value it get is 21. it use the same address. 

     cout<<"\n --- example 1: intro to pointer ---"<<endl;
    intropointer();

    cout<<"\n --- example 2: checking different data ---"<<endl;
    string something = "Hello World!";
    a(something);
    cout<<something<<endl;
    b(something);
    cout<<something<<endl;
    c(&something);
    a(something);

    cout<<"\n --- example 3: intro to array ---"<<endl;
    introarray();

    cout<<"\n --- example 4: print each element in an array ---"<<endl;
    const int s = 4;
    int age[s]={0};

    printelements(s, age);
    updatearray(s,age);
    printelements(s, age);

    int c = countadult(s, age);
    cout<<"Adult 21+ = "<<c<<endl;

    cout<<"\n --- Exerice B ---"<<endl;
    srand(time(0));
    const int sizes = 10;
    int numbers[sizes];
    fill(numbers, sizes);
    cout<<"Array elements: ";
    for(int i = 0; i<sizes; i++){
        cout<<numbers[i]<<" ";
    }
    cout<<endl;
    cout<<"Even numbers = "<<countEven(numbers, sizes)<<endl;
    return 0;
}