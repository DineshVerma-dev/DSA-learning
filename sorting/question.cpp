#include <bits/stdc++.h>
using namespace std;

// int majorityElement(vector<int>& nums) {
//     int n = nums.size();
//     for(int i=0; i<n; i++){
//         int count = 1;
//         for(int j=i+1; j<n; j++){
//             if(nums[i] == nums[j]) count++;
//         }
//         if(count > (n/2) ) return nums[i];
//     }
//     return -1;
// }   -------------------------> n2 time complexity

//  int majorityElement(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int n = nums.size();
//         return nums[n/2];
//     } --------------------------> nlogn time complexity

// int main() {
//     vector<int> nums = {2, 2, 1, 1, 1, 2, 2}; // Example input
//     cout << "Majority Element: " << majorityElement(nums) << endl;
//     return 0;
// }


// questions 19 12 23 8 16 array of element maintaing the order of arr give 3 2 5 0 1

int main (){

    // int arr[] = {19,12,23,8,16};
    // int n = 5;
    // vector <int> v(n,0);
    // int x  = 0 ;
    // for(int i=0; i<n; i++){
    //     int min = INT_MAX;
    //     int mindx = -1;
    //     for(int j=0; j<n ; j++){
    //         if(v[j]==1) continue;
    //         else {
    //             if (min>arr[j]){
    //                 min = arr[j];
    //                 mindx = j;
    //             }
    //         }
    //     }
    //     arr[mindx] = x ;
    //     v[mindx] = 1 ; //visited
    //     x++;
    // }

    // for(int i=0; i<n ;i++){
    //     cout<<arr[i]<<" ";
    // }
 ///////////////////////////wthout using extra space
    int arr[] = {19,12,23,8,16};
    int n = 5;
    
    int x  = 0 ;
    for(int i=0; i<n; i++){
        int min = INT_MAX;
        int mindx = -1;
        for(int j=0; j<n ; j++){
            if(arr[j]<=0) continue;
            else {
                if (min>arr[j]){
                    min = arr[j];
                    mindx = j;
                }
            }
        }
        arr[mindx] = -x ;
        x++;
    }

    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
