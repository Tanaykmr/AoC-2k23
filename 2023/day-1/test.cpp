#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main() {
    string inputString;
    int count = 1;
    // Get input string from the user or any other source
    cout << "Enter a string: ";
    getline(cin, inputString);  // Use getline to allow spaces in the input

    // Define the regular expression to match "one" or "two"
    regex pattern("(one|two|three|four|five|six|seven|eight|nine|1|2|3|4|5|6|7|8|9)");

    // Use sregex_iterator to iterate through all matches
    sregex_iterator iterator(inputString.begin(), inputString.end(), pattern);
    sregex_iterator end;

    // Iterate through matches and print them
    while (iterator != end) {
        smatch match = *iterator;
        cout << count++ << endl;
        cout << "Found: " << match.str() << endl;
        ++iterator;
    }

    return 0;
}
