vector<int> vec(100002);

int solve(int nStairs,int i){
    if(vec[i]!=-1){
        return vec[i];
    }
    if(i==nStairs){
        return 1;
    }
    if(i>nStairs){
        return 0;
    }
    vec[i]=(solve(nStairs,i+1)+solve(nStairs,i+2))%1000000007;
    return vec[i];
}
int countDistinctWays(int nStairs) {
    //  Write your code here.
    for(int i=0;i<=100001;i++){
        vec[i]=-1;
    }
   int ans=solve(nStairs,0);
    return ans;
}
