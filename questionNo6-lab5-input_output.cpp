#include <fstream>
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words in our string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

// Function to reverse a string
string reverse(const string& str) {
    return string(str.rbegin(), str.rend());
}

// Function to capitalize only the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string result;
    int letterCount = 0;

    for (char c : str) {
        if (isspace(c)) {
            result += c;
            letterCount = 0;
        } else {
            letterCount++;
            if (letterCount == 2) {
                result += toupper(c);
            } else {
                result += tolower(c);
            }
        }
    }

    return result;
}

int main() {
    ofstream outFile("AdvancedComputerProgramming.txt");
    if (!outFile.is_open()) {
        cerr << "Error: Unable to create file!" << endl;
        return 1;
    }
    outFile << "This is the Advanced Computer Programming Module." << endl;
    outFile.close();

    ifstream inFile("AdvancedComputerProgramming.txt");
    if (!inFile.is_open()) {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }

    string fileData;
    getline(inFile, fileData);
    inFile.close();

    int numVowels = countVowels(fileData);
    cout << "Number of vowels: " << numVowels << endl;

    int numWords = countWords(fileData);
    cout << "Number of words: " << numWords << endl;

    cout << "Reversed statement: " << reverse(fileData) << endl;

    cout << "Statement with second letters capitalized: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}