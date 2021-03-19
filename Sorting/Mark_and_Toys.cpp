int maximumToys(vector<int> prices, int k) {
    if(prices.size()==0){
        return 0;
    }
    int a=0;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<k){
            a=1;
            break;
        }
    }
    if(a==0){
        return 0;
    }
    int p=prices[0];
    vector<int>::iterator it;
 
    it = prices.begin();
    prices.erase(it);
    int count=max((1+maximumToys(prices,k-p)),maximumToys(prices,k));
    return count;
}