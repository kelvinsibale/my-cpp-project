#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Function to reverse a string
std::string Reverse(const std::string &str)
{
    std::string reversedStr = str;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

// Function to capitalize the second letter of each word
std::string capitalizeSecondLetter(std::string str) {
    bool capitalize = false;
    for (char& ch : str) {
        if (capitalize && ch != ' ') {
            ch = toupper(ch);
            capitalize = false;
        } else if (ch == ' ') {
            capitalize = true;
        }
    }
    return str;
}

int main() {
    // Open the text file
    std::ifstream file("textfile.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1;
    }

    // Read the file contents into a string
    std::string fileData;
    std::getline(file, fileData);
    file.close();

    // Output the file contents
    std::cout << "File Contents: " << fileData << std::endl;

    // Count the number of vowels
    int vowelCount = 0;
    for (char ch : fileData) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
            vowelCount++;
        }
    }
    std::cout << "Number of vowels: " << vowelCount << std::endl;

    // Count the number of words
    int wordCount = 0;
    bool inWord = false;
    for (char ch : fileData) {
        if (ch != ' ' && !inWord) {
            wordCount++;
            inWord = true;
        } else if (ch == ' ') {
            inWord = false;
        }
    }
    std::cout << "Number of words: " << wordCount << std::endl;

    // Reverse the string
    std::string reversedStr = Reverse(fileData);
    std::cout << "Reversed Statement: " << reversedStr << std::endl;

    // Capitalize the second letter of each word
    std::string capitalizedStr = capitalizeSecondLetter(fileData);
    std::cout << "Capitalized Statement: " << capitalizedStr << std::endl;

    return 0;
}