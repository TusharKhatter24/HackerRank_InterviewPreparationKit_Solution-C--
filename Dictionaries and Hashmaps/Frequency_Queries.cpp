vector<int> freqQuery(vector<vector<int>> queries) {
    unordered_map<int,int>m;
    unordered_map<int,int>n;
    vector<int> v; 
    for(int i=0;i<queries.size();i++){
        if(queries[i][0]==1){
            if(m.count(queries[i][1])>0){
                n[m[queries[i][1]]]--;
                if(n[m[queries[i][1]]]==0){
                    n.erase(m[queries[i][1]]);
                }
            }
            m[queries[i][1]]++;
            n[m[queries[i][1]]]++;
        }else if(queries[i][0]==2){
            if(m.count(queries[i][1])>0){
                n[m[queries[i][1]]]--;
                if(n[m[queries[i][1]]]==0){
                    n.erase(m[queries[i][1]]);
                }
                m[queries[i][1]]--;
                n[m[queries[i][1]]]++;            
                if(m[queries[i][1]]==0){
                    m.erase(queries[i][1]);
                }
            }
        }else{
            if(n.count(queries[i][1])>0){
                v.push_back(1);
            }else{
                v.push_back(0);
            }
        }
    }
    return v;
}