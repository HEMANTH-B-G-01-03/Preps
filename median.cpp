// // Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// // The overall run time complexity should be O(log (m+n)).

 

// // Example 1:

// // Input: nums1 = [1,3], nums2 = [2]
// // Output: 2.00000
// // Explanation: merged array = [1,2,3] and median is 2.
// // Example 2:

// // Input: nums1 = [1,2], nums2 = [3,4]
// // Output: 2.50000
// // Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.

// # include<iostream>
// #include<vector>
// #include<math.h>
// int main(){
//     #include<algorithm>
// #include<vector>
// #include<cmath>

// int main() {

        
//         vector<int>a=nums1;
//         a.insert(a.end(),nums2.begin(),nums2.end());
        
//         sort(a.begin(),a.end());

//         int n=a.size();
//         if(n%2==0){
//             return ( (a[(n/2)-1]+a[n/2]) /2.0);
//         }
//         else{
//             return (a[n/2]);
//         }

        

       
//     }
// };

// }
 