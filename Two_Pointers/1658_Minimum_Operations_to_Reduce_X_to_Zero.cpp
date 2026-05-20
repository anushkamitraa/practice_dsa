class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target=0, left=0, sum=0, maxlen=-1;
        for(int n:nums) target+=n;
        target-=x;
        if(target<0)    return -1;
        if(target==0)   return nums.size();
        for(int right=0; right<nums.size(); right++){
            sum+=nums[right];
            while(sum>target)   sum-=nums[left++];
            if(sum==target) maxlen=max(maxlen, right-left+1);
        }
        return maxlen==-1 ? -1 : nums.size()-maxlen;
    }
};
