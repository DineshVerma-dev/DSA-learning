#include <bits/stdc++.h>
using namespace std;

int main() {
   
   int arr[] = {5,3,1,4,2};
  int minIndex = 0;
  int n=4;
  while(n){
     for(int i=1; i<5;i++){
     if(arr[minIndex] > arr[i]){
        minIndex = i;
     }
      swap(arr[0], arr[minIndex]);
     }
     n--;
  }
  
  for(int nums : arr){
    cout<<nums<<" ";
  }
    return 0;
}
