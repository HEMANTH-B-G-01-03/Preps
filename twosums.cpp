#include <iostream>
#include <vector>
using namespace std;

int main() {
   
    vector<int>nums={2,7,11,15};
    int t=9;
    vector<int>arr;
    for(int i=0;i<nums.size()-1;i++){
        for (int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==t){
                return { i, j};
            }
        
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}




#include <iostream>
#include <vector>
using namespace std;

// Function to find indices of two numbers that add up to 't'
vector<int> twoSum(vector<int>& nums, int t) {
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == t) {
                return {i, j}; // ✅ Correct way to return indices
            }
        }
    }
    return {}; // Return an empty vector if no pair is found
}




// the bellow code is using the sets 

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int t = 9;
    
    vector<int> result = twoSum(nums, t); // Call the function

    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl; // Output the indices
    } else {
        cout << "No valid pair found." << endl;
    }

    return 0;
}

