#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

// 🔹 Function to perform rank replacement
void replaceWithRanks(int* a, int n) {
    vector<int> temp(a, a + n); // copy array into vector for sorting

    sort(temp.begin(), temp.end());

    unordered_map<int, int> rankMap;
    int rank = 1;

    for (int i = 0; i < n; i++) {
        if (rankMap.find(temp[i]) == rankMap.end()) {
            rankMap[temp[i]] = rank++;
        }
    }

    // Replace original values with ranks
    for (int i = 0; i < n; i++) {
        a[i] = rankMap[a[i]];
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    // 🔹 Dynamic array allocation
    int* a = new int[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 🔹 Call function to replace values with ranks
    replaceWithRanks(a, n);

    // 🔹 Output
    cout << "Ranked array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    delete[] a; // Free memory
    return 0;
}
