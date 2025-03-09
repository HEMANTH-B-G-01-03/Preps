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
                arr.push_back(nums[i]);
                arr.push_back(nums[j]);
            }
        
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
