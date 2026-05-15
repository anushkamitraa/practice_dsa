class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;

        if(s.size()<p.size())
            return res;

        vector<int> freq1(26,0), freq2(26,0);

        for(int i=0; i<p.size(); i++) {
            freq1[p[i]-'a']++;
            freq2[s[i]-'a']++;
        }

        if(freq1 == freq2)
            res.push_back(0);

        for(int i=p.size(); i<s.size(); i++) {
            freq2[s[i]-'a']++;
            freq2[s[i-p.size()]-'a']--;

            if(freq1==freq2)
                res.push_back(i-p.size()+1);
        }
        return res;
    }
};
