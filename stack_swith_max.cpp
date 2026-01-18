#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> data_stack;
    stack<int> max_stack;

    for (int i = 0; i < n; ++i) {
        string command;
        cin >> command;
        if (command == "push") {
            int value;
            cin >> value;
            data_stack.push(value);
            if (max_stack.empty() || value >= max_stack.top()) {
                max_stack.push(value);
            }
        } else if (command == "pop") {
            if (!data_stack.empty()) {
                if (data_stack.top() == max_stack.top()) {
                    max_stack.pop();
                }
                data_stack.pop();
            }
        } else if (command == "max") {
            cout << max_stack.top() << endl;
        }
    }

    return 0;
}
