class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size()-1;

        //handlining the case for lexicographical next 
        while(n>0 && nums[n-1]>=nums[n])
        n--;
        if(n==0){
            reverse(nums.begin(),nums.end());
            return;
        }


        ///using two pointer approach
        int index=nums.size()-1;
        while(index>=n && nums[n-1]>=nums[index]){
            index--;
        }
        swap(nums[index],nums[n-1]);
        reverse(nums.begin()+n,nums.end());
        return;
    }
};