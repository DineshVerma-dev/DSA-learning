#include <bits/stdc++.h>
using namespace std;





int main() {
    /***********  Binary Search  **************/
   
    int lo = 0;
    int hi = nums.size() - 1;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) hi = mid - 1;
        else lo = mid +1;

    }
   
  what if the questions contain multiple same numbers ?

  ************lower bound and upper finding**************** */ 

  linear searching to solve the problem 
  vector<int> arr = {1,2,4,5,9,15,18,21,24};
  int x = 20;
   for(int i=0; i<arr.size(); i++) {
    if(arr[i] > x) {
            cout << arr[i-1] << " ";
            break;
    }
  } //time complexity O(n)


  using binary search

  This is mine approach
  vector<int> arr = {1,2,4,5,9,15,18,21,24};
  int x = 20;
  int low = 0;
  int high = arr.size() - 1;
   while(low <=high ) {
    int mid = low + (high-low)/2;
    if(arr[mid] < x){
       low = mid + 1;

    } else {
        high = mid + 1 ;
    }
     if(arr[low]  >  arr[mid]  && arr[low] > x && arr[mid] < x) {
            cout<<arr[mid]<<" this is lower bound"<<endl;
            cout<<arr[low]<<" this is upper bound";
    }
   
  } //time complexity O(logn)
 

 Better one

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

 ****************given an array find the first Ocurrences of the given x : ****************************/

 This is mine Approach
  vector <int> nums = {1,2,2,3,3,3,3,3,4,4,5,8,9};
  int x = 4;
  int lo = 0;
  int hi = nums.size() - 1;
  while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(nums[mid]==x){ 
        while(nums[mid]==nums[mid-1]){         
              mid--;
        }
      cout<<mid<<endl;
      break;
        
    } else if(nums[mid] < x) lo = mid +1;
    else hi = mid -1;
   
  }

//This is better 
  vector <int> nums = {1,2,2,3,3,3,3,3,4,4,5,8,9};
  int x = 4;
  int lo = 0;
  int hi = nums.size() - 1;
  bool flag = false;
  while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(nums[mid]==x){ 
        if(nums[mid-1]!=x){
            flag = true;
            cout<<mid<<" ";
            break;
        } else {
            hi = mid - 1;
        }
        
    } else if(nums[mid] < x) lo = mid +1;
    else hi = mid -1;
  }
if(flag==false) cout<<-1;

 //**********last Ocuurence of the given number **************// */
vector <int> nums = {1,2,2,3,3,3,3,3,4,4,5,8,9};
  int x = 4;
  int lo = 0;
  int hi = nums.size() - 1;
  bool flag = false;
  while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(nums[mid]==x){ 
        if(nums[mid+1]!=x){
            flag = true;
            cout<<mid<<" ";
            break;
        } else {
            lo = mid + 1;
        }
        
    } else if(nums[mid] < x) lo = mid +1;
    else hi = mid -1;
  }
if(flag==false) cout<<-1;
 ///////********leetcode 34 problem number ***********///////// */


 ///////********leetcode 35 problem number ***********///////// */


 
/****************find the smallest missing element in sorted array************* */
  
    /*using linear search*/

vector<int> arr = {0,1,2,3,4,8,9,10};
for(int i = 0; i < arr.size(); i++) {
    if(arr[i] != i) {
        cout << i << " "; //this will print the missing element in arrays  
    }
}

   ////using binary Search  ///

   
   vector <int> arr = {0,1,3,4,6,8,9,10};

   int lo = 0;
   int hi = arr.size() - 1;
   int res = -1;
   while(lo<=hi){
       int mid = lo + (hi-lo)/2;
     if(mid == arr[mid]){
       lo = mid + 1;
     } else {
         res = mid;
        hi = mid -1;
     }
   }
   cout <<res<<endl;
 
    /***********************  leetcode 69  ************************ */

     int mySqrt(int x) {
        int lo = 0; 
        int hi = x;
        while(lo<=hi) {
            long long mid = lo + (hi-lo)/2;
            if(mid*mid == x) return mid;
            if(mid*mid < x ) lo = mid + 1;
            else hi = mid - 1;

        }
        return hi;
    }



    return 0;
}

