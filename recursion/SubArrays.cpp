#include <bits/stdc++.h>
using namespace std;

void printSubarrs(vector<int> ans , vector<int>& original , int idx ,int length) {
    if(idx == length) {
        for(int ele : ans){
            cout<<ele<<" ";
        }
        cout<<endl;
        return;
    }
     printSubarrs(ans,original,idx+1,length);
     ans.push_back(original[idx]);
    //if(ans.empty() || original[idx] == ans.back()){ // ans.back() tells the last element 
    if(ans.size() == 0 ||  original[idx - 1] == ans[ans.size()-1]){
        printSubarrs(ans,original,idx+1,length);
    }
  
}

int main() {
    vector<int> ans;
    vector<int> original = {1,2,3,4};
    printSubarrs(ans , original , 0,4);
    return 0;
}