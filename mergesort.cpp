// #include <iostream>
// #include <string>
// #include<vector>
// using namespace std;
// #include<algorithm>


// void merge(vector<int> &arr , int start, int mid ,int end ){
// vector<int> temp ; // this is a temp variable to store the merged array 
// int i = start , j= mid+1;
// while (i<= mid && j<=end)
// {
 
//     if(arr[i]<= arr[j])
//     {

    
//     temp.push_back(arr[i]);
//     i++;
//     }
//     else {
//         temp.push_back(arr[j]);
//         j++;
//     }


// }

// while(i<=mid) {
//     temp.push_back(arr[i]);
// }
// while( j<= end) {
//     temp.push_back(arr[j]);
//     j++;
// }

// for(int index=0;index < temp.size();index++) {
//     arr[index+start] = temp[index];
// }
// }

// void mergesort(vector<int> &arr , int start , int end) {

//     if(start < end) {
// int mid = start + (end-start)/2;

// mergesort(arr, start , mid); // left part 
// mergesort(arr, mid+1 , end); // right part 

// merge(arr, start , mid , end );
//     }
// }
//  int main (){
// vector <int> arr = { 12 ,31 ,35 , 8 ,32 ,17 };

// mergesort(arr, 0 , arr.size()-1);

// for( int val : arr) {
//     cout<<val<<" ";
// }

//     return 0;
//  }
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &arr , int start, int mid ,int end ){
    vector<int> temp;
    int i = start , j= mid+1;

    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for (int index = 0; index < temp.size(); index++) {
        arr[index + start] = temp[index];
    }
}

void mergesort(vector<int> &arr , int start , int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        mergesort(arr, start , mid);     // left part
        mergesort(arr, mid + 1 , end);   // right part
        merge(arr, start , mid , end);
    }
}

int main() {
    vector<int> arr = {12, 31, 35, 8, 32, 17};

    mergesort(arr, 0 , arr.size() - 1);

    for (int val : arr) {
        cout << val << " ";
    }

    return 0;
}
