// need to understand the custom comparator properly
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <limits.h>
using namespace std;
vector<pair<int, int>> occurences;

// findFirst returns a pair<int index, int number-located-there>;
int findFirstDigit(string currentLine)
{
    occurences.clear();
    cout << "currentLine.length(): " << currentLine.length() << endl;
    int indexToTrack = currentLine.length() + 1;

    // 1
    string toFind = "one";
    int index = currentLine.find(toFind);
    cout << "\tfound, index of one: " << index << endl;
    if (index == string::npos)
    {
        cout << toFind + " is not here" << endl;
    }
    else // multiple occurences are there
    {

        while (index != string::npos && index < indexToTrack - 3)
        {
            cout << "   \t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 1));
            index = currentLine.find(toFind, index + 3); // "one" can only occur 3 indexes after "index"
        }
    }
    // 2
    toFind = "two";
    index = currentLine.find(toFind);
    cout << "\tfound, index of two: " << index << endl;
    if (index == string::npos)
    {
        cout << "two is not here" << std::endl;
    }
    else
    {
        while (index != string::npos && index < indexToTrack - 3)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 2));
            index = currentLine.find(toFind, index + 3);
        }
    }
    // 3
    toFind = "three";
    index = currentLine.find(toFind);
    cout << "\tfound, index of three: " << index << endl;
    if (index == string::npos)
    {
        cout << "three is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 5)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 3));
            index = currentLine.find(toFind, index + 5);
        }
    }
    // 4
    toFind = "four";
    index = currentLine.find(toFind);
    cout << "\tfound, index of four: " << index << endl;
    if (index == string::npos)
    {
        cout << "four is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 4)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 4));
            index = currentLine.find(toFind, index + 4);
        }
    }
    // 5
    toFind = "five";
    index = currentLine.find(toFind);
    cout << "\tfound, index of five: " << index << endl;
    if (index == string::npos)
    {
        cout << "five is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 4)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 5));
            index = currentLine.find(toFind, index + 4);
        }
    }
    // 6
    toFind = "six";
    index = currentLine.find(toFind);
    cout << "\tfound, index of six: " << index << endl;
    if (index == string::npos)
    {
        cout << "six is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 3)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 6));
            index = currentLine.find(toFind, index + 3);
        }
    }
    // 7
    toFind = "seven";
    index = currentLine.find(toFind);
    cout << "\tfound, index of seven: " << index << endl;
    if (index == string::npos)
    {
        cout << "seven is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 5)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 7));
            index = currentLine.find(toFind, index + 5);
        }
    }
    // 8
    toFind = "eight";
    index = currentLine.find(toFind);
    cout << "\tfound, index of eight: " << index << endl;
    if (index == string::npos)
    {
        cout << "eight is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 5)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 8));
            index = currentLine.find(toFind, index + 5);
        }
    }
    // 9
    toFind = "nine";
    index = currentLine.find(toFind);
    cout << "\tfound, index of nine: " << index << endl;
    if (index == string::npos)
    {
        cout << "nine is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 4)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 9));
            index = currentLine.find(toFind, index + 4);
        }
    }
    // nums 0-9:

    // 1

    toFind = "1";
    index = currentLine.find(toFind);
    cout << "\tfound, index of 1: " << index << endl;
    if (index == string::npos)
    {
        cout << "1 is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 1)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 1));
            index = currentLine.find(toFind, index + 1);
        }
    }
    // 2
    toFind = "2";
    index = currentLine.find(toFind);
    cout << "\tfound, index of 2: " << index << endl;
    if (index == string::npos)
    {
        cout << "\t\tindexbeinginspected: " << index << endl;
        cout << "2 is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 1)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 2));
            index = currentLine.find(toFind, index + 1);
        }
    }
    // 3

    toFind = "3";
    index = currentLine.find(toFind);
    cout << "\tfound, index of 3: " << index << endl;
    if (index == string::npos)
    {
        cout << "3 is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 1)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 3));
            index = currentLine.find(toFind, index + 1);
        }
    }
    // 4
    toFind = "4";
    index = currentLine.find(toFind);
    cout << "\tfound, index of 4: " << index << endl;
    if (index == string::npos)
    {
        cout << "4 is not here" << std::endl;
    }
    else
    {
        while (index != string::npos && index < indexToTrack - 1)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 4));
            index = currentLine.find(toFind, index + 1);
        }
    }
    // 5
    toFind = "5";
    index = currentLine.find(toFind);
    cout << "\tfound, index of 5: " << index << endl;
    if (index == string::npos)
    {
        cout << "5 is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 1)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 5));
            index = currentLine.find(toFind, index + 1);
        }
    }
    // 6
    toFind = "6";
    index = currentLine.find(toFind);
    cout << "\tfound, index of 6: " << index << endl;
    if (index == string::npos)
    {
        cout << "6 is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 1)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 6));
            index = currentLine.find(toFind, index + 1);
        }
    }
    // 7
    toFind = "7";
    index = currentLine.find(toFind);
    cout << "\tfound, index of 7: " << index << endl;
    if (index == string::npos)
    {
        cout << "7 is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 1)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 7));
            index = currentLine.find(toFind, index + 1);
        }
    }
    // 8
    toFind = "8";
    index = currentLine.find(toFind);
    cout << "\tfound, index of 8: " << index << endl;
    if (index == string::npos)
    {
        cout << "8 is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 1)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 8));
            index = currentLine.find(toFind, index + 1);
        }
    }
    // 9
    toFind = "9";
    index = currentLine.find(toFind);
    cout << "\tfound, index of 9: " << index << endl;
    if (index == string::npos)
    {
        cout << "9 is not here" << std::endl;
    }
    else
    {

        while (index != string::npos && index < indexToTrack - 1)
        {
            cout << "\t\tindexbeinginspected: " << index << endl;
            occurences.push_back(make_pair(index, 9));
            index = currentLine.find(toFind, index + 1);
        }
    }
    for (int i = 0; i < occurences.size(); i++)
    {
        cout << "occurences[" << i << "]: "
             << "<" << occurences[i].first << ", " << occurences[i].second << ">" << endl;
    }
    auto firstNumber = min_element(occurences.begin(), occurences.end(),
                                   [](const pair<int, int> &lhs, const pair<int, int> &rhs)
                                   {
                                       return lhs.first < rhs.first;
                                   }); // finds the pair with the min pair.first(pair.first is the index);
    return (firstNumber->second);      // returns the number located at the index
}

int findSecondDigit()
{
    auto secondNumber = max_element(occurences.begin(), occurences.end(),
                                    [](const pair<int, int> &lhs, const pair<int, int> &rhs)
                                    { return lhs.first < rhs.first; }); // finds the pair with the max pair.first(pair.first is the index);
    return (secondNumber->second);                                      // returns the number located at the index
}

int main()
{
    fstream inputFile("data-copy.txt");

    string currentLine;
    int totalCount = 0, lineCount = 0, count = 0;

    if (inputFile.is_open())
    {
        while (getline(inputFile, currentLine))
        {
            cout << "traversing line: " << count << endl;
            lineCount = 0;
            int firstDigit = findFirstDigit(currentLine);
            int secondDigit = findSecondDigit();
            cout << "firstDigit: " << firstDigit << endl;
            cout << "secondDigit: " << secondDigit << endl;
            lineCount = (10 * firstDigit) + secondDigit;
            cout << "lineCount: " << lineCount << endl;
            totalCount += lineCount;
            cout << "totalCount: " << totalCount << endl;
            count++;
        }
    }
    else
    {
        cerr << "Error opening the file." << endl;
        return 1; // Return an error code
    }

    inputFile.close();
    cout << "ANSWER IS: " << totalCount << endl;

    return 0; // Indicate successful execution
}