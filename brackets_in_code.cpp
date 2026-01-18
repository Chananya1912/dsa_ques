#include <iostream>
#include <stack>
#include <string>

using namespace std;

struct Bracket {
    Bracket(char type, int position)
        : type(type), position(position) {}
    char type;
    int position;
};

bool AreMatching(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '[' && closing == ']') ||
           (opening == '{' && closing == '}');
}

int main() {
    string text;
    getline(cin, text);

    stack<Bracket> opening_brackets_stack;
    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{') {
            opening_brackets_stack.push(Bracket(next, position + 1));
        }

        if (next == ')' || next == ']' || next == '}') {
            if (opening_brackets_stack.empty()) {
                cout << position + 1 << endl;
                return 0;
            }

            Bracket top = opening_brackets_stack.top();
            if (!AreMatching(top.type, next)) {
                cout << position + 1 << endl;
                return 0;
            }
            opening_brackets_stack.pop();
        }
    }

    if (!opening_brackets_stack.empty()) {
        cout << opening_brackets_stack.top().position << endl;
    } else {
        cout << "Success" << endl;
    }

    return 0;
}
