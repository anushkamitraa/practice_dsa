class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans=0;
        for(int n:s){
            if(s.count(n-1))continue;
            int curr=n, len=1;
            while(s.count(curr+1))  {curr++; len++;}
            ans=max(ans, len);
        }
        return ans;
    }
};
