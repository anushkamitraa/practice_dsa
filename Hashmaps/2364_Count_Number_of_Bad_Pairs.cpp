class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n=nums.size();
        long long total=n*(n-1)/2;
        unordered_map<int, long long> freq;
        for(int i=0; i<n; i++)
            freq[nums[i]-i]++;
        long long good=0;
        for(auto& [val, cnt]:freq)
            good+=cnt*(cnt-1)/2;
        return total-good;
    }
};
