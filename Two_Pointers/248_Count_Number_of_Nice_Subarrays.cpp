class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int> cnt;
        cnt[0]=1;
        int odds=0, ans=0;
        for(int n:nums){
            odds+=n%2;
            if(cnt.count(odds-k))
                ans+=cnt[odds-k];
            cnt[odds]++;
        }
        return ans;
    }
};
