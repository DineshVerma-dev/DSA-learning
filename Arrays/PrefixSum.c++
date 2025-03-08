#include<bits/stdc++.h>
using namespace std;


int main(){
   vector<int> arr =  {1,2,3,4,5,6};
   vector<int> ans(arr.size());
   ans[0] = arr[0];
    for(int i=1; i<arr.size(); i++){
      ans[i] = ans[i-1] + arr[i];
    }
    
    for(int i=1; i<arr.size(); i++){
        arr[i] = arr[i] + arr[i-1];
    }
    for(int j=0; j<arr.size(); j++){
        cout<<arr[j]<<endl;
    }
}