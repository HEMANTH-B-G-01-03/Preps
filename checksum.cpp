//  given an array [1223 , 234 ,3445 ,456 ] we neeed to remove the max and min dig and then add all of the numbers 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int totalSum = 0;

    for (int i = 0; i < n; i++) {
        string s = arr[i];

        char minDigit = '9';
        char maxDigit = '0';

        // Find min and max digit
        for (int j = 0; j < s.length(); j++) {
            if (s[j] < minDigit) {
                minDigit = s[j];
            }
            if (s[j] > maxDigit) {
                maxDigit = s[j];
            }
        }

        string remaining = "";
        bool minRemoved = false;
        bool maxRemoved = false;

        // Remove one occurrence of min and max
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == minDigit && !minRemoved) {
                minRemoved = true;
                continue;
            }
            if (s[j] == maxDigit && !maxRemoved) {
                maxRemoved = true;
                continue;
            }
            remaining += s[j];
        }

        // Find checksum (sum of digits of remaining number)
        int checksum = 0;
        for (int j = 0; j < remaining.length(); j++) {
            checksum += remaining[j] - '0';
        }

        totalSum += checksum;
    }

    cout << totalSum << endl;

    return 0;
}