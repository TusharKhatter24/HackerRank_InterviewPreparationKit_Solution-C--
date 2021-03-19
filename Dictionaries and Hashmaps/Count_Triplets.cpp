long long countTriplets(vector<long> arr, long r) {
    unordered_map<long,long>lm;
    unordered_map<long,long>rm;
    long long count=0; 
    lm[arr[0]]++;
    for(int i=2;i<arr.size();i++){
        rm[arr[i]]++;
    }
    for(int i=1;i<arr.size();i++){
        if(i!=1){
            rm[arr[i]]--;
            if(rm[arr[i]]==0){
                rm.erase(arr[i]);
            }
        }
        long left=0;
        if(arr[i]%r==0&&lm.count(arr[i]/r)>0){
            left=lm[arr[i]/r];
        }
        long right=0;
        if(rm.count(arr[i]*r)>0){
            right=rm[arr[i]*r];
        }
        count+=(left*right);
        lm[arr[i]]++;
    }
    return count;
}