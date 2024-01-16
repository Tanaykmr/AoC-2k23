#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    // string text = "hellofriends";
    // int index = text.find("abc");
    // if (index == string::npos)
    // {
    //     cout << "not found" << endl;
    // }
    string text = "2khk3h4kbds6f3h4k";
    int index = text.find("6");
    // if (index == string::npos)
    // {
    //     cout << "not found" << endl;
    // }
    // else
    // {
    //     cout << index << endl;
    // }
    if (index != string::npos)
    {
        cout << index << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    cout << "hey" << endl;
    cout << "\they" << endl;
}