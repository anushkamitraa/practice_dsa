class Solution {
public:
    int maxVowels(string s, int k) {
        string vowels="aeiou";
        int count=0, ans=0;

        for(int i=0; i<k; i++)
            if(vowels.find(s[i]) != string::npos)   count++;
        ans=count;

        for(int i=k; i<s.size(); i++){
            if(vowels.find(s[i]) != string::npos)   count++;
            if(vowels.find(s[i-k]) != string::npos)   count--;
            ans=max(ans,count);
        }
        return ans;
    }
};
