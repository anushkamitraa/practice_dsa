class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> pos;
        for(int i=0; i<nums.size();i++)
            pos[nums[i]].push_back(i);
        int ans=1;
        for(auto& [val, idx]:pos){
            int left=0;
            for(int right=0; right<idx.size(); right++){
                int deletion = (idx[right] - idx[left]) - (right-left);
                while(deletion>k){
                    left++;
                    deletion = (idx[right] - idx[left]) - (right-left);
                }
                ans=max(ans, right-left+1);
            }
        }
        return ans;
    }
};
