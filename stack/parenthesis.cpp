#include<bits/stdc++.h>
#include<stack>
using namespace std;

// check for the valid parenthesis

bool isBalanced(string s){
    stack <char> st;
    if(s.size()%2!=0) return false;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '(') st.push(s[i]);
        else {
            if(st.size()==0) return false;
            st.pop();
        }
    }
    if(st.size()==0) return true;
    else return false;
}

 // remove consecutive duplicates in a string
string removeDuplicate(string s){
  stack<char> st;
  st.push(s[0]);
  for(int i=0; i<s.length(); i++){
     if(s[i]!=st.top()) st.push(s[i]);
  }
  s = "";
  while(st.size()>0){
    s+= st.top();
    st.pop();
  }
  reverse(s.begin(),s.end());
  return s;
}

int main(){
   string s = "())))";
   cout<<isBalanced(s);

   string s1  = "aaabbcddaabffg";
   cout<<removeDuplicate(s1)<<endl;

   
    return 0;
}