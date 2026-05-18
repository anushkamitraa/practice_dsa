class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left=0, right=people.size()-1, boats=0;
        sort(people.begin(), people.end());
        while(left<=right){
            if(people[left]+people[right] <= limit) left++;
            right--;
            boats++;
        }
        return boats;
    }
};
