int makeAnagram(string a, string b) {
    unordered_map<char, int>m;
    int count=0;
    for(int i=0;i<a.size();i++){
        m[a[i]]++;
    }
    for(int i=0;i<b.size();i++){
        if(m.count(b[i])>0){
            m[b[i]]--;
            if(m[b[i]]==0){
                m.erase(b[i]);
            }
        }else{
            count++;
        }
    }
    for (auto i = m.begin(); i != m.end(); i++){
	count+=i->second;
    }     
    return count;
}