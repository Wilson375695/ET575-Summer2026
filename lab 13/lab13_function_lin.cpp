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
    
}