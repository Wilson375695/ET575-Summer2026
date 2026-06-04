/*
Wilson Lin
June 4, 2026
Lab 9: switch-case statement
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "\n --- example 1: switch-case statement ---" << endl;
    // ask the user to select a day-off (number)
    // declare variables
    int dayoff = 0;

    // collect dayoff

    cout << "1 for Monday" << endl;
    cout << "2 for Tuesday" << endl;
    cout << "3 for Wednesday" << endl;
    cout << "4 for Thursday" << endl;
    cout << "5 for Friday" << endl;
    cout << "Select a day-off: ";
    cin >> dayoff;

    // switch-case statement
    switch (dayoff)
    {
    case 1:
        cout << "You are off Monday" << endl;
        break;
    case 2:
        cout << "You are off Tuesday" << endl;
        break;
    case 3:
        cout << "You are off Wednesday" << endl;
        break;
    case 4:
        cout << "You are off Thursday" << endl;
        break;
    case 5:
        cout << "You are off Friday" << endl;
        break;
    default:
        cout << "Wrong day-off!" << endl;
    }

    cout << "\n --- example 2: select a gender ---" << endl;
    // select gender using charater
    // declare variables
    char gender;
    string selectedgender = "";

    // collect the gender
    cout << "m of male" << endl;
    cout << "f of female" << endl;
    cout << "o of other" << endl;
    cout << "Select a gender: ";
    cin >> gender;

    // switch-case
    switch (gender)
    {
    case 'm': case 'M':
        selectedgender = "MALE";
        break;
    case 'f': case 'F':
        selectedgender = "FEMALE";
        break;
    case 'o': case 'O':
        selectedgender = "OTHER";
        break;
    default:
        selectedgender = "UNKNOWN";
        break;
    }

    // print result
    cout<<"Selected gender = "<<selectedgender<<endl;

    cout<<"\n --- Exercise ---"<<endl;
    int number;
    char answer;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"y to double the number"<<endl;
    cout<<"n to not duouble the number"<<endl;
    cout<<"double or not: ";
    cin>>answer;

    switch (answer){
        case 'y': case 'Y':
            number = number * 2;
            break;
        case 'n': case 'N':
            number = number;
            break;
        default:
            number = 0;
            break;
    }

    cout<<"The nnumber is set to "<<number<<endl;
    return 0;
}