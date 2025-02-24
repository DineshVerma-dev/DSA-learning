#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
   
    for(int i=0; i<matrix.size();i++){
        for(int j=0; j<=i; j++){
             int temp = matrix[i][j];
             matrix[i][j] = matrix[j][i];
             matrix[j][i] = temp;
        }
    }
   
    for(int i=0; i<matrix[0].size(); i++){
        int j=0; 
       int k=matrix[0].size()-1;
       while(j<k){
        int temp = matrix[i][j];
        matrix[i][j] = matrix[i][k];
        matrix[i][k] = temp;
        j++;
        k--;
      }
    }
    
      
}

int main(){
    vector<vector<int>> matrix = {{1,2,3}, {4,5,6}, {7,8,9}};
    rotate(matrix);
    for(int i=0; i<matrix.size();i++){
        for(int j=0; j<matrix[0].size(); j++){
             cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}