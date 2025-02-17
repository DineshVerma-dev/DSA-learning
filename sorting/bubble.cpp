#include <bits/stdc++.h>
using namespace std;

int main() {
   vector <int> arr(5);
   for(int i=0; i<arr.size(); i++){
    cin>>arr[i];
   }
   sort(arr.begin(),arr.end()); // O(nlogn)
   for(int i : arr){
    cout<<i<<" ";
   }



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
  }                // time complexity --> n(n-1)/2
} 
cout<<endl;
 for(int i=0; i<n; i++){
 cout<<arr[i]<<" ";
}


  find the arr is sorted or not
  int arr[6] = {9, 4, 3, 2, 1, 6};
  bool flag = true;
  int n = 6;
  for (int i = 0; i < n - 1; i++) {
     for (int j = 0; j < n - 1 - i; j++) { // swap
        if (arr[j] > arr[j + 1]) {
          swap(arr[j], arr[j + 1]);
          flag = false;
        }
     }
     if(flag==true){
      break; //swap didn't happen
     }
  }
  if (flag) {
     cout << "Array is sorted" << endl;
  } else {
     cout << "Array is not sorted" << endl;
  }
  cout << endl;
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }

      sort a string in decreasing order of value associated after removal of values smaller than x
   string s = "AZYZXBYDXJK";
   string str = "";
   for(int i=0; i<s.size(); i++){
      if(s[i]>='X') {
         str.push_back(s[i]);
      }
   }
     sort(str.begin(),str.end());
      cout<<str;

   

   Push zeroes to end while maintaining the relative order of other elements
    int arr[9]={5,0,1,2,0,0,4,0,3};
    vector <int> res;
    for(int i=0; i<9;i++){
      if(arr[i] > 0){
      res.push_back(arr[i]);
      } 
    }
    for(int i=0; i<9; i++){
        if(arr[i] == 0){
            res.push_back(0);
        }
    }
   for(int i=0;i<res.size();i++){
      cout<<res[i]<<" ";
   }
  
    
int arr[]={5,0,1,2,0,0,4,0,3};
int n = 9;
for(int i=0; i<n; i++){
 cout<<arr[i]<<" ";
}
  for(int i=0; i<n-1; i++){ // n-1 passes
  //traverse
    for(int j=0; j<n-1-i; j++){ //swap
    if(arr[j]==0) {
        // int temp = arr[j];
      // arr[j] = arr[j+1];
      // arr[j+1] = temp;
      swap(arr[j],arr[j+1]);
    }
  }                // time complexity --> n(n-1)/2
} 
cout<<endl;
 for(int i=0; i<n; i++){
 cout<<arr[i]<<" ";
}
    

    ////sort the in decending order using buble sort
int arr[]={3,5,4,1,2};
int n = 5;
for(int i=0; i<n; i++){
 cout<<arr[i]<<" ";
}
  for(int i=0; i<n-1; i++){ // n-1 passes
  //traverse
    for(int j=0; j<n-1-i; j++){ //swap
    if(arr[j] <  arr[j+1]) {
      
      swap(arr[j],arr[j+1]);
    }
  }                // time complexity --> n(n-1)/2
} 
cout<<endl;
 for(int i=0; i<n; i++){
 cout<<arr[i]<<" ";
}

    ////check if the array is almost sorted or not 
    /////method 1:  
int arr[]={4,2,7,9,8};
int n = 5;
int brr[5];

for(int i=0; i<n; i++){ // 4 2 7 9 8
   brr[i] =  arr[i];
}
for(int i=0; i<n; i++){
 cout<<arr[i]<<" ";
}
  for(int i=0; i<n-1; i++){ 
   bool flag = true;
    for(int j=0; j<n-1-i; j++){ 
    if(arr[j] >  arr[j+1]) {
      swap(arr[j],arr[j+1]);
      flag = false;
    }
    if(flag == true) break;
  }                
} 
cout<<endl;
 for(int i=0; i<n; i++){ // 2 4 7 8 9
 cout<<arr[i]<<" ";
}

   cout<<endl;
bool flag = true;
// brr 4 2 7 9 8
// arr 2 4 7 8 9
 
 for(int i=0; i<n; i++){
  if(i==0){
      if(brr[i]!=arr[i] && brr[i]!=arr[i+1]){
      flag = false;
       break;
    }
    } 
    
    else if (i==n-1){
      if(brr[i]!=arr[i] && brr[i]!=arr[i-1]){
        flag = false;
        break;
      }
    }

    else {
        if(brr[i]!=arr[i] && brr[i]!=arr[i-1] && brr[i]!=arr[i+1]){
           flag = false;
        break;
        }
    }

 }
   cout <<flag<<endl;

   //method 2 without using extra spaces
   int arr[] = {4,2,7,9,8};
   
   for(int i=0; i<5; i++){
    cout<<arr[i]<<" ";
   }
   
   bool flag = true;
   for(int i=0; i<5; i++){
     int count = 0;
    
     for(int j=0; j<5; j++){
      if(i==j) continue;
      if(arr[j] > arr[i]) count++;
     }
    int idx = 5-count-1;
   
  //   if(idx == 0){
  //     if(arr[i]!=arr[idx] && arr[i]!=arr[idx+1]){
  //       flag = false;
  //       break;
  //     } 
  //   }
  //  else if(idx == 4){
  //     if(arr[i]!=arr[idx] && arr[i]!=arr[idx-1]){
  //       flag = false;
  //       break;
  //     } 
  //   }
  
  //  else {
  //   if(arr[i]!=arr[idx] && arr[i]!=arr[idx-1] &&arr[i]!=arr[idx+1]){
  //       flag = false;
  //       break;
  //     } 
  //  }

  int diff = idx - i;
  if(diff<0) diff = -diff;
  if(diff > 1){
    flag = true;
  }
 }
   cout<<flag<<endl;

 int arr[]={4,2,8,7,9};
int n = 5;


for(int i=0; i<n-1; i++){
  if(arr[i]>arr[i+1]){
    swap(arr[i],arr[i+1]);
    i++;
  }
} //2,4,7,9,8
    bool flag = true;
 for(int i=0; i<n-1; i++){
  if(arr[i]>arr[i+1]){
    flag = false;
    break;
  }
} 
if(flag == true) cout<<"Almost sorted";
else cout<<"Not almost sorted";
    
    return 0;
}
