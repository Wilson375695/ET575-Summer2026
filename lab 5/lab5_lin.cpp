/*
Wilson Lin
June 2, 2026
Lab 5: string methods
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    cout<<"\n --- example 1: string indexing ---"<<endl;
    // character within a string is accessible by using an index number.
    // index number starts from 0 (left-most)
    // c++ don't understood negative index (-3)
    string username = "peterpan123";
    cout<<"The fourth charter of username = "<<username[3]<<endl;

    // at() method can be used to access a character in a string
    cout<<"The sixth character of username = "<<username.at(5)<<endl;

    cout<<"\n --- example 2: length of a string ---"<<endl;
    // length method shows the number of characters in a string including the whitespace
    int num_username = username.length();
    cout<<"The are "<<num_username<<" chartacters"<<endl;

    cout<<"\n --- example 3: adding string ---"<<endl;
    // strings can be concatenated or added by using the + operator
    string n = "Never";
    string m = "Again";
    cout<<n + m<<endl;

    cout<<"\n --- example 4: substracting character from a string ---"<<endl;
    // substr() method extracts character from a string
    // substr(x,y) --> x = start of extracting index, y = amount of charters to be extractes from inex x
    cout<<"Extracted word = "<<n. substr(1,4)<<endl;

    cout<<"\n --- example 5: inserting character/s into a string ---"<<endl;
    // insert() method insert characters into a string
    // insert(x,y) --> x = inserting index position, y = chartacters to be inserted
    // from example, insert the word LAND in between the username as "peterLANDpan123"
    cout<<username<<endl;
    username.insert(5,"LAND"); // automatically update the string value
    cout<<username<<endl;

    cout<<"\n --- example 6: add character/s to end of a string ---"<<endl;
    // append() method adds characters to the end of a string
    // append(x) --> x = xharacters to be added to the end of the string
    username.append("END"); // automatically update the string value. accessor method
    cout<<username<<endl;

    cout<<"\n --- example 7: replacing characters in a string ---"<<endl;
    // replace() method replaces charters in a string
    // replace(x,y,z) --> x = index where the replace starts, y = number of characters to be replaced from x, z = new characters of the replacement
    string name = "Peter Pan";
    cout<<name<<endl;
    // replace 'eter' with 'atrick'
    name.replace(1,4,"atrick"); // autoatically update to string value. accessor method
    cout<<name<<endl;

    cout<<"\n --- example 8: erasing characters from a string ---"<<endl;
    // erase() method erases characters from a string
    // erase(x,y) --> x = starting index where characters willl e removed, y = amount of characters to be removed from index x
    // rease the word 'an' from 'Patrick Pan'
    name.erase(9,2);
    cout<<name<<endl;

    cout<<"\n --- example 9: find the index of character in a string ---"<<endl;
    // find() method return the index of a found character
    // find(x) --> x = character/s to be found
    cout<<username<<endl;
    int index_r = username.find("pan");
    cout<<"Index of letter pan = "<<index_r<<endl;
    int never = username.find("NEVER");
    cout<<"Index of NEVER = "<<never<<endl;
    
    cout<<"\n --- example 10: combinate method ---"<<endl;
    // add string m in username starting 123
    cout<<username<<endl;
    cout<<m<<endl;
    // find the inedx for 123
    int index123 = username.find("123");
    // add value of string m before from index123
    username.insert(index123, m);
    cout<<username<<endl;

    cout<<"\n --- practice exam 1 ---"<<endl;
    string password = "peterpan123";
    int a = password.length(); // a = 11
    int b = a - 2; // b = 9 character of 2
    password.replace(b,3,"NONE");
    cout<<password<<endl;

    cout<<"\n --- Exercise ---"<<endl;
    string new_word;
    cout<<"Enter a word: ";
    cin>>new_word;
    cout<<"The fourth character of word = "<<new_word[3]<<endl;
    int num_new_word = new_word.length();
    cout<<"The length of the word is:"<<num_new_word<<" characters"<<endl;
    new_word.replace(1,3,"-- $ --");
    cout<<"After replacement: "<<new_word<<endl;
    new_word.erase(new_word.length()-2,2);
    cout<<"After removing two characters from the end: "<<new_word<<endl;

    return 0;
}