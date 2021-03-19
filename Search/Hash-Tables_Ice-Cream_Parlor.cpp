void whatFlavors(vector<int> cost, int money) {
    unordered_map<int, int>m,n;
    for(int i=0;i<cost.size();i++){
        m[i]=cost[i];
        n[cost[i]]++;
    }
    for(int i=0;i<cost.size();i++){
        if((n.count(money-m[i])>0&&money-m[i]!=m[i])||(n.count(money-m[i])>0&& n[m[i]]>1)){
            int j;
            for(j=i+1;j<cost.size();j++){
                if(cost[j]==money-cost[i]){
                    break;
                }
            }
            cout<<i+1<<" "<<j+1<<endl;
            return;
        }
    }
} 