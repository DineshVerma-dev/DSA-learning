#include <bits/stdc++.h>
using namespace std;

int main() {
   vector <int> arr(5);
   for(int i=0; i<arr.size(); i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   for(int i : nums){
    cout<<arr[i];
   }
    return 0;
}
