#include <bits/stdc++.h>
using namespace std;

void spiralHelper(vector<vector<int>>& matrix, int top, int bottom, int left, int right, vector<int>& result) { 
    if (top > bottom || left > right) return;
    for (int i = left; i <= right; i++) {
        result.push_back(matrix[top][i]);
    }
    top++; 
    for (int i = top; i <= bottom; i++) {
        result.push_back(matrix[i][right]);
    }
    right--; 
    if (top <= bottom) {
        for (int i = right; i >= left; i--) {
            result.push_back(matrix[bottom][i]);
        }
        bottom--; 
    }
    if (left <= right) {
        for (int i = bottom; i >= top; i--) {
            result.push_back(matrix[i][left]);
        }
        left++; 
    }
    spiralHelper(matrix, top, bottom, left, right, result);
}

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    int m = matrix.size(), n = matrix[0].size();
    spiralHelper(matrix, 0, m - 1, 0, n - 1, result);
    return result;
}

string largestOddNumber(string num) {
    for (int i = num.size() - 1; i >= 0; i--) {
        if ((num[i] - '0') % 2 != 0) {
            return num.substr(0, i + 1);
        }
    }
    return "";
}
for 
int main() {
    cout<<largestOddNumber("4206")<<endl;
    // vector<vector<int>> matrix = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // vector<int> result = spiralOrder(matrix);
    // cout << "Spiral Order: ";
    // for (int num : result) {
    //     cout << num << " ";
    // }
    // cout << endl;
    return 0;
}