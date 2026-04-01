#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to reverse a string
string Reverse(string str) {
    string rev = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        rev += str[i];
    }
    return rev;
}

// Function to count vowels
int countVowels(string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words
int countWords(string str) {
    int count = 0;
    bool inWord = false;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ' && !inWord) {
            inWord = true;
            count++;
        } else if (str[i] == ' ') {
            inWord = false;
        }
    }
    return count;
}

// Function to capitalize second letter of each word
string capitalizeSecondLetter(string str) {
    bool newWord = true;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != ' ') {
            if (newWord && (i + 1 < str.length()) && str[i + 1] != ' ') {
                str[i + 1] = toupper(str[i + 1]);
            }
            newWord = false;
        } else {
            newWord = true;
        }
    }
    return str;
}

int main() {
    ifstream file("data.txt");
    string fileData;

    // Read entire line from file
    getline(file, fileData);
    file.close();

    cout << "Original Text: " << fileData << endl;

    // Vowel count
    cout << "Number of vowels: " << countVowels(fileData) << endl;

    // Word count
    cout << "Number of words: " << countWords(fileData) << endl;

    // Reverse text
    cout << "Reversed Text: " << Reverse(fileData) << endl;

    // Capitalize second letter
    cout << "Second letter capitalized: " 
         << capitalizeSecondLetter(fileData) << endl;

    return 0;
}