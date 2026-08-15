from typing import List

class Solution:
    def maximumLengthSubstring(self, s: str) -> int:
        n = len(s)
        freq = [0] * 256   # frequency array for ASCII chars
        left, ans = 0, 0

        for right in range(n):
            freq[ord(s[right])] += 1

            # shrink window if any char appears > 2
            while freq[ord(s[right])] > 2:
                freq[ord(s[left])] -= 1
                left += 1

            ans = max(ans, right - left + 1)

        return ans


def main():
    sol = Solution()

    # Test cases
    s1 = "bcbb"          # Expected 3 ("cbb")
    s2 = "aabbcc"        # Expected 6 (all valid, each ≤ 2)
    s3 = "abcabcabc"     # Expected 6 ("abcabc")
    s4 = "aaaa"          # Expected 2 ("aa")

    print("Test 1:", sol.maximumLengthSubstring(s1))
    print("Test 2:", sol.maximumLengthSubstring(s2))
    print("Test 3:", sol.maximumLengthSubstring(s3))
    print("Test 4:", sol.maximumLengthSubstring(s4))


if __name__ == "__main__":
    main()
