string isValid(string s) 
{    
    unordered_map<char, int> m;
    unordered_map<int, int> n;  
  for(char c : s)
    m[c]++;
  for(auto it=m.begin(); it!=m.end(); it++)
    n[it->second]++;  
  int bal=0, maxf=0,count=0;
  for(auto it = n.begin(); it != n.end(); it++) {
     if(it->second > maxf) {
     maxf=it->second;
     bal =it->first;
     count=1; 
     }
     if(it->second==maxf){
         count++;
     }
  }
   //if(count!=1&&maxf>1)return "NO";
   int del=0,k=0;
  for(auto it=n.begin(); it!=n.end(); it++) {
     //count of character 1 more or less than balance factor
     if(it->first==1&&it->second==1)
        del++;
     //count of character that can't be balanced
     if(it->first==bal+1&&it->second==1)
        del++;
     if(it->first!=1&&it->first!=bal+1&&it->first!=bal)
     k++;   
  }
  if(del==1){
      return "YES";
  }
  return "NO";
}