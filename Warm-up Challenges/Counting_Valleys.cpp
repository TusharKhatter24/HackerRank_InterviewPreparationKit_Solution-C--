int countingValleys(int steps, string path) {
    int count=0,sum=0;
    for(int i=0;i<steps;i++){
        if(path[i]=='U'){
            sum++;
        }else{
            sum--;
        }
        if(sum==0){
            if(path[i]=='U'){
                count++;
            }
        }
    }
    return count;
}
 