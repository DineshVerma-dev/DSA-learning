#include <bits/stdc++.h>
using namespace std;

long long fact(long long n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);
}

int number(int n){
    if(n==0) return 0; //base case
    number(n-1); // recursion
    cout<<n<<endl; // code
}

int sum(int n){
    if(n==0) return 0;
    int x = n+sum(n-1);
    return x;
}
int main(){
 
    // long long res = fact(10); //120
    // cout<<res<<endl;
  
    //number(3);
    cout<<sum(100)<<endl;
    return 0;
}
