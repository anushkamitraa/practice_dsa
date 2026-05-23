class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> j(jewels.begin(), jewels.end());
        int cnt=0;
        for(char c:stones)
            if(j.count(c))
                cnt++;
    
        return cnt;
    }
};
