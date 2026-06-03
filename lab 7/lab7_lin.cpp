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


    return 0;
}