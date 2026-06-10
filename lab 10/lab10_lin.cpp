/*
Wilson Lin
lab 10, loop mechanims
June 9, 2026
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n --- example 1: for loop as counter ---"<<endl;

    /* for loop has three main statement for(initial action; boolean expresion; update action)
    */
    // use a for loop to print Hello 5 time
    int x = 3;
    for(int x = 0  ; x <= 5; x++) {
        cout<<"Hello "<<x<<endl;
    }
    cout<<"End of for loop. Value of x = "<<x<<endl;

    cout<<"\n --- example 2: for loop as counter with different steps ---"<<endl;
    // print from 1 to 9 step 2
    for(int x = 1; x <= 9; x+=2) {
        cout<<x<<"\t";
    }

    cout<<"\n --- example 3: for loop as decrement counter with different steps ---"<<endl;
    // print from 10 to -10 step 3
    for(int x = 10; x >= -10; x-=3) {
        cout<<x<<"\t";
    }
    cout<<endl;

    cout<<"\n --- example 4: for loop with conditioanal statement ---"<<endl;
    // count the number that are multipled of 5 between -20 and 20 step 4
    int counter = 0;
    int supositive = 0;
    for(int x= -20; x <= 20; x += 4) {
        cout<<x<<"\t";
        if(x%5==0 && x != 0){
            counter++;
        }
        if(x>0) {
            supositive += x;
        }
    }
    cout<<endl<<"numbers that are multipled of 5 = "<<counter<<endl;
    cout<<"sum of all positive numbers = "<<supositive<<endl;

    cout<<"\n --- example 5: while loop as a couter ---"<<endl;
    // while loop to print from 1 to 5, inclusive
    int n = 1;
    while(n <= 5) {
        cout<<n<<"\t";
        n++;
    }
    cout<<endl;

    n = 1;
    while(n++ <=5) {
        cout<<n<<"\t";
    }
    cout<<endl;

    n = 1;
    while(++n <=5) {
        cout<<n<<"\t";
    }

    cout<<"\n --- example 6: while loop to validate an input ---"<<endl;
    int number = 0;
    cout<<"Enter a number: ";
    cin>>number;

    // while loop to recollect a number that is not between 1 and 9
    while(!(number>=1 && number <=9)) {
        cout<<"Enter a new number between 1 and 9 ";
        cin>>number;
    }

    cout<<"Collected number = "<<number<<endl;

    cout<<"\n --- Exercise 1 ---"<<endl;
    int count = 0;
    for(int c = 21; c >= -21; c-=5) {
        if(c%2 == 0){
            count++;
        }   
        cout<<c<<endl;
    }
    cout<<"The timed is a multiple of 2: "<<count<<endl;
    cout<<"\n --- Exercise 2 ---"<<endl;
    int start;
    cout<<"Enter the start number: ";
    cin>>start;
    for(start; start <= 30; start +=4){
        cout<<start<<endl;
    }
    // no
    return 0;
}