#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

string reverseWords(string s) {
    stringstream ss(s);
    vector<string> temp;
    string local;

    while (ss >> local) {
        temp.push_back(local);
    }

    reverse(temp.begin(), temp.end());

    string ans = "";
    for (int i = 0; i < temp.size(); i++) {
        ans += temp[i];
        if (i != temp.size() - 1) ans += " ";  // Add space between words
    }

    return ans;
}

int main() {
    string input = "Hello World This is Codeforces";
    cout << "Original: " << input << endl;
    cout << "Reversed: " << reverseWords(input) << endl;

    return 0;
}
