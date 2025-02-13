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

int fibonacii(int x){
   if(x == 2 || x == 1) return 1;
   int res = fibonacii(x-1) + fibonacii(x-2);
  
   return res;
   
}

int stair(int z){
    if(z==3) return 4;
    if(z==2) return 2;
    if(z==1) return 1;
    return stair(z-1) + stair(z-2) + stair(z-3);
}

int maze(int sr , int sc , int er ,int ec){
    if(sr > er || sc > ec) return 0;
    if(sr==er && sc == ec) return 1;
    int rightways = maze(sr , sc+1 , er , ec);
    int downways = maze(sr+1 ,sc , er , ec);
    return rightways + downways;
}

// starting two 2 parameters consider ending points has starting point and vice-versa
int maze2(int row, int col){
    if(row < 1 || col < 1) return 0;
    if(row == 1 && col == 1) return 1;
    int rightways = maze2(row ,col-1);
    int downways = maze2(row - 1 ,col);
    return rightways + downways;
}

void printpath(int sr , int sc , int er ,int ec , string s){
    if(sr > er || sc > ec) return ;
    if(sr==er && sc == ec) {
        cout<<s<<" "<<endl;
        return;
    }
    printpath(sr , sc+1 , er , ec , s+'R');
    printpath(sr+1 ,sc , er , ec ,s+'D');
}

void pip(int x){
    if(x==0) return ;
    cout<<"Pre "<<x<<endl;
    pip(x-1);
    cout<<"In "<<x<<endl;
    pip(x-1);
    cout<<"Post "<<x<<endl;
}
void zigzag(int x){
    if(x==0) return ;
   cout<<x<<" ";
    zigzag(x-1);
  cout<<x<<" ";
    zigzag(x-1);
   cout<<x<<" ";
}

int tower(int n ,char a ,char b ,char c){
    if(n==0) return 0;
    tower(n-1 , a , c , b);
    cout<<a<<" -> "<<c<<endl;
    tower(n-1, b , a , c );
}

//find minmium and max using recursion 
void max1(int arr[] , int idx, int max,int size){
  if(idx == size) {
    cout<<max<<" ";
    return;
  }  
  if(max < arr[idx]) max = arr[idx];
  max1(arr , idx + 1 ,max ,size);
}

int big(int arr[] , int idx , int n){
    if(idx == n) return INT_MIN;
    return max(arr[idx],big(arr,idx + 1 ,n));
}

void removeChar(string ans , string original){
    if(original.length()==0) {
        cout<<ans<<" ";
        return;
    }
    char ch = original[0];
    if(ch=='a' || ch == 'A') removeChar(ans,original.substr(1));
    else removeChar(ans+ch,original.substr(1));
}

void removeChars(string ans , string original ,int idx){
    if(original.length()==idx) {
        cout<<ans<<" ";
        return;
    }
    char ch = original[idx];
    if(ch=='a' || ch == 'A') removeChars(ans,original,idx+1);
    else removeChars(ans+ch,original,idx+1);
}

void printSubset1(string ans ,string original){
    if(original == ""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    printSubset1(ans,original.substr(1));
    printSubset1(ans+ch,original.substr(1));
}

void printSubset(string ans ,string original ,int idx){
    if(original.size() == idx){
        cout<<ans<<endl;
        return;
    }
    char ch = original[idx];
    printSubset(ans,original,idx+1);
    printSubset(ans+ch,original,idx+1);
}

void SubArr(vector<int>& nums ,int idx , int size ,vector<int> ans){
    if(idx == size){
        for(int ele : ans){
            cout<<ele<<" ";
        }
        cout<<endl;
        return;
    }
   SubArr(nums,idx+1,size,ans);
   ans.push_back(nums[idx]);
   SubArr(nums,idx+1,size,ans);
}
int main(){

    // vector<int> nums = {1,2,3};
    //  vector<int> ans;
    // SubArr1(nums, 0, 3, ans);
    // cout << endl;
    
    // string str = "abc";
    // printSubset("",str,0);

    // string str = "Abhishek tiwari";
    // removeChars("",str,0);
    // int arr[] = {1,2,6,5,9,22,3};
    //min(arr,0,INT_MIN,7);
    //cout<<big(arr , 0 ,7)<<endl;

    // cout<<maze(1,1,3,3)<<endl;
    //  cout<<maze2(3,3)<<endl;
    //  printpath(1,1,3,3,"");
    
    // long long res = fact(10); //120
    // cout<<res<<endl;
  
    //number(3);
    //cout<<sum(100)<<endl;
    //cout<<fibonacii(10)<<endl;
   // cout<<stair(5)<<endl;

   //pip(2);
   //zigzag(4);
   //tower(4 ,'A' , 'B' , 'C');
   
    return 0;
}
