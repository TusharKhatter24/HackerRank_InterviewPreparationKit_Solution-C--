string twoStrings(string s1, string s2) {
    unordered_map<char,int>m;
    for(int i=0;i<s1.size();i++){
        m[s1[i]]++;
    }
    for(int i=0;i<s2.size();i++){
        if(m.count(s2[i])>0){
            return "YES";
        }
    }
    return "NO";
}