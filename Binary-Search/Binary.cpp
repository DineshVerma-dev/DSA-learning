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

vector<vector<int>> arr = {{0,0,0,0,1,1}, {0,0,1,1,1,1}, {0,0,0,1,1,1}, {0,1,1,1,1,1}, {0,0,0,1,1,1}};
 vector<vector<int>> arr = {
    {0, 1, 1, 1},
    {0, 0, 0, 0},
    {1, 1, 1, 1},
    {0, 0, 0, 1},
    {0, 1, 1, 1},
    {0, 0, 0, 1},
    {0, 0, 0, 1}
};
 int x = 1;
 int n = arr.size();
 int m = arr[0].size();
for(int i = 0; i < arr.size(); i++) {
  for(int j = 0; j < m; j++) {
    cout << arr[i][j] << " ";
  }
  cout << endl;
}


 vector <int> ans;
   for(int i=0 ;i<n ;i++){
    int lo = 0;
    int hi = m-1;
    int firstIdx = -1;
    while(lo<=hi){
      int mid = lo + (hi-lo)/2;
      if (arr[i][mid] == x) {
         if(mid == 0 || arr[i][mid-1] != x){
          firstIdx = mid;
          break;
         } else hi = mid -1;
      }
      else if(arr[i][mid] < x) lo = mid + 1;
      else hi = mid - 1;
    }
    if(firstIdx != -1) ans.push_back(m - firstIdx);
    else ans.push_back(0);
   }
 
  for(int i=0;i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
 
   cout<<endl;
   int max = -1;
   int maxIdx = -1;
   for( int i=0; i<ans.size(); i++){
     if(max < ans[i]){
         max = ans[i];
         maxIdx = i;
     }
 } 
  cout << maxIdx;

  /* find the one repeated number*/
  vector <int> arr = {1,2,3,4,4,5,6,7};
  int lo = 0;
  int hi = arr.size() - 1;
  while(lo<=hi){
    int mid = lo +(hi-lo)/2;
    if(arr[mid] == mid + 1) lo = mid + 1;
    if(arr[mid] == mid){
      if(arr[mid] == arr[mid-1]){
        cout<<arr[mid];
        break;
      }
      else hi = mid -1;
    }
  }

  /*leetcode 33 search in roated sorted arrays */

     int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        if(n==2){
            if(nums[0] == target) return 0;
            else if(nums[1] == target) return 1;
            else return -1;
        }
        int lo = 0; 
        int hi = n-1;
        // pivot element
        int pivot = -1; // smallest element
        while(lo<=hi){
             int mid = lo + (hi-lo)/2;
            if(mid == 0) lo = mid + 1;
            else if(mid == n-1) hi = mid -1;
            else if(nums[mid] < nums[mid-1] && nums[mid] < nums[mid+1]) {
                pivot = mid;
                break;
            }
            else if(nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1]){
                pivot = mid+1;
                break;
            }
           else if(nums[mid] > nums[hi]) lo = mid + 1;
            else hi = mid - 1;
        }
        if(pivot==-1){ // already sorted pivot not found in this array
            lo = 0;
            hi = n-1;
            while(lo<=hi){
               int mid = lo + (hi-lo)/2;
               if(nums[mid] == target) return mid;
               if(nums[mid] > target) hi = mid-1;
               else lo = mid + 1;
        }
        }
        else if(nums[0] <= target && nums[pivot-1] >= target ){
            lo = 0;
            hi = pivot-1;
            while(lo<=hi){
               int mid = lo + (hi-lo)/2;
               if(nums[mid] == target) return mid;
               if(nums[mid] > target) hi = mid-1;
               else lo = mid + 1;
            }
        } else {
            lo = pivot;
            hi = n-1;
            while(lo<=hi){
              int mid = lo + (hi-lo)/2;
               if(nums[mid] == target) return mid;
               if(nums[mid] > target) hi = mid-1;
               else lo = mid + 1;
            } 
        }
        return -1;
    }

       /*leetcode 658 find k closest elemenets */

    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<int> v(k);
        if (x < arr[0]) {
            for (int i = 0; i < k; i++) {
                v[i] = arr[i];
            }
            return v;
        } else if (x > arr[n - 1]) {
            int i = k - 1;
            int j = n - 1;
            while (i >= 0) {
                v[i] = arr[j];
                j--;
                i--;
            }
            return v;
        }
        int hi = n - 1;
        int lo = 0;
        int mid = -1;
        int t = 0; // representing current index of v
        bool flag = false;
        int lowb;  // lower bound index
        int uppb;  // upper bound index
        while (lo <= hi) {
            mid = lo + (hi - lo) / 2;
            if (arr[mid] == x) {
                flag = true;
                v[t] = arr[mid];
                lowb = mid - 1;
                uppb = mid + 1;
                t++;
                break;
            } else if (arr[mid] > x) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        if (flag == false) {
            lowb = hi;
            uppb = lo;
        }

        while (t < k && lowb >= 0 && uppb <= n - 1) {
            int d1 = abs(x - arr[lowb]);
            int d2 = abs(x - arr[uppb]);
            if (d1 <= d2) {
                v[t] = arr[lowb];
                lowb--;
            } else { // d1 < d2
                v[t] = arr[uppb];
                uppb++;
            }
            t++;
        }
        if (lowb < 0) {
            while (t < k) {
                v[t] = arr[uppb];
                uppb++;
                t++;
            }
        }
        if (uppb >= n - 1) {
            while (t < k) {
                v[t] = arr[lowb];
                lowb--;
                t++;
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
 
  ///*leetcode 633 find sumof the square :  */

  bool isperfectSquare(long long n){
      long long root = sqrt(n);
      long long v =root*root;
      if(v == n) return true;
      else return false;
    }
    bool judgeSquareSum(int c) {
        long long x = 0;
        long long y = c;
        while(x<=y){
            if(isperfectSquare(x) && isperfectSquare(y) ) return true;
           else if(!isperfectSquare(y)){
            y = (int)sqrt(y)*(int)sqrt(y);
            x = c-y;
           } else {
            x = ((int)sqrt(x) +1)*((int)sqrt(x) +1);
            y = c-x;
           }
        }
        return false;
    }

  /binary serach on infinite array
  In this first we have to define the boundary of the low and high 
  and then apply binary search in this low --> high range
  
  lo = 0; high = 1;
   while(arr[hi] < target){
    low = high;
    high = 2*high;
   }
   
   leetcode 74 
   leetcode 81
   leetcode 1011 ship the weights in Days

   class Solution {
    public:
       bool check(int mid,vector<int>& weights,int days){
        // 3,2,2,4,1,4  days = 3 mid =
        int n = weights.size();
        int m = mid;
        int count = 1;
        for(int i=0;i<n;i++){
          if(m>=weights[i]){
            m -= weights[i];
          } else {
            count++;
            m = mid;
            m -= weights[i];
          }
        }
        if(count>days) return false;
        else return true;
       }
        int shipWithinDays(vector<int>& weights, int days) {
            int n = weights.size();
            int max = INT_MIN;
            int sum = 0;
            for (int i = 0; i < n; i++) {
                if (weights[i] > max) {
                    max = weights[i];
                }
                sum += weights[i];
            }
            int low = max;
            int high = sum;
            int mincapacity = sum;
            while(low<=high){
                int mid = low + (high-low)/2;
                if(check(mid,weights,days)){
                    mincapacity = mid;
                    high = mid - 1;
                } else low = mid + 1;
            }
            return mincapacity;
        }
    }; ///time complexity --> O(nlog(sum-max))
   

    class Solution {
        public:
             bool check(int mid , vector<int>& piles, int h){
                int speed  = mid;
                int count = 0; 
                for(int i=0; i<piles.size(); i++){
                   if(speed>=piles[i]) count++;
                   else if(piles[i]%speed) count+=piles[i]/speed;
                   else count+=piles[i]/speed + 1;

                }
                if(count>h) return false;
                else return true;
                
             }
            int minEatingSpeed(vector<int>& piles, int h) {
                int low = 1;
                int high = INT_MIN;
                for(int i=0; i<piles.size(); i++){
                    if(piles[i] > high){
                        high = piles[i];
                    }
                }
                int ans = high;
                while(low<=high){
                    int mid = low +(high-low)/2;
                    if(check(mid,piles,h)){
                       ans = mid;
                       high = mid - 1;
                    } else low = mid + 1;
                }
                return ans;
            }
        };
    return 0;
}

