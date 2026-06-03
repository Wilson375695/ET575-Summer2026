/*
Wilson Lin
June 3, 2026
Lab 7: control flow
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n --- example 1: bool variable ---"<<endl;
    // bool variable to check if a number is positive
    // declare variables
    int n;
    bool checkpositive; //bool values are 0(false) or 1(true)

    // collect number
    cout<<"Enter a number: ";
    cin>>n;

    // check if number is positive
    checkpositive = n > 0;

    // print results
    cout<<"IS number "<<n<<" positive? "<<checkpositive<<endl;

    // update checkpositive
    checkpositive = "hello";
    // for a bool value that is not 0 or 1, the return is always 1

    cout<<"updated checkpositive = "<<checkpositive<<endl;

    cout<<"\n --- example 2: if statement ---"<<endl;
    // check if n is zero
    int c = 10;
    if(n==0){
        cout<<"n is zero!";
        c += 20;
    }
    else{
        cout<<"End of example 2"<<endl;
    }
    cout<<"\t Updated c = "<<c<<endl;

    cout<<"\n --- example 3: if-else statement ---"<<endl;
    // if-else behaves as ON/OFF switch
    // chif a number is even or odd. Even numbers are divisible by 2, meaning that when the number is divided by 2, the remainder is 0.
    if(n%2 == 0){
        cout<<n<<" is an EVEN number"<<endl;
    }
    else{
        cout<<n<<" is an ODD number"<<endl;
    }

    cout<<"\n --- example 4: if-else statement ---"<<endl;
    /*
    - Ultraviolet: less than 379 nm and greater than or equal to 10 nm
    - Blue: 380 nm to 520 nm
    - Green: 521 nm to 590 nm
    - Red: 591 nm to 740 nm
    - Infrared: more than 741 nm
    - Any wavelength less than 10 nm are undefin
    */
    // declare variables
    int wavelength = 0;
    string emittedlight = "";

    // update wavelength
    cout<<"Enter a wavelength: ";
    cin>>wavelength;
    if(wavelength<379 && wavelength>=10){
        emittedlight = "Ultraviolet";
    }
    else if(wavelength<520 && wavelength>=380){
        emittedlight = "Blue";
    }
    else if(wavelength<590 && wavelength>=521){
        emittedlight = "Green";
    }
    else if(wavelength<740 && wavelength>=591){
        emittedlight = "Red";
    }
    else if(wavelength>=741){
        emittedlight = "Infrared";
    }
    else(emittedlight = "Undefined");

    //print result
    cout<<wavelength<<" nm emits "<<emittedlight<<" light"<<endl;

    cout<<"\n --- example 5: conditional operator ---"<<endl;
    // conditional operator: three operands --> conition ? expression1 (true) : expression2 (false)
    /*
    (example 3)
    if(n%2 == 0){
        cout<<n<<" is an EVEN number"<<endl;
    }
    else{
        cout<<n<<" is an ODD number"<<endl;
    }
    */

    cout<<n<<(n%2 == 0 ? " is an EVEN number" : " is an ODD number")<<endl;

    cout<<"\n --- example 6: conditional operator ---"<<endl;
    // check if n is greater than 10. if n is greater that 10, set the max value to n.
    int max = 10;
    bool checkmax = false;
    // conditional operands to check if n is greater than max.
    checkmax = n > max ? true : false;

    // if-else
    if(n > max){
        checkmax = true;
    }
    else{
        checkmax = false;
    }

    // print result
    cout<<"Is n greater than 10? = "<<checkmax<<endl;

    cout<<"\n --- example 7: nested conditional statement ---"<<endl;
    //check if a n, is positive (even or odd), negative (even or odd), or zero
    /*
    // mutiway statement
    if(n > 0 && n%2 == 0){
        cout<<"positive and even number"<<endl;
    }
    else if(n > 0 && n%2 != 0){
        cout<<"positive and odd number"<<endl;
    }
    else if(n < 0 && n%2 == 0){
        cout<<"negative and even number"<<endl;
    }
    else if(n < 0 && n%2 != 0){
        cout<<"negative and odd number"<<endl;
    }
    else{
        cout<<"zero"<<endl;
    }
    */
   if (n > 0){
    if(n%2 == 0){
        cout<<"positive and even number"<<endl;
    }
    else{
        cout<<"positive and odd number"<<endl;
    }
    
   }
   else if(n < 0){
    if(n%2 == 0){

        cout<<"negative and even number"<<endl;
    }
    else{
        cout<<"negative and odd number"<<endl;
    }
   }
   else{
    cout<<"zero"<<endl;
   }

   cout<<"\n --- Exercise ---"<<endl;
   float weight = 0;
   float cost = 0;
   cout<<"Enter package weight in pounds = ";
   cin>>weight;
   if(weight <= 2 && weight > 0){
    cost = 5.00;
   }
   else if(weight <= 5 && weight > 2){
    cost = 8.20;
   }
   else if(weight <= 10 && weight > 5){
    cost = 10.25;
   }
   else if(weight > 10){
    cost = 12.50;
   }
   else{
    cost = 0;
   }
   cout<<"A package weight of "<<weight<<" pounds the cost is $"<<cost<<endl;
   return 0;
}