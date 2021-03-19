int stepPerms(int n,int *ans) {
    if(n==1){
        ans[n]=1;
        return 1;
    }
    if(n==2){
        ans[n]=2;
        return 2;
    }
    if(n==3){
        ans[n]=4;
        return 4;
    }
    if(ans[n]!=-1){
        return ans[n];
    }
    int mod = (int) (pow(10, 10)) + 7;
    int x=stepPerms(n-1,ans);
    int y=stepPerms(n-2,ans);
    int z=stepPerms(n-3,ans);
    int temp1 = (int)((long)(x) % mod);
    int temp2 = (int)((long)(y) % mod);
    int temp3 = (int)((long)(z) % mod);
    ans[n] = (temp1 + temp2 + temp3) % mod;
    return ans[n];
}
int stepPerms(int n) {
    int *ans=new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    return stepPerms(n,ans); 
}