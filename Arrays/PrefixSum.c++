#include<bits/stdc++.h>
using namespace std;


int main(){
//    vector<int> arr =  {1,2,3,4,5,6};
//    vector<int> ans(arr.size());
//    ans[0] = arr[0];
//     for(int i=1; i<arr.size(); i++){
//       ans[i] = ans[i-1] + arr[i];
//     }
    
//     for(int i=1; i<arr.size(); i++){
//         arr[i] = arr[i] + arr[i-1];
//     }
//     for(int j=0; j<arr.size(); j++){
//         cout<<arr[j]<<endl;
//     }



 ///partition point in arrays
//   vector<int> pre = {1,2,3,4,5,10,5};
//   for(int i=1; i<pre.size(); i++){
//     pre[i]  = pre[i] + pre[i-1];
//   }
//      int idx = -1;
//   for(int i=0; i<pre.size(); i++){
//      if(2*pre[i] == pre[pre.size()-1]){
//         idx = i;
//         break;
//      }
//   }
//   if(idx == -1) cout<<"Not possible to patition";
//   else cout<<"possible at idx = "<<idx<<endl;


  ///leetcode 238
  vector<int> arr = {1,2,3,4};
  //pre-product
  vector<int> pre(arr.size());
   pre[0] = 1;
  for(int i=1; i<arr.size(); i++){
     pre[i] = arr[i-1]*pre[i-1];
  }
  //suff-product
  vector<int> suff(arr.size());
  suff[arr.size()-1] = 1;
  for(int j=arr.size()-2; j>=0; j--){
    suff[j] = arr[j+1]*suff[j+1];
  }

  for(int k=0; k<arr.size(); k++){
    arr[k] = suff[k]*pre[k];
  }

  for(int i=0; i<arr.size(); i++){
   cout<<arr[i]<<" ";
  }

  


}