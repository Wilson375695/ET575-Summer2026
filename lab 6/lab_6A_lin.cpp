/*
Your Name
Lab Assignment: String Methods
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "------------------------------- EXERCISE -------------------------------" << endl;

    string new_word;

    cout << "Type a word: ";
    cin >> new_word;

    // Print the 4th character
    cout << "The 4th character is: " << new_word[3] << endl;

    // Print the length
    cout << "The length of the word is: " << new_word.length()
         << " characters." << endl;

    // Replace 3 characters starting from the 2nd character
    new_word.replace(1, 3, "-- $ --");
    cout << "After replacement: " << new_word << endl;

    // Remove 2 characters from the end
    new_word.erase(new_word.length() - 2, 2);
    cout << "After removing two characters from the end: "
         << new_word << endl;

    cout << "-----------------------------------------------------------------------" << endl;

    return 0;
}

/*
Ai assistant used: ChatGPT
Q1)Yes, the test use terminal, assignment, and character the out put is the same as lab 5.
Q2)Yes, it's readable and simple that show what is nedded to do.
Q3)Yes, for remove 2 character character it use length and subtract 2 and remove 2.
Q4)some are similer in print 4th character, print length of the word and replace 3 character from second character are the same concepts were used in class.
The differect use is in erase in class we use erase a fix point and chatGPT use length to erase the last 2 character.
Q5)------------------------------- EXERCISE -------------------------------
Type a word: character
The 4th character is: r
The length of the word is: 9 characters.
After replacement: c-- $ --acter
After removing two characters from the end: c-- $ --act
-----------------------------------------------------------------------
--------
Type a word: assignments
The 4th character is: i
The length of the word is: 11 characters.
After replacement: a-- $ --gnments
After removing two characters from the end: a-- $ --gnmen
-----------------------------------------------------------------------
------------------------------- EXERCISE -------------------------------
Type a word: terminal
The 4th character is: m
The length of the word is: 8 characters.
After replacement: t-- $ --inal
After removing two characters from the end: t-- $ --in
-----------------------------------------------------------------------
*/