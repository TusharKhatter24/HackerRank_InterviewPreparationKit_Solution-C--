long fibonacci(int n, int *ans) {
    // Complete the function.
    if(n==0||n==1){
        ans[n]=n;
        return n;
    }
    if(ans[n]!=-1){
        return ans[n];
    }
    long k=fibonacci(n-1,ans)+fibonacci(n-2,ans);
    ans[n]=k;
    return k;
}

long fibonacci(int n) {
    // Complete the function.
    int *ans= new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    return fibonacci(n,ans);
}
/*long fibonacci(int n) {
    int *ans = new int[n+1];
    ans[0] = 0;
    ans[1] = 1;
    for(int i = 2; i <= n; i++) {
        ans[i] = ans[i-1] + ans[i-2];
    }
    return ans[n];
}*/