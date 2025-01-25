#include <bits/stdc++.h>
using namespace std;

int main() {
    /***********  Binary Search  **************/
   
    // int lo = 0;
    // int hi = nums.size() - 1;
    // while(lo<=hi){
    //     int mid = lo + (hi-lo)/2;
    //     if(nums[mid]==target) return mid;
    //     else if(nums[mid]>target) hi = mid - 1;
    //     else lo = mid +1;

    // }
   
  // what if the questions contain multiple same numbers ?

  // lower bound and upper finding

  //linear searching to solve the problem 
//   vector<int> arr = {1,2,4,5,9,15,18,21,24};
//   int x = 20;
//    for(int i=0; i<arr.size(); i++) {
//     if(arr[i] > x) {
//             cout << arr[i-1] << " ";
//             break;
//     }
//   } //time complexity O(n)


  //using binary search

  //This is mine approach
//   vector<int> arr = {1,2,4,5,9,15,18,21,24};
//   int x = 20;
//   int low = 0;
//   int high = arr.size() - 1;
//    while(low <=high ) {
//     int mid = low + (high-low)/2;
//     if(arr[mid] < x){
//        low = mid + 1;

//     } else {
//         high = mid + 1 ;
//     }
//      if(arr[low]  >  arr[mid]  && arr[low] > x && arr[mid] < x) {
//             cout<<arr[mid]<<" this is lower bound"<<endl;
//             cout<<arr[low]<<" this is upper bound";
//     }
   
//   } //time complexity O(logn)
 

 //Better one

  vector<int> arr = {1,2,4,5,9,15,18,21,24};
  int x = 20;
  int low = 0;
  int high = arr.size() - 1;
  bool flag = false;
  while(low <= high){
    int mid = low + (high-low)/2;
    if(arr[mid] == x){
        flag = true;
        cout<<arr[mid-1]<<"  This is lower Bound"<<endl;
        cout<<arr[mid+1]<<"  This is upper  Bound";
        break;
    }
    else if(arr[mid] < x) low = mid + 1;
    else high = mid -1;
  }
  
  if(flag==false) {
    cout<<arr[high]<<"  This is lower Bound"<<endl;
    cout<<arr[low]<<"   This is Upper Bound";
  }


    return 0;
}
