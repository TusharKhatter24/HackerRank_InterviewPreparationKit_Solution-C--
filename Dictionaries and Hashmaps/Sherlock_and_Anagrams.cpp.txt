int sherlockAndAnagrams(string s) {
    int count=0;
    unordered_map<string,int>m;
    for(int i=0;i<s.size();i++){
        for(int j=0;j<s.size()-i;j++){
            string s2=s.substr(j,i+1);
            sort(s2.begin(),s2.end());
            if(m.count(s2)>0){
                count+=m[s2];
            }
            m[s2]++;
        }
    }
    return count;
}