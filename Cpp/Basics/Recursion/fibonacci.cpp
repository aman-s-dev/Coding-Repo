class Solution {
public:
    int fibR(int n) {
        if (n<=1){ return n;}
        return fib(n-1)+fib(n-2);
    }
// -----------------------
    int helper(int n, vector<int> &dp){
        if (n<=1) return n;
        if (dp[n]!=-1) return dp[n];
        return dp[n] = helper(n-1, dp) + helper(n-2, dp);
    }
    
    int fibM(int n) {
        vector<int> dp(n+1, -1);
        return helper(n, dp);
    }
// -----------------------
    int fibT(int n) {
        if (n<=1) return n;
        vector<int> dp(n+1, -1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2; i<=n; i++) dp[i] = dp[i-1] + dp[i-2];
        return dp[n];
    }
// ------------------
    int fibSO(int n){
        if (n<=1) return n;
        int a=0, b=1,c;
        for(int i=2; i<n; i++){
            c = a+b;
            a = b;
            b = c;
        }
        return b;
    }

};
