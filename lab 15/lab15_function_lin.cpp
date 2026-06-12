/*
Wilson Lin
June 11, 2026
Lab 15, recursive function, built-function
*/
#include<iostream>

using namespace std;

// example 1: recursive function
// function that calls itself during the exection of the program
void cheers(int n){
    // base case
    if(n == 1){
        cout<<"STOP"<<endl;
    }
    // recursive case
    else{
        cout<<(n*2)<<"\t";
        cheers(n-1);
    }
}

/*
function   |  int n   |     if(n==1)    |           else
iteration  |          |                 |   cout<<(n*2) | cheers
------------------------------------------------------------------------
    1      |    n=3   | false           | cout<<(3*2)=6 | cheers(3-1)=2
------------------------------------------------------------------------
    2      |    n=2   | false           | cout<<(2*2)=4 | cheers(2-1)=1
------------------------------------------------------------------------
    3      |    n=1   | true cout<<"STOP"
*/

// example 2: recursive function to find the summation of a num
// for example, summation of 5, 5+4+3+2+1+0 = 15
int summation(int n){
    //recursive case
    if(n != 0){
        return (summation(n-1) + n);
    }
    // base case
    else{
        return 0;
    }
}

// example 3: use recursive function to validaate a number
// use recursive case to recollect a number if it is not positive

int getpositive(){
    int num;

    cout<<"Enter a number ";
    cin>>num;

    // base case
    if(num>0){
        return num;
    }
    // recusive case
    else{
        return getpositive();
    }
}

// example 4: built-in function
// program to calculate the hypoteusa of a right triangle
// function to calculate the hypotenuse
#include<cmath>

float hypotenuse(int side1, int side2){
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// function to print result
void printresult(int side1, int side2, float hyp){
    cout<<"The hypotenuse of a right triangle with sides "<<side1<<" and "<<side2<<" is "<<hyp<<endl;
}

// example 5: random numbers
#include<cstdlib>

void randomnumber(){
    cout<<rand()<<endl;
    cout<<rand()<<endl;
    cout<<rand()<<endl;
}

// example 6: random number between -5 and 10, inclusive
int random_neg5_10(){
    srand(time(0));
    return (-5 + rand()%16);
}