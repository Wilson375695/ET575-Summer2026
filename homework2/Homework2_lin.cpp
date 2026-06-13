/*
Wilson Lin
Homeowrk 2: Loop mechanism
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n --- Question 1 ---"<<endl;
    int num;
    do{
        cout<<"Please enter a number greater than or equal to 10: ";
        cin>>num;
        if(num < 10){
            cout<<"Error, "<<num<<" is not greater than or equal to 10."<<endl;
        }
    }while(num < 10);
    cout<<num<<" is a valid number!"<<endl;

    cout<<"\n --- Question 2 ---"<<endl;
    int num1, num2;
    int min, max;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    cout<<"RESULT = ";
    if(num1 > num2){
        min=num2;
        max=num1;
    }
    else{
        min=num1;
        max=num2;
    }
    while(min <= max){
        cout<<min<<" ";
        min++;
    }
    cout<<endl;

    cout<<"\n --- Question 3 ---"<<endl;
    int Dimension = 10;
    for(int row = 1; row <= Dimension; row++){
        for(int col = 1; col <= Dimension; col++) {
            if(col==3 && row>=4&&row<=5 || col==4 && row>=3&&row<=6 || col==5 && row>=5&&row<=8 || col==6 && row>=3&&row<=6 || col==7 && row>=4&&row<=5){
                cout<<" % ";
            }
            else{
                cout<<" . ";
            }
        }
        cout<<endl;
    }

    // note: In the homework 2, question 3 the dimension is in 9 not 10.
    return 0;
}