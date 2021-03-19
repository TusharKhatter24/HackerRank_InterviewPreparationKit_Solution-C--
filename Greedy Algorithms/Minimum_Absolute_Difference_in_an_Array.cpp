int minimumAbsoluteDifference(vector<int> arr) {
    sort(arr.begin(), arr.end());
    int ans=arr[1]-arr[0];
    for(int i=2;i<arr.size();i++){
        if(arr[i]-arr[i-1]<ans)ans=arr[i]-arr[i-1];
    }
    return ans;
} 