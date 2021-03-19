int hourglassSum(vector<vector<int>> arr) {
    int max=-63;
    for(int i=0;i<4;i++){    
        int sum=0;
        for(int j=0;j<4;j++){
            sum=arr[i+0][j+0]+arr[i+0][j+1]+arr[i+0][j+2]+arr[i+1][j+1]+arr[i+2][j+0]+arr[i+2][j+1]+arr[i+2][j+2];
            if(sum>max){
                max=sum;
            }
        }
    }
    return max;
}