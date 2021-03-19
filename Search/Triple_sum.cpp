long triplets(vector<int> a, vector<int> b, vector<int> c) {
    sort ( a.begin() , a.end() );
    sort ( b.begin() , b.end() );
    sort ( c.begin() , c.end() );
    
    a.erase(unique(a.begin(),a.end()),a.end());
    b.erase(unique(b.begin(),b.end()),b.end());
    c.erase(unique(c.begin(),c.end()),c.end());
    long i=0,j=0,k=0,res=0;
    while ( j < b.size () ){  
        while ( i < a.size() && a[i] <= b[j] ) 
             i++;
       while ( k < c.size() && c[k] <= b[j] )
             k++;

     res+=i*k;
     j++;
    }
    return res;
} 