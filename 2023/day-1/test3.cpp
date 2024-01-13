#include <iostream>
#include <string>
#include <regex>
#include <fstream>
using namespace std;
string findAndReplaceNumbers(const string& input) {
    regex one("one");
    regex two("two");
    regex three("three");
    regex four("four");
    regex five("five");
    regex six("six");
    regex seven("seven");
    regex eight("eight");
    regex nine("nine");

    // Add more regex patterns for other substrings as needed

    string result = regex_replace(input, one, "1");
    result = regex_replace(result, two, "2");
    result = regex_replace(result, three, "3");
    result = regex_replace(result, four, "4");
    result = regex_replace(result, five, "5");
    result = regex_replace(result, six, "6");
    result = regex_replace(result, seven, "7");
    result = regex_replace(result, eight, "8");
    result = regex_replace(result, nine, "9");
    // Use regex_replace for other patterns as well

    return result;
}

int main() {
    ifstream inputFile("data.txt"); // Replace "yourfile.txt" with your actual file name

    if (!inputFile) {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    string line;
    string modifiedContent;

    while (getline(inputFile, line)) {
        modifiedContent += findAndReplaceNumbers(line) + "\n";
    }

    inputFile.close();

    ofstream outputFile("output.txt"); // Replace "output.txt" with your desired output file name

    if (!outputFile) {
        cerr << "Error creating the output file!" << endl;
        return 1;
    }

    outputFile << modifiedContent;

    cout << "Replacement completed successfully." << endl;

    return 0;
}