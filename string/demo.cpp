#include<iostream>
#include <algorithm>
#include <unordered_map>
#include<vector>
#include<sstream>
#include<limits>
#include<string>
#include <cstdlib> // for stoll and stoi
using namespace std;

int main(){
    
//     string s = "dinesh";
//     cout<<(int)s[6]<<" ";

//     char ch = '\0';    //--> \0 is special charcter in string append to last of every string
//     cout<<(int)ch<<" ";

//        char str[] = {'a','b','\0','c','d'};
//        for(char demo : str){
//            cout<<demo<<" ";
//        }
    
//     char str[] = "abscd";
//     for(int i=0; str[i]!='\0';i++){
//         cout<<str[i]<<" ";
//     }

//     string str = "dinesh verma";
//     cout<<str.size()<<endl;  // this will return size 12   1 for the space 
//     cout<<str.length()<<endl;  // this will return size 12   1 for the space 

//     string s;
//      getline(cin,s);
//     cout<<s<<" ";

//     string str = "dineshkumar verma";
//     int i=0;
//     int count = 0;
//     while(str[i]!='\0'){
//         if(str[i]=='a' || str[i]=='e' || str[i] == '0' ||str[i]=='i' || str[i]=='u'){
//             count++;
//         }
//         i++;
//     }
//     cout<<count<<endl; //---> once the vowels is counted done count again

//     updation of single char;
//     string str = "raghav";
//     cout<<str<<endl;
//     str[1] = 's';
//     cout<<str<<endl;
    
//     string str;
//     getline(cin,str);
//     for(int i=0; str[i]!='\0';i+=2){
//         str[i] = 'a';
//     }
//     cout<<str<<" ";

   

//      string str = "ached";
//     cout << str << endl; // Output: ached

//     str.push_back('e');  // Adds 'e' to the end of the string
//     cout << str << endl; // Output: achede

//     str.pop_back();      // Removes the last character (no argument needed)
//     cout << str << endl; // Output: ached
 
//  + operator --> used to append the string
//     string s = "abs";
//     cout<<s<<endl;
//     string t = "def";
//     s = s + t;
//     s = "debish" + s;
//     cout<<s<<endl;

//    string str = "dineshverma";
//    reverse(str.begin() , str.end());
//     cout<<str<<endl;
//    reverse(str.begin() +2 , str.begin()+5);
//     cout<<str<<endl;

//    string str = "dinesh";
//    reverse(str.begin(),str.begin()+3);
//    cout<<str<<endl;
    
//     string str = "hello world";
//   str.substr(idx,length)
//    cout<< str.substr(2,5)<<endl;

//    to_string --> it convert intger to string
//    int x = 12345;
//    string s = to_string(x);
//    cout<<s.length()<<endl;

  // string str = "abbcdeffghh";
  //   int count = 0;

  //   for (int i = 0; i < str.length(); i++) {
  //     if(i==1) break;
  //     if(i==2) {count++;
  //      break;}
  //       if (i == 0) {
  //           if (str[i] != str[i + 1]) {
  //               count++;
  //           }
  //       } else if (i == str.length() - 1) {
  //           if (str[i] != str[i - 1]) {
  //               count++;
  //           }
  //       } else {
  //           if (str[i] != str[i - 1] && str[i] != str[i + 1]) {
  //               count++;
  //           }
  //       }
  //   }

  //   cout << "Count of distinct (non-repeating) characters: " << count << endl;

//    string s;
//    getline(cin,s);
//    sort(s.begin(),s.end()); // lexographically sort karna 
//    cout<<s;    // if spaces are given then it will be prented first become ascii value is less then the others

//   string s = "nitin";
//   string t = "tinin";
//   sort(s.begin(),s.end());
//   sort(t.begin(),t.end());
//   if(s==t) cout<<true;
//   else cout<<false;

    // string str = "diiiieshdeveloper";
    // int maxCount = 0;
    // unordered_map<char, int> charCount;

    // for (char c : str) {
    //   charCount[c]++;
    //   if (charCount[c] > maxCount) {
    //     maxCount = charCount[c];
    //   }
    // }

    // cout << "Characters repeating maximum times: ";
    // for (auto& pair : charCount) {
    //   if (pair.second == maxCount) {
    //     cout << pair.first << " ";
    //   }
    // }
    // cout << "with count: " << maxCount << endl;
    
    // string s = "dineshveeerma";
    // vector <int> arr(26,0);
    // for(int i=0; i<s.length(); i++){
    //   char ch = s[i];
    //   int ascii = (int) ch;
    //   arr[ascii - 97]++;
    // }
    // int mx = 0;
    // for(int i=0; i<26; i++){
    //   if(arr[i]>mx) mx = arr[i];
    // }
    // for(int i=0; i<26; i++){
    //   if(arr[i]==mx){
    //     int ascii = i + 97;
    //     char ch = (char) ascii;
    //     cout<<ch<<" "<<mx<<endl;
    //   }
    // }
   
   
    // string str = "dinesh is good developer "; // printing the words from the sentence remove the spaces;
    // stringstream ss(str);

    // string temp;
    // while(ss>>temp){
    //   cout<<temp<<endl;
    // }

    //question find the duplicate words in sentence
    // string s = "dinesh dinesh is good dinesh";
    // stringstream ss(s);
    // string local;
    // vector<string> temp;
    // int mx = 0, count = 1;

    // while (ss >> local) {
    //   temp.push_back(local);
    // }

    // sort(temp.begin(), temp.end());

    // for (int i = 1; i < temp.size(); i++) {
    //   if (temp[i] == temp[i - 1]) {
    //     count++;
    //   } else {
    //     mx = max(mx, count);
    //     count = 1;
    //   }
    // }
    // mx = max(mx, count); // To account for the last set of duplicates

    // cout << "Maximum count of any word: " << mx << endl;
    // count = 1;
    // string maxWord = temp[0];
    // for (int i = 1; i < temp.size(); i++) {
    //   if (temp[i] == temp[i - 1]) {
    //   count++;
    //   } else {
    //   if (count == mx) {
    //     maxWord = temp[i - 1];
    //     break;
    //   }
    //   count = 1;
    //   }
    // }
    // cout << "Word repeating maximum times: " << maxWord << endl;

    //string to integer (stoi && stoll)

    // string str = "1232222222245";
    // try {
    //     long long x = stoll(str);
    //     cout << x << endl;
    // } catch (const out_of_range& e) {
    //     cout << "Error: " << e.what() << endl;
    // }
    // string str1 = "1234335";
    // try {
    //     int x1 = stoi(str1);
    //     cout << x1 << endl;
    // } catch (const out_of_range& e) {
    //     cout << "Error: " << e.what() << endl;
    // }

   //this is mine approach
  // string arr[5] = {"001233333", "456", "789", "101112", "131415"};
  // vector <int> store ;
  // for(int i=0; i<5; i++){
  //   long long x = stoll(arr[i]);
  //   store.push_back(x);
  //  }
  // sort(store.begin(),store.end());
  // cout<<store[4]<<endl;
  
  //question is return longest number
  // string arr[5] = {"001233333", "456", "789", "101112", "131415"};
  // int max =stoi(arr[0]);
  // string maxs = arr[0];
  // for(int i=1; i<5; i++){
  //   int x = stoi(arr[i]);
  //   if(x>max) {
  //     max = x;
  //     maxs = arr[i];
  //   }
  // }
  // cout<<max<<" "<<maxs;


  //longest common prefix
  // vector<string> strs = {"flower", "flow", "flight"};
  //   int n = strs.size();
    
  //   if (n == 0) {
  //       cout << "Longest Common Prefix: " << "" << endl;
  //       return 0;
  //   }
  //   if (n == 1) {
  //       cout << "Longest Common Prefix: " << strs[0] << endl;
  //       return 0;
  //   }
  //   sort(strs.begin(), strs.end());
  //   string firstElement = strs[0];
  //   string lastElement = strs[n - 1];
  //   string prefix = "";

  //   for (int i = 0; i < min(firstElement.length(), lastElement.length()); i++) {
  //       if (firstElement[i] == lastElement[i]) {
  //           prefix += firstElement[i];
  //       } else {
  //           break; 
  //       }
  //   }

  //   cout << "Longest Common Prefix: " << prefix << endl; 

      
      // given a two string s and t determine if they are isomorphic  leetcode 205

  //    string s = "egg", t = "add";
  //  bool isIsomorphic(string s, string t) {
  //     if(s.size()!=t.length()) return false;
  //    vector <int> v(150,1000);
  //    for(int i=0; i<s.length();i++){
  //     int idx = (int)s[i];
  //     if(v[idx]==1000) v[idx] = s[i] - t[i];
  //     else if(v[idx]!=(s[i]-t[i])) return false;
  //    }
  //    //emptying the vector
  //    for(int i=0; i<150; i++)
  //     v[i] = 1000;
  //    for(int i=0; i<t.length();i++){
  //     int idx = (int)t[i];
  //     if(v[idx]==1000) v[idx] = t[i] - s[i];
  //     else if(v[idx]!=(t[i]-s[i])) return false;
  //    }
  //    return true;
  //   }
  
       
     
      
 


  

    return 0;
}