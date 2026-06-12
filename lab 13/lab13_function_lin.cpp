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

// example 3: function that returns a value
// returns the double of a number (integar).
// the numer is passed to the function as argument
int dbnumber(int n){
    return n*2;
}

// example 4: function that returns are the area of a rectangle
// returning value is a float. area rectangle = width * lenght
float arearectangle(float width, float length){
    return width * length;
    // any line after the first returns are ignored
    /*
    float n = 2*(width * length);
    return n;
    */
}

// example 5: function that checks if a is positive, negative, or zero
string checknumber(int number){
    if(number > 0){
        return "positive";
        
    }
    else if(number < 0) {
        return "negative";        
    }
    else{
        return "zero";
    }
}

// example 6: composition of functions
// function 1: collect and return a positive
//validate that the number is positive before returning it
int positivenumber(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // recollect n if n is not a positive number
    while (n < 0){
        cout<<"Error! Enter a positive number: ";
        cin>>n;
    }
    return n;
}

// function 2: calculates the area of a square
int areasquare(int side){
    return side * side;
}

void printresult(int area){
    cout<<"The area of a square is "<<area<<endl;
    return;
}
// exmaple 7: function calling function
// function 1: returns the sum of two numbers
int addition(int a, int b){
    return a+b;
}
// function 2: return the triple of the sum of wo numbers
int tripleaddition(){
    return 3*(addition(2,3)); // function calling function
}

// Exercise
// function 1
int collectnumber(){
    int num;
    do {
        cout<<"Enter a number between 1 and 10: ";
        cin>>num;
        if(num < 1 || num > 10){
            cout<<"Error, Try again!"<<endl;
        }
    }while (num < 1 || num > 10);
    return num;
}
// function 2
void printnum(int num){
    cout<<"Number for "<<num<<" to 15: ";
    for(int i = num; i <= 15; i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
// function 3
int notnum(int num){
    int count = 0;
    for(int i = num; i <= 15; i++){
        if(i%3 != 0){
            count++;
        }
    }
    return count;
}
// function 4
void result(int num, int count){
    cout<<"From "<<num<<" up to 15, there are "<<count<<" number/s that are not multiplied by 3."<<endl;
}