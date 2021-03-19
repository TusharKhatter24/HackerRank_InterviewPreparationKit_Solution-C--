int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> m;
    int count=0;
    for(int i=0;i<n;i++){
        m[ar[i]]++;
        if(m[ar[i]]==2){
            count++;
            m[ar[i]]=0;
        }
    }
    return count;
}