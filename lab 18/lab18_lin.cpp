/*
Wilson Lin
June 17 and 18, 2026
Lab 18: console failure and file streaming
*/

#include<iostream>
#include "lab18_function_lin.cpp"

using namespace std;

int main(){
    cout<<"\n --- example 1: console failure test ---"<<endl;
    checknumber();
    
    cout<<"\n --- example 2: console failure test ---"<<endl;
    float n = validatenumber();
    cout<<n<<endl;

    cout<<"\n --- example 3: read file ---"<<endl;
    iofiles();

    cout<<"\n --- example 4: write file ---"<<endl;
    writefile();

    cout<<"\n --- example 5: append data into a file"<<endl;
    string filename = "outputfile.txt";
    appendfile(filename);

    cout<<"\n --- Exercise 1 ---"<<endl;
    double num1, num2;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Result = "<<calculator(num1, num2)<<endl;
    cout<<"\n --- Exercise 2 ---"<<endl;
    createfile();
    appendfiles("This text was appended to the file.");
    overwritefile("newfile.txt", "This file was created and overwritten.");
    return 0;
}