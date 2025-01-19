#include <bits/stdc++.h>
using namespace std;

int main() {
   
  // int arr[] = {5,3,1,4,2};
  // int minIndex = 0;
  // int n=4;
  // while(n){
  //    for(int i=1; i<5;i++){
  //    if(arr[minIndex] > arr[i]){
  //       minIndex = i;
  //    }
  //     swap(arr[0], arr[minIndex]);
  //    }
  //    n--;
  // }
  
  // for(int nums : arr){
  //   cout<<nums<<" ";
  // }


  // int arr[] = {5, 3, 1, 4, 2};
  // int n = 5;
  // for (int ele : arr) {
  //   cout << ele << " ";
  // }
  // cout << endl;

  // // selection sort
  // for (int i = 0; i < n - 1; i++) {
  //   int min = INT_MAX;
  //   int mindx = -1;
  //   // find the minimum element in the unsorted part
  //   for (int j = i; j < n; j++) {
  //     if (arr[j] < min) {
  //       min = arr[j];
  //       mindx = j;
  //     }
  //   }
  //   swap(arr[i], arr[mindx]);
  // }
  // for (int ele : arr) {
  //   cout << ele << " ";
  //  }


  int   arr[] = {5, 30, -1, 4, 2};
  int n = 5;
  for (int ele : arr) {
    cout << ele << " ";
  }
  cout << endl;

  //insertion sort 
  for(int i=1; i<n; i++){
   int j = i;
    // while(j>=1){
    //   if(arr[j]>=arr[j-1]) break;
    //   else {
    //     swap(arr[j],arr[j-1]);
    //     j--;
    //   }
      while( j>=1 && arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
        j--;
      
    }
  }

   for (int ele : arr) {
    cout << ele << " ";
  }
  cout << endl;
    return 0;
}
