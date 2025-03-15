#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int ans(int speed[], int n, int mincomp, int threshold) {  // Fixed function signature
    int i = 0;
    int count_network = 0;

    while (i < n) {
        int sum = 0;
        int num_comp = 0;
        bool isvalid = false;
           
        for (int j = i; j < n; j++) {
            sum += speed[j];
            num_comp++;

            if (num_comp >= mincomp && sum > threshold) {  // Fixed condition (mincomp check)
                count_network++;
                isvalid = true;
                i = j + 1;
                break;
            }
        }

        if (!isvalid) {
            i++;
        }
    }

    return count_network;
}

int main() {
    int n = 6;
    int speed[] = {5, 7, 9, 12, 10, 13};
    int mincomp = 2;
    int threshold = 15;

    int result = ans(speed, n, mincomp, threshold);
    cout << result << endl;
    return 0;
}
