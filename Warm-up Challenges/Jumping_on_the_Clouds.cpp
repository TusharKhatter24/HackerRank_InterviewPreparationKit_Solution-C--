int jumpingOnClouds(vector<int> c) {
    int n;
    n=c.size();
    int count = 0;
     for (int i = 0; i < n-1; i++)
    {
     count++;
     if (i<n-2 && c[i+2]==0) i++;
    }
     return count;
} 