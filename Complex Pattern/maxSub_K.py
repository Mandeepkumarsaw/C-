class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
      np=len(nums)
      left = 0
      maxlen = 0

      mp = {}

      for right in range(np):
        mp[nums[right]] = mp.get(nums[right],0) + 1

        while mp[nums[right]] > k:
            mp[nums[left]] -= 1
            left += 1

        maxlen = max(maxlen,right-left+1)

      return maxlen

def main():
    sol = Solution()

    # Test cases
    nums1, k1 = [1, 2, 2, 3, 1, 2, 2], 2 
    nums2, k2 = [1, 1, 1, 1], 1
    nums3, k3 = [1, 2, 3, 4, 5], 1
    nums4, k4 = [0, 0, 1, 2, 2, 3, 3, 3], 2

    print("Test 1:", sol.maxSubarrayLength(nums1, k1))  
    print("Test 2:", sol.maxSubarrayLength(nums2, k2))  # Expected 1
    print("Test 3:", sol.maxSubarrayLength(nums3, k3))  # Expected 5
    print("Test 4:", sol.maxSubarrayLength(nums4, k4))  # Expected 6


if __name__ == "__main__":
        main()