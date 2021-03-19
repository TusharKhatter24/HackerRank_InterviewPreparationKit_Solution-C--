long repeatedString(string s, long n) {
    long count=0;
    long ans=n/s.size();
    long t=n%s.size();
    long x=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            if(i<t){
                x++;
            }
            count++;
        }
    }
    return (ans*count)+x;
}