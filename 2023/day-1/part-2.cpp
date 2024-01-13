#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

string findAndReplaceNumbers(const string &input)
{
    regex one("one");
    regex eight("eight");
    regex two("two");
    regex three("three");
    regex four("four");
    regex five("five");
    regex six("six");
    regex seven("seven");
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

int main()
{
    ifstream inputfile1("data.txt"); // Replace "yourfile.txt" with your actual file name
    if (!inputfile1)
    {
        cerr << "Error opening the file!" << endl;
        return 1;
    }

    string currentLine;
    string modifiedContent;

    while (getline(inputfile1, currentLine))
    {
        cout << "currentLine: " << currentLine << endl;
        modifiedContent += findAndReplaceNumbers(currentLine) + "\n";
        cout << "modifiedContent " << modifiedContent << endl;
    }

    inputfile1.close();

    ofstream outputFile("output.txt"); // Replace "output.txt" with your desired output file name

    if (!outputFile)
    {
        cerr << "Error creating the output file!" << endl;
        return 1;
    }

    outputFile << modifiedContent;

    cout << "Replacement completed successfully." << endl;
    // cout << "Current line is: " << currentLine << endl;
    // currentLine.clear();
    // cout << "Current line is: " << currentLine << endl;
    cout << "starting calculation" << endl;

    ifstream inputfile2("output.txt");
    string currentLine2;
    int count = 1, currentCount = 0;
    if (!inputfile2)
    {
        cerr << "Error opening the file 2!" << endl;
        return 1;
    }

    while (getline(inputfile2, currentLine2))
    {
        cout << "hello from inside the while loop" << endl;
        cout << "Traversing line: " << count << endl;
        cout << "Current line is: " << currentLine2 << endl;

        int firstDigit = 0, secondDigit = 0, digitCount = 1;
        // we find the first and second digit
        if (inputfile2.is_open())
        {
            for (char currentChar : currentLine2)
            {
                cout << "Analyzing character: " << currentChar << endl;
                if (currentChar >= '0' && currentChar <= '9')
                {
                    if (digitCount == 1)
                    {
                        firstDigit = currentChar - '0';
                        digitCount++;
                    }
                    else
                    {
                        secondDigit = currentChar - '0';
                        digitCount++;
                    }
                }
            }
            cout << "firstDigit= " << firstDigit << " secondDigit= " << secondDigit << endl;
            cout << "digitCount: " << digitCount << endl;
            cout << "lineCount: " << ((digitCount != 2) ? (10 * firstDigit + secondDigit) : (11 * firstDigit)) << endl;
            currentCount += (digitCount != 2) ? (10 * firstDigit + secondDigit) : (11 * firstDigit);
            cout << "currentCount: " << currentCount << endl;
            count++;
        }
    }

    inputfile2.close();

    cout << "ANSWER IS: " << currentCount << endl;
    return 0;
}