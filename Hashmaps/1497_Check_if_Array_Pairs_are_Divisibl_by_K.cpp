class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> freq(k,0);
        for(int n:arr)  freq[((n%k)+k)%k]++;
        if(freq[0]%2!=0)    return false;
        for(int r=1; r<=k/2; r++)
            if(freq[r]!=freq[k-r])
                return false;
        return true;
    }
};
