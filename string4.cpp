#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin, str); // correct usage of getline

    string rev = str;              // copy original string
    reverse(rev.begin(), rev.end()); // reverse the copy

    if (str == rev)
        cout << "palindrome";
    else
        cout << "not";

    return 0;
}
