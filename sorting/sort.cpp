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



// int arr[6] = {5,4,6,3,2,1};
// int n = 6;
// for(int i=0; i<n; i++){
//  cout<<arr[i]<<" ";
// }
//   for(int i=0; i<n-1; i++){ // n-1 passes
//   //traverse
//     for(int j=0; j<n-1-i; j++){ //swap
//     if(arr[j]>arr[j+1]) {
//         // int temp = arr[j];
//       // arr[j] = arr[j+1];
//       // arr[j+1] = temp;
//       swap(arr[j],arr[j+1]);
//     }
//   }                // time complexity --> n(n-1)/2
// } 
// cout<<endl;
//  for(int i=0; i<n; i++){
//  cout<<arr[i]<<" ";
// }


  //find the arr is sorted or not
//   int arr[6] = {9, 4, 3, 2, 1, 6};
//   bool flag = true;
//   int n = 6;
//   for (int i = 0; i < n - 1; i++) {
//      for (int j = 0; j < n - 1 - i; j++) { // swap
//         if (arr[j] > arr[j + 1]) {
//           swap(arr[j], arr[j + 1]);
//           flag = false;
//         }
//      }
//      if(flag==true){
//       break; //swap didn't happen
//      }
//   }
//   if (flag) {
//      cout << "Array is sorted" << endl;
//   } else {
//      cout << "Array is not sorted" << endl;
//   }
//   cout << endl;
//   for(int i = 0; i < n; i++){
//     cout << arr[i] << " ";
//   }

      //sort a string in decreasing order of value associated after removal of values smaller than x
   sting s = "AZYZXBYDXJK";
   string str = "";
   for(int i=0; i<s.size(); i++){
      if(s[i]>="X") {
         str.push_back(s[i]);
      }
   }
     sort(str.begin(),str.end());
      cout<<str;

    return 0;
}
