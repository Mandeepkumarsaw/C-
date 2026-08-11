class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        n = len(nums)
        total = nums[0]
        i = 1
        while i < n and nums[i] == nums[i-1] + 1:
            total += nums[i]
            i += 1
        
        seen = set(nums)
        ans = total
        while ans in seen:
            ans += 1
        return ans


print(Solution().missingInteger([1,2,3,2,5]))   # Output: 6
print(Solution().missingInteger([3,4,5,1,12,14,13]))  # Output: 15
