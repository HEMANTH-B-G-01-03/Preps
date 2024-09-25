#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
     vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> p(numRows);
        if(numRows == 0)
            return {};

        p[0] = {1};
        
        if(numRows == 1)
            return p;

        for(int i = 1; i < numRows; i++) {
            p[i].resize(i + 1);  // here resizing is done because each row is having i+1 number of elemts 

            p[i][0] = p[i][i] = 1;
            for(int j = 1; j < i; j++) {
                p[i][j] = p[i-1][j-1] + p[i-1][j];
            }
        }
        return p;
     }
};

int main(){
    Solution sol;
    int numRows;

    // Get input from the user
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    // Generate Pascal's Triangle
    vector<vector<int>> result = sol.generate(numRows);

    // Print the generated Pascal's Triangle
    cout << "Pascal's Triangle:\n";
    for(const auto& row : result) {
        for(int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
