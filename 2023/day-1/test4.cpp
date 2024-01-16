#include <iostream>
using namespace std;
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
};
int main() {
    string ans;
    cout << "Enter a string: ";
    cin >> ans;
    for (int i = 0; i <= ans.length()/2; i++)
    {
        swap(ans[i], ans[ans.length() - i - 1]);
    }
    cout << "Reversed string: " << ans << endl;

}