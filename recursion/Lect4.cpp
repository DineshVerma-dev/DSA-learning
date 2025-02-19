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
void combination(){
    
}
int main(){
     
   

  // generateBinary("",3);

   // cout<<hcf(60,24)<<" ";
    // string s = "racecar";
    // cout << ispalindrome(s) << " ";
    return 0;
}