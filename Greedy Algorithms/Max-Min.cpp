int maxMin(int k, vector<int> arr) {
    k-=1;
    sort(arr.begin(),arr.end());
    int min=INT_MAX; 
    for(int i=0;i<arr.size()-k;i++){
        int temp=arr[i+k]-arr[i];
        if(temp<min){
            min=temp;
        }
    }
    return min;    
}