class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=n-1,total=0;
        int l=0,b=0;
        while(i<=j){
            l=min(nums[i],nums[j]);
            b=j-i;
            total=max(total,l*b);
            if(nums[i]<nums[j])
            i++;
            else
            j--;
        }
        return total;
    }
};