#include<bits/stdc++.h>
using namespace std;

int main(){
   // brute force solution 
vector<int> arr = {10,5,2,7,1,-10};
  int res = 15;
  int length = -1;
    for(int i=0; i<arr.size(); i++){
        for(int j=1; j<arr.size(); j++){
            int sum = 0;
            for(int k=i ; k<=j; k++){
                sum += arr[k];
            }
            if(res == sum) length = max(length ,j-i+1);
        }
    }
    cout<<length;
    return 0;
}
