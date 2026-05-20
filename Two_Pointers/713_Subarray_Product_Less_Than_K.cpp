class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)    return 0;
        int left=0, pro=1, count=0;
        for(int right=0; right<nums.size(); right++){
            pro*=nums[right];
            while(pro>=k)   pro/=nums[left++];
            count+=right-left+1;
        }
        return count;
    }
};
