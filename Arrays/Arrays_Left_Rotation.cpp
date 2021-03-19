vector<int> rotLeft(vector<int> a, int d) {
    vector<int>temp;
    for(int i=0;i<d;i++){
        temp.push_back(a[i]);
    }
    for(int i=d;i<a.size();i++){
        a[i-d]=a[i];
    }
    int j=0;
    for(int i=a.size()-d;i<a.size();i++){
        a[i]=temp[j++];
    }
    for(int i=d;i>0;i--){
        temp.push_back(i);
    }
    return a;
}