#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    
    // string s = "dinesh";
    // cout<<(int)s[6]<<" ";

    // char ch = '\0';    //--> \0 is special charcter in string append to last of every string
    // cout<<(int)ch<<" ";

    //    char str[] = {'a','b','\0','c','d'};
   //     for(char demo : str){
   //         cout<<demo<<" ";
   //     }
    
    // char str[] = "abscd";
    // for(int i=0; str[i]!='\0';i++){
    //     cout<<str[i]<<" ";
    // }

    // string str = "dinesh verma";
    // cout<<str.size()<<endl;  // this will return size 12   1 for the space 
    // cout<<str.length()<<endl;  // this will return size 12   1 for the space 

    // string s;
    //  getline(cin,s);
    // cout<<s<<" ";

    // string str = "dineshkumar verma";
    // int i=0;
    // int count = 0;
    // while(str[i]!='\0'){
    //     if(str[i]=='a' || str[i]=='e' || str[i] == '0' ||str[i]=='i' || str[i]=='u'){
    //         count++;
    //     }
    //     i++;
    // }
    // cout<<count<<endl; //---> once the vowels is counted done count again

    //updation of single char;
    // string str = "raghav";
    // cout<<str<<endl;
    // str[1] = 's';
    // cout<<str<<endl;
    
    // string str;
    // getline(cin,str);
    // for(int i=0; str[i]!='\0';i+=2){
    //     str[i] = 'a';
    // }
    // cout<<str<<" ";

   

     // string str = "ached";
    // cout << str << endl; // Output: ached

    // str.push_back('e');  // Adds 'e' to the end of the string
    // cout << str << endl; // Output: achede

    // str.pop_back();      // Removes the last character (no argument needed)
    // cout << str << endl; // Output: ached
 
//  + operator --> used to append the string
    // string s = "abs";
    // cout<<s<<endl;
    // string t = "def";
    // s = s + t;
    // s = "debish" + s;
    // cout<<s<<endl;

//    string str = "dineshverma";
//    reverse(str.begin() , str.end());
//     cout<<str<<endl;
//    reverse(str.begin() +2 , str.begin()+5);
//     cout<<str<<endl;

//    string str = "dinesh";
//    reverse(str.begin(),str.begin()+3);
//    cout<<str<<endl;
    
    //string str = "hello world";
  //str.substr(idx,length)
  //  cout<< str.substr(2,5)<<endl;

   //to_string --> it convert intger to string
   int x = 12345;
   string s = to_string(x);
   cout<<s.length()<<endl;



    return 0;
}