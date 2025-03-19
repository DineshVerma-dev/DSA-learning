#include<bits/stdc++.h>
using namespace std;

int rotate(vector<vector<int>>& triangle) {
    int sumofmin = 0;
    for(int i=0; i<triangle.size(); i++){
        int minim = INT_MAX;
        for(int j=0; j<triangle[i].size(); j++){
            if(triangle[i].size() == 1) minim = triangle[i][j];
            else minim = min(minim, triangle[i][j]);
        }
        sumofmin = minim + sumofmin;
    } 
    return sumofmin;
}

int main(){
    vector<vector<int>> triangle = {{-1},{2,3},{1,-1,-3}};
   
    cout << rotate(triangle) << endl;
}
