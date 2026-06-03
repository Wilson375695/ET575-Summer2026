#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare the string variable as required
    string new_word;

    cout << "------------------------------- EXERCISE -------------------------------" << endl;
    
    // 1. Ask the user to type a word and save it
    cout << "Type a word: ";
    cin >> new_word;

    // 2. Print the 4th character (Note: C++ uses 0-based indexing, so the 4th character is at index 3)
    if (new_word.length() >= 4) {
        cout << "The 4th character is: " << new_word[3] << endl;
    } else {
        cout << "The 4th character is: (Word is too short)" << endl;
    }

    // 3. Find and print the length of the word
    cout << "The length of the word is: " << new_word.length() << " characters." << endl;

    // 4. Replace three characters starting from the second character (index 1) with "-- $ --"
    // .replace(start_index, number_of_characters, replacement_string)
    if (new_word.length() >= 4) { 
        new_word.replace(1, 3, "-- $ --");
    }
    cout << "After replacement: " << new_word << endl;

    // 5. Remove two characters from the end of the message
    // .erase(start_index, number_of_characters)
    if (new_word.length() >= 2) {
        new_word.erase(new_word.length() - 2, 2);
    }
    cout << "After removing two characters from the end: " << new_word << endl;

    cout << "---------------------------------------------------------------------------" << endl;

    return 0;
}

/*
Ai assistant used: Gemini
Q1)Yes, the test use terminal, assignment, and character the out put is the same as lab 5.
Q2)Yes, it readable and explain thoroughly it explain why it do that.
Q3)Yes, gemini eplain the reason for that.
Q4)The code needed of the command is the same but how it is use is differect it use the "if" command the word didn't match the requirement it will not work.
Q5)------------------------------- EXERCISE -------------------------------
Type a word: terminal
The 4th character is: m
The length of the word is: 8 characters.
After replacement: t-- $ --inal
After removing two characters from the end: t-- $ --in
---------------------------------------------------------------------------
------------------------------- EXERCISE -------------------------------
Type a word: assignments
The 4th character is: i
The length of the word is: 11 characters.
After replacement: a-- $ --gnments
After removing two characters from the end: a-- $ --gnmen
---------------------------------------------------------------------------
------------------------------- EXERCISE -------------------------------
Type a word: character
The 4th character is: r
The length of the word is: 9 characters.
After replacement: c-- $ --acter
After removing two characters from the end: c-- $ --act
---------------------------------------------------------------------------
*/