#include<bits/stdc++.h>
using namespace std;

int main(){
  //vector<int> arr = {3,1,2,5,4,6,2,3};
  
  // vector<int> nge(arr.size(), -1);
  // for(int i=0; i<arr.size(); i++){
  //   for(int j=i+1; j<arr.size(); j++){
  //     if(arr[i] < arr[j]) {
  //       nge[i] = arr[j];
  //       break;
  //     }
  //   }
  // }
   

  // next greater elements  : 
  stack <int> st;
  // int n = arr.size();
  // vector<int> ans(n);
  // ans[n-1] = -1;
  // st.push(arr[n-1]);
  
  // for(int i=n-2; i>=0; i--){
   
  //    while(!st.empty()  && st.top() <= arr[i])  st.pop();
  //   if(st.size()==0) ans[i] = -1;
  //   else ans[i] = st.top();
  //    st.push(arr[i]);
  // }
  
  // previous greater Elements
   
  vector<int> arr  = {100,80,60,81,70,60,75,85};
  int n = arr.size();
  vector<int> ans(n);
  ans[0] = 1;
  st.push(0);
  for(int i=1; i<arr.size(); i++){
     while(!st.empty() && arr[st.top()] <= arr[i]) st.pop();
     if(st.size()==0) ans[i] = -1;
     else ans[i] = st.top();
     st.push(i);
     ans[i] = i - ans[i];
  }
 
  
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }

  
    return 0;
}