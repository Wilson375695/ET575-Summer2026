/*
Wilson Lin
June 9, 2026
lab 11, do-while loop, nested loop
*/
#include<iostream>

using namespace std;

int main() {
    cout<<"\n --- example 1: do-while ---"<<endl;
    // do block --> check if a number is even or odd
    // while block --> will run if the user wants another by typing 'y' 'Y'
    int num;
    char choice;
    do{
        cout<<"Enter a number: ";
        cin>>num;
        if(num%2==0 && num !=0) {
            cout<<"Even number"<<endl;
        }
        else if (num == 0) {
            cout<<"Number is zero"<<endl;
        }
        else {
            cout<<"Number is odd"<<endl;
        }
        cout<<"Do you want another run? ";
        cin>>choice;
    } while(choice == 'y' || choice == 'Y');
    cout<<"End of program"<<endl;

    cout<<"\n --- example 2: loop with a break statement ---"<<endl;
    //break statement terminates or exits the entire loop iteration
    // use loop to add postitive numbers, if a negative number is entered, the loop will end.
    int sumnumbers = 0;
    int n;
    while(true) {
        cout<<"Enter a positve number: ";
        cin>>n;
        if(n>0) {
            sumnumbers += n;
        }
        else {
            break;
        }
    }
    cout<<"End of while loop. Total sum = "<<sumnumbers<<endl;

    cout<<"\n --- example 3: loop with a continue statement ---"<<endl;
    // continue statement skips the current loop iteration and goes to the next iteration
    // print 1 to 9, add all numbers expecpt 5
    int sumall = 0;
    for(int m = 1; m <= 9; m++){
        cout<<m<<"\t";
        if(m == 5){
            continue;
        }
        sumall += m;
    }
    cout<<endl<<"total sum = "<<sumall<<endl;

    cout<<"\n --- example 4: loop with a coditional statement ---"<<endl;
    //declare variables
    int counts = 0;
    int ip = 10;

    while(ip>5){
        ip--;
        if(ip%2 == 0){
            counts += ip;
            continue;
        }
        counts -= 3;
    }
    cout<<"Final count is = "<<counts<<endl;
    /*
    table to ananyze the flow of a loop with conditional statement 
    loop iteration  | While(i>5) | i-- | if (i%2 == 0) | count += i | count -= 3 
    1 |While(10>5) True| 10-1=9 = i| if(9%2==0) False |skipped |count = 0-3 =-3
    2 |While(9>5) True|9-1=8 = i|if(8%2==0) True |count = -3+8=5 |skipped 
    3 |While(8>5) True| 8-1=7 = i|if(7%2==0) False |skipped |count = 5-3 = 2
    4 |While(7>5) True| 7-1=6 = i|if(6%2==0) True |count = 2+6=8 |skipped
    5 |While(6>5) True| 6-1=5 = i|if(5%2==0) False |skipped | count = 8-3 = 5
    6 |While(5>5) False| 
    */

    cout<<"\n --- Exercise 1 ---"<<endl;
    int sum=0, count=0;
    for (int n = 20; n> 0; n-=2){
            if (n%3 ==0){
                count++;
                continue;
            }
            sum += n;
    }
    cout<<"The sum is: "<<sum<<endl<<"The count is: "<<count<<endl;

    cout<<"\n --- Exercise 2 ---"<<endl;
    int i=0, add=0;
    while(i<=10){
        i++;
        if(i<5 && i !=2){   
            cout<<"i = "<<i<<endl;
        }
        else{continue;}
            add +=i;
        }
    cout<<"Add = "<<add<<endl;


    return 0;
}