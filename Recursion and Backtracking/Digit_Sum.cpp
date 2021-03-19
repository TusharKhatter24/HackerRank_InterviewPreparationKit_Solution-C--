int length(int x){
    if(x/10==0){
        return 1;
    }
    return length(x/10)+1;
}
int superDigit(string s){
    int j=s.size()-1;
    int x=0;
    while(j>=0){
        x+=(s[j]-'0');
        j--;
    }
    if(x/10==0)return x;
    string ans="";
    int i=length(x);
    while(i>0){
        ans+=(x/pow(10,i-1))+'0';
        x=x%((int)pow(10,i-1));
        i--;
    }
    return superDigit(ans);
}
// Complete the superDigit function below.
int superDigit(string n, int k) {
    int x=superDigit(n)*k;
    if(x/10==0)return x;
    string ans="";
    int i=length(x);
    while(i>0){
        ans+=(x/pow(10,i-1))+'0';
        x=x%((int)pow(10,i-1));
        i--;
    }
    return superDigit(ans);
}