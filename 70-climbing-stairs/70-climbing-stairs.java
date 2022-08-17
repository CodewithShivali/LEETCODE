class Solution {
    public int climbStairs(int n) {
        int top[] = new int[n+1];
        int ans = rec(n, top);
        return ans;
    }
    
    private static int rec(int n, int top[]){
        if(n <= 1) return 1;
        if(top[n] > 0) return top[n];
        int op1 = rec(n-1, top);
        int op2 = rec(n-2, top);
        top[n] = op1 + op2;
        return  op1 + op2;
    }
}