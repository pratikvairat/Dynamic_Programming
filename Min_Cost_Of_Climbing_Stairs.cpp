class Solution {
public:
    int vec[1002];
    int solve(vector<int>& cost,int n){
        if(n==0){
           return cost[0];
        }
        if(n==1){
           return cost[1];
        }
        if(vec[n]!=-1){
            return vec[n];
        }
        vec[n]=cost[n]+min(solve(cost,n-1),solve(cost,n-2));
        return vec[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        for(int i=0;i<1002;i++){
            vec[i]=-1;
        }
        int ans=min(solve(cost,n-1),solve(cost,n-2));
        return ans;
    }
};
