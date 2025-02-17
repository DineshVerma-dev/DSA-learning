void printSubset(string ans ,string original , bool flag){
    
    if(original == ""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    if(original.length() == 1) {
        if(flag == true)  printSubset(ans+ch,original.substr(1),true);
        printSubset(ans,original.substr(1),true);
        return;
    } 
    char dh = original[1];
    if(ch == dh) {
            if(flag == true)  printSubset(ans+ch,original.substr(1),true);
            printSubset(ans,original.substr(1),false);
    }
    else {
        if(flag == true)  printSubset(ans+ch,original,true);
        printSubset(ans,original,false);
    }
    
}