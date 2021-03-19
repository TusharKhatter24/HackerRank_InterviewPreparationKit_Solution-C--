int pairs(int k, vector<int> arr) {
    int count=0;
    unordered_map<int,int>m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++){
        if(m.count(k+i->first)>0){
            count+=i->second*m[k+i->first];
        }
        if(m.count(i->first-k)>0){
            count+=i->second*m[i->first-k];
        }
    }
    return count/2;
}