// // prisoner escape problem  

// risoners are standing on a Cartesian coordinate system within a jail. Each prisoner stands at a unique point with integer coordinates (x, y).  Every prisoner should be at a position that forms a rectangle or square with exactly three other prisoners.

// More formally, for every prisoner at coordinates (x, y), the following must hold:

// There must be at least one prisoner standing at integer coordinates (x, y') where y' ≠ y.
// There must be at least one prisoner standing at integer coordinates (x', y) where x' ≠ x.
// Unfortunately, one prisoner has escaped. Find the coordinates of that prisoner.

// Example:

// Input:

// locations = [[1, 1], [1, 2], [2, 1], [4, 4], [4, 6], [9, 4], [9, 6]]

// Output:

// (2, 2)

// Explanation of the Correction:

// "Exactly" three other prisoners: I added "exactly" to clarify that each prisoner should form a rectangle or square with only three other prisoners, not just "at least" three.
// "y' ≠ y" and "x' ≠ x": This clarifies that the other points must have different y-coordinates (for the same x) or different x-coordinates (for the same y) to form a rectangle or square.
// Input/Output Format: I explicitly stated the input as "locations" and the output as coordinates, making the question clearer.




#include <iostream>
#include <vector>
#include <map>

using namespace std;

pair<int, int> findEscapedPrisoner(vector<pair<int, int>> locations) {
    map<int, int> xCounts;
    map<int, int> yCounts;

    for (const auto& loc : locations) {
        xCounts[loc.first]++;
        yCounts[loc.second]++;
    }

    int escapedX = 0;
    int escapedY = 0;

    for (const auto& count : xCounts) {
        if (count.second % 2 != 0) {
            escapedX = count.first;
            break;
        }
    }

    for (const auto& count : yCounts) {
        if (count.second % 2 != 0) {
            escapedY = count.first;
            break;
        }
    }

    return {escapedX, escapedY};
}

int main() {
    vector<pair<int, int>> locations = {
        {1, 1}, {1, 2}, {2, 1}, {4, 4}, {4, 6}, {9, 4}, {9, 6}
    };

    pair<int, int> escaped = findEscapedPrisoner(locations);

    cout << "The escaped prisoner is at coordinates: (" << escaped.first << ", " << escaped.second << ")" << endl;

    return 0;
}