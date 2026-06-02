/*
Wilson Lin
Lab 1: iostream
*/
#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n---Example 1: count object---"<<endl;
    cout<<"Hello World!\n"<<endl;
    cout<<"ET 575 \t\t Wilson Lin"<<endl;

    cout<<"\n---Example 2: declaring string and charter variables---"<<endl;
    string username;
    username = "Wilson Lin";
    cout<<"U = "<<username<<endl;
    cin>>username;
    cout<<"Updated username: "<<username<<endl;

    cout<<"\n---Example 3: declaring charter variable---"<<endl;
    char symbol = '%';
    cout<<"Character = "<<symbol<<endl;
    symbol = 64;
    cout<<"Updated character = "<<symbol<<endl;
    char s(35);
    cout<<"Symbol = "<<s<<endl;

    cout<<"\n---Exercise---"<<endl;
    string country;
    char gender;
    cout<<"Enter a country: ";
    cin>>country;
    cout<<"Enter gender (f = female, m = male, o = others): ";
    cin>>gender;
    cout<<"\nEnter country:\t\t"<<country<<endl;
    cout<<"\nSelected gender:\t\t"<<gender<<endl;

    return 0;
}