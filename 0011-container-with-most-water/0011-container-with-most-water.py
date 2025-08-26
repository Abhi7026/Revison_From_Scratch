class Solution:
    def maxArea(self, height: List[int]) -> int:
        n=len(height)
        i=0
        j=n-1
        total=0
        while(i<=j):
            l=min(height[i],height[j])
            b=j-i
            total=max(total,l*b)
            if(height[i]<height[j]):
                i+=1
            else:
                j-=1
        
        return total