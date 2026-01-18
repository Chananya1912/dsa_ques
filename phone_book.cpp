#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int MAX_SIZE = 10000000;
vector<string> phone_book(MAX_SIZE);

int main() {
    int n;
    cin >> n;
    string command;
    int number;
    string name;

    for (int i = 0; i < n; ++i) {
        cin >> command;
        if (command == "add") {
            cin >> number >> name;
            phone_book[number] = name;
        } else if (command == "del") {
            cin >> number;
            phone_book[number] = "";
        } else if (command == "find") {
            cin >> number;
            if (phone_book[number] == "") {
                cout << "not found" << endl;
            } else {
                cout << phone_book[number] << endl;
            }
        }
    }

    return 0;
}
