class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n=nums.size(), mod=1e9+7;
        vector<int> pw(n);
        pw[0]=1;
        for(int i=1; i<n; i++)
            pw[i]=(pw[i-1]*2)%mod;
        int ans=0, left=0, right=n-1;
        while(left <= right){
            if(nums[left]+nums[right] <= target){
                ans=(ans+pw[right-left])%mod;
                left++;
            }
            else right--;
        }
        return ans;
    }
};
