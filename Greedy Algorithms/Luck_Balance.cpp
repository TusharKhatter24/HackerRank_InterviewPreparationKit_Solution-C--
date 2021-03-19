int luckBalance(int k, vector<vector<int>> contests) {
    priority_queue<int,vector<int>,    greater<int>>pq;
    int count=0,ans=0;
    for(int i=0;i<contests.size();i++){
        if(contests[i][1]==1){
            count++;
            pq.push(contests[i][0]);
        }
        ans+=contests[i][0];
    }
    while(count>k){
        ans-=2*pq.top();
        pq.pop();
        count--;
    }
    return ans;
}