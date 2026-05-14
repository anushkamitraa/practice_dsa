class Solution {
public:
    int lengthOfLastWord(string s) {

        s.erase(s.find_last_not_of(' ') + 1);

        int i=0;

        for(i=s.length()-1; i>=0; i--){
            if(s[i]==' '){
                break;
            }
        }

        return s.length()-i-1;
    }
};
