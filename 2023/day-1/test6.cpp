// go through this to understand the custom comparators---> https://chat.openai.com/share/f071dc0f-2ba5-486c-8c2c-ff2ae6ac544a

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
// ctrl+opt+k
int main()
{
    vector<pair<int, int> > pairs;
    pairs.push_back(make_pair(3, 10));
    pairs.push_back(make_pair(1, 5));
    pairs.push_back(make_pair(2, 8));
    pairs.push_back(make_pair(4, 15));


    // Using min_element with a custom comparator
    auto minElement = min_element(pairs.begin(), pairs.end(),
                                  [](const pair<int, int> &lhs, const pair<int, int> &rhs)
                                  {
                                      return lhs.first < rhs.first;
                                  }); // finds min pair.first
    cout << "typeof(minElement): " << typeid(minElement).name() << endl;
    // auto minElement = min_element(pairs.begin(), pairs.end(),
    //                               [](const pair<int, int> &lhs, const pair<int, int> &rhs)
    //                               {
    //                                   return lhs.first > rhs.first;
    //                               }); // finds max pair.first

    // auto minElement = max_element(pairs.begin(), pairs.end(),
    //                               [](const pair<int, int> &lhs, const pair<int, int> &rhs)
    //                               {
    //                                   return lhs.first < rhs.first;
    //                               }); // finds max pair.first

    // auto minElement = max_element(pairs.begin(), pairs.end(),
    //                               [](const pair<int, int> &lhs, const pair<int, int> &rhs)
    //                               {
    //                                   return lhs.first > rhs.first;
    //                               }); // finds min pair.first


    if (minElement != pairs.end())
    {
        cout << "Minimum pair.first: " << minElement->first << endl;
        cout << "Minimum pair.second: " << minElement->second << endl;
    }
    else
    {
        cout << "Vector is empty." << endl;
    }

    return 0;
}
