#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Input array
    vector<int> arr = {4, 6, 5, 10};

    int n = arr.size();
    int count = 0;

    cout << "Combinations of 3 elements are:" << endl;

    // Generate all combinations of 3 elements
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                count++;
            }
        }
    }

    // Display the total number of combinations
    cout << "Total number of ways to choose 3 elements: " << count << endl;

    return 0;
}
