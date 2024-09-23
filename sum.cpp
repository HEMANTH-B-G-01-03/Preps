#include <iostream>
#include <climits>  // for INT_MIN
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int s;
    cout << "Enter the sum value: ";
    cin >> s;

    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sum = 0;
    int maxSum = INT_MIN;  // Initialize maxSum to minimum integer

    // Kadane's algorithm to find the maximum subarray sum
    for (int i = 0; i < n; i++) {
        sum += a[i];
        maxSum = max(maxSum, sum);

        if (sum < 0) {
            sum = 0;  // Reset sum if it goes negative
        }
    }

    

    cout << "The maximum subarray sum is: " << maxSum << endl;

    // Check for the existence of any subset that sums to s
    bool found = false;
    for (int i = 0; i < (1 << n); i++) {  // Iterate over all subsets
        int subsetSum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subsetSum += a[j];  // Include this element in the subset
            }
        }
        if (subsetSum == s) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "There exists a subset with sum " << s << "." << endl;
    } else {
        cout << "No subset with sum " << s << " was found." << endl;
    }

    return 0;
}
