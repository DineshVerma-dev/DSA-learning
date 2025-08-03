#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> st;
   
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack <int> temp;
    
      while(st.size()>0){
        cout<<st.top()<<endl;
        temp.push(st.top());
        st.pop();
      }

    //   while(temp.size()>0){
    //     cout<<temp.top()<<endl;
    //     temp.pop();
    //   }
  
    
    return 0;
}