int i=0; 
    int j=matrix[0].size()-1;
    while(i<j){
        int temp = matrix[i][j];
        matrix[i][j] = matrix[j][i];
        matrix[j][i] = temp;
        i++;
        j--;
    }