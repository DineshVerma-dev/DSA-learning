#include <bits/stdc++.h>
using namespace std;

// print output : n=4   4 3 2 1 2 3 4
int solve(int x) {
    cout<<x<<" ";
   if(x==1) return 1;
    solve(x-1);
   cout<<x<<" ";
}


// print output : n=4   1 2 3 4 3 2 1
void solve2(int x, int n) {
    if (x > n) return;  
    cout << x << " ";   
    solve2(x + 1, n);    
    if (x < n) cout << x << " ";  
}


int sumofdigits(int n){
   // % -> last digit milata h
   // / -> reduce number
   if(n%10 == n) return n;
   int x = n%10;
   int reduce = n/10;
   int sum = x + sumofdigits(reduce);
   return sum;
}


// output : n = 4321  -->  1234
int reverseNumber(int n){
   if(n%10 == n) {
    cout<<n<<" ";
    return n;
   }
   int x = n%10;
   cout<<x<<" ";
   int reduce = n/10;
   return reverseNumber(reduce);
}


int main() {
   
    //solve(4);
    cout<<endl;
   
    cout<<endl;
    solve2(1,4);
    cout<<endl;
    cout<<sumofdigits(123456789)<<endl;
    reverseNumber(123456789);
   
    return 0;
}