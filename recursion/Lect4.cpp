#include<bits/stdc++.h>
using namespace std;

bool ispalindrome(string x){
   int i = 0;
   int j = x.length()-1;
   bool flag = true;
    while(i<j){
    if(x[i]!=x[j]) return false;
    else {
        i++;
        j--;
    }
   }
   return true;
}

int hcf(int x, int y){ 
    int m = y%x;
    if(m==0) return x;
    hcf(m , x);
}

void generateBinary(string s,int n){ 
    if(s.length() == n){
       cout<<s<<" "<<endl;
       return ; 
    }
    generateBinary(s+"0",n);
    if(s=="" || s[s.size()-1] == '0') generateBinary(s+"1",n);  

}

//leetcode 39 combintion sum
void combination(vector<int> v, int arr[],int n,int target,int idx){
    if(target==0){
        for(int i=0;i<v.size(); i++){
             cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return ;
    for(int i=idx; i<n; i++){
        v.push_back(arr[i]);
        combination(v,arr,n,target-arr[i],i);
        v.pop_back();
    }
    
}

//leetcode 22 generate parenthesis
void parenthesis(string s, int opening , int closing ,int n){
    if(s.size() == 2*n){
        //closing == n//
       cout<<s<<" ";
       cout<<endl;
       return;
    }  
    if(opening < n) {
        parenthesis(s+"(",opening+1,closing,n);
    }
    if(closing < opening){
        parenthesis(s+")",opening,closing+1,n);
    }
}

//leetcode  779 
void grammer(string s, int n){
    if(s.size() == n){
        cout<<s<<" ";
        cout<<endl;
        return;
    }
    if(s.back() == '0'){
        grammer(s+"01",n);
    } else grammer(s+"10",n);
   
    
}
int main(){
 
    grammer("0",3);

       //parenthesis("",0,0,3);
        
    //  int arr[] = {2,3,5};
    //  vector<int> v;
    // combination(v,arr,3,8,0);

  // generateBinary("",3);

   // cout<<hcf(60,24)<<" ";
    // string s = "racecar";
    // cout << ispalindrome(s) << " ";
    return 0;
}