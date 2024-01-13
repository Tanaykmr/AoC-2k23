#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;
int main()
{
    ifstream inputFile("data.txt");

    string currentLine;
    int currentCount = 0, count = 1;

    if (inputFile.is_open())
    {
        while (getline(inputFile, currentLine))
        {
            cout << "Traversing line " << count << endl;
            cout << "Current line is: " << currentLine << endl;

            int firstDigit = 0, secondDigit = 0, digitCount = 1;

            for (char currentChar : currentLine)
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
            cout << "lineCount: " <<((digitCount != 2) ? (10 * firstDigit + secondDigit) : (11*firstDigit)) << endl;
            currentCount += (digitCount != 2) ? (10 * firstDigit + secondDigit) : (11*firstDigit);
            cout << "currentCount: " << currentCount << endl;
            count++;
        }
    }
    else
    {
        cerr << "Error opening the file." << endl;
        return 1; // Return an error code
    }

    inputFile.close();
    cout << "ANSWER IS: " << currentCount << endl;

    return 0; // Indicate successful execution
}
