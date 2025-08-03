#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> arr = {3,1,2,5,4,6,2,3};
  
  // vector<int> nge(arr.size(), -1);
  // for(int i=0; i<arr.size(); i++){
  //   for(int j=i+1; j<arr.size(); j++){
  //     if(arr[i] < arr[j]) {
  //       nge[i] = arr[j];
  //       break;
  //     }
  //   }
  // }
   
  stack <int> st;
  int n = arr.size();
  vector<int> ans(n);
  ans[n-1] = -1;
  st.push(arr[n-1]);
  
  for(int i=n-2; i>=0; i--){
   
     while(!st.empty()  && st.top() <= arr[i])  st.pop();
    if(st.size()==0) ans[i] = -1;
    else ans[i] = st.top();
     st.push(arr[i]);
  }
  

  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
 
    return 0;
}