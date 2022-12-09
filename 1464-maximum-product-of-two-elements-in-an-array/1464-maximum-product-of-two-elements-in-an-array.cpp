class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> pq;
        for(auto itr : nums)
            pq.push(itr);
        
        while(!pq.empty())
        {
            int a = pq.top();
            pq.pop();
            int b = pq.top();
            pq.pop();
            
            return (a-1)*(b-1);
        }
        
        return 0;
    }
};