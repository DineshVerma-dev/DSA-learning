  vector<int> arr = {1,2,4,5,9,15,18,21,24};
  int x = 20;
  int low = 0;
  int high = arr.size() - 1;
   while(low <=high ) {
    int mid = low + (high-low)/2;
    if(arr[mid] < x){
       low = mid + 1;

    } else {
        high = mid + 1 ;
    }
     if(arr[low]  >  arr[mid]  && arr[low] > x && arr[mid] < x) {
            cout<<arr[mid]<<" ";
    }
   
  } //time complexity O(logn)
 