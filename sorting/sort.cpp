#include <bits/stdc++.h>
using namespace std;

int main() {
//    vector <int> arr(5);
//    for(int i=0; i<arr.size(); i++){
//     cin>>arr[i];
//    }
//    sort(arr.begin(),arr.end()); // O(nlogn)
//    for(int i : arr){
//     cout<<i<<" ";
//    }

int arr[6] = {5,4,6,3,2,1};
int n = 6;
for(int i=0; i<n; i++){
 cout<<arr[i]<<" ";
}
  for(int i=0; i<n-1; i++){ // n-1 passes
  //traverse
    for(int j=0; j<n-1-i; j++){ //swap
    if(arr[j]>arr[j+1]) {
        // int temp = arr[j];
      // arr[j] = arr[j+1];
      // arr[j+1] = temp;
      swap(arr[j],arr[j+1]);
    }
  }
} 
cout<<endl;
 for(int i=0; i<n; i++){
 cout<<arr[i]<<" ";
}

    return 0;
}
