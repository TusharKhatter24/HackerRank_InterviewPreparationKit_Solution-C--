void checkMagazine(vector<string> magazine, vector<string> note) {
    unordered_map<string,int>m;
    for(int i=0;i<magazine.size();i++){
        m[magazine[i]]++;
    }
    for(int i=0;i<note.size();i++){
        if(m.count(note[i])>0){
            m[note[i]]--;
            if(m[note[i]]==0){
                m.erase(note[i]);
            }
        }else{
            cout<<"No";
            return; 
        }
    }
    cout<<"Yes";
    return;
}