class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int ans=0;
        for(auto it:s){
            if(s.find(it-1)==s.end()){
                int current=it;
                int count=1;
                while(s.find(current+1)!=s.end()){
                    count++;
                    current++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};