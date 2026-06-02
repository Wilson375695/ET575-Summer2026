/*
Wilson Lin
June 1, 2026
Lab 3: Numerical variables
*/

#include <iostream>
using namespace std;
int main(){
    cout<<"\n --- example 1: numerical variables ---"<<endl;
    int number = 5.9;
    cout<<"The number is = "<<number<<endl;
    double number1 = 3.123456789;
    float number2 = 9.123456789;
    cout<<"The double data type = "<<number1<<endl;
    cout<<"THe float data type = "<<number2<<endl;

    cout<<"\n --- example 2: constant variables ---"<<endl;
    number = 23.65
    cout<<"The update number = "<<number<<endl;
    const float EXP = 2.718;
    cout<<"THe value of EXP = "<EXP<<endl;

    cout<<"\n --- example 3: calculate the height of a falling object ---"<<endl;
    const float GRAVITY = 9.8;
    float time = 0, height = 0;
    cout<<"Enter the fallling time: ";
    cin>>time;
    height = 0.5*GRAVITY*time*time;
    cout<<"The height of a falling object at "<<time<<" is "<<hight<<" meters."<<endl;

    cout<<"\n --- example 4: calculate the circumference of a circle ---"<<endl;
    const float PI = 3.14159;
    float circumference = 0, radius = 0:
    cout<<"Enter a radius: ";
    cin>>radius;
    Circumference = 2*radius*PI;
    cout<<"The circumference is = "<<circumference<<endl;

    cout<<"\n --- Exercise ---"<<endl;
    int r = 0


    return 0;
}