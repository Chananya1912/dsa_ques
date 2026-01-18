#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], sorted = 1;

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Check if the array is already sorted
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }

    // Perform Bubble Sort to find min and max
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Smallest element: " << arr[0] << endl;
    cout << "Largest element: " << arr[n - 1] << endl;

    if(sorted)
        cout << "Array was already sorted.\n";
    else
        cout << "Array was not sorted.\n";

    return 0;
}
