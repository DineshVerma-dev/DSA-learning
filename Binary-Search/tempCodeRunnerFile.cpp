   vector <int> arr ={0,1,3,4,6,8,9,10};

   int lo = 0;
   int hi = arr.size() - 1;
 
   while(lo<=hi){
       int mid = lo + (hi-lo)/2;
     if(mid == arr[mid]){
       lo = mid ;
     } else {
        cout<<mid<<" ";
        break;
        
     }

   }