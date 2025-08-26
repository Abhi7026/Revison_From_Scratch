class Solution:
    def trap(self, nums: List[int]) -> int:
        n=len(nums)
        l=0
        r=n-1
        total=0
        leftmax=nums[l]
        rightmax=nums[r]
        while(l<r):
            if(leftmax<rightmax):
                l+=1
                leftmax=max(leftmax,nums[l])
                total+=leftmax-nums[l]
            else:
                r-=1
                rightmax=max(rightmax,nums[r])
                total+=rightmax-nums[r]
        return total
