class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int right=0, left=0, sums=0;
        double ans=INT_MIN;

        for(right=0; right<nums.size(); right++){
            sums+=nums[right];

            while(right-left+1>k){
                sums-=nums[left];
                left++;
            }

            if(right-left+1==k){
                ans=max(ans,(double)sums/k);
            }
        }
        return ans;
    }
};
