void validcombination(vector<string> v, vector<string> arr, int n, int idx){
    if(n == arr.size()){
        for(int i=0;i<v.size(); i++){
             cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    
    for(int i=idx; i<n; i++){
        v.push_back(arr[i]);
        validcombination(v,arr,n,i);
        v.pop_back();
    }
    
}