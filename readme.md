# **Date**: June 3, 2024

# 409. Longest Palindrome

**Difficulty**: ![Easy](https://img.shields.io/badge/Easy-Green)  
**Related Topics**: ![String](https://img.shields.io/badge/String-blue) ![Hash Table](https://img.shields.io/badge/Hash%20Table-blue)

<p>
  <a href="https://github.com/Hasheditz/Leetcode-CSES-GFG-Codeforces-Coding-Solutions?tab=readme-ov-file#longest-palindrome" style="margin-right: 5px;">
    <img src="https://img.shields.io/badge/All%20Problem%20Solutions-green" alt="All Problem Solutions">
  </a>
  <a href="https://leetcode.com/problems/longest-palindrome/">
    <img src="https://img.shields.io/badge/Link%20To%20The%20Question-blue" alt="Link To The Question">
  </a>
</p>

## Editorial

This problem requires us to find the length of the longest palindrome that can be built with the given string `s`.

### Solution Explanation

To solve this problem efficiently, we need to count the frequency of each character in the string. The idea is to use the characters with even frequencies fully and use the odd frequencies such that all characters except one can be paired. This ensures the maximum length of the palindrome.

#### Key Steps:
1. **Count Character Frequencies**: Use a hash table (or an array for fixed character set) to count the frequency of each character in the string `s`.
2. **Calculate the Length**:
   - For each character, if the frequency is even, add it entirely to the palindrome length.
   - If the frequency is odd, add the largest even number less than or equal to the frequency (i.e., `freq - 1`) to the palindrome length.
3. **Adjust for Odd Character**: If there is any character with an odd frequency, add 1 to the length to account for the center character of the palindrome.

### Code

```cpp
class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> mp;
        int ans = 0;

        for (auto i : s) {
            mp[i]++;
        }

        for (auto i : mp) {
            if (!(i.second & 1)) ans += i.second;
            else ans += i.second - 1;
        }

        if (ans == s.size()) return ans;
        else return ans + 1;
    }
};
```
### Approach Without Using The Hashmap
``` cpp
class Solution {
public:
    int longestPalindrome(string s) {

        sort(s.begin() , s.end());

        int ans = 0;
        int n = s.size();

        int cnt = 0;

        for(int i = 1 ; i <= n ; i++)
        {

            if(s[i-1] == s[i]) {cnt++;}
            
            else
            {
                if(!(cnt&1)) ans += cnt;
                else ans += cnt+1;
                cnt = 0;
            }
        }

        if(ans == n) return ans;
        else return ans + 1;
    }
};
```
## Complexity Analysis
- **Time Complexity**: O(n), where n is the length of the string s. This is because we are iterating through the string to count the frequencies and then iterating through the hash table.
- **Space Complexity**: O(1), considering the hash table will contain at most a fixed number of characters (256 in the extended ASCII set).

## Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps me to keep providing high-quality solutions.

<p align="center">
  <img src="https://preview.redd.it/petition-to-change-the-upvote-and-downvote-button-to-like-v0-jbrdq402054c1.jpg?width=640&crop=smart&auto=webp&s=8225d21c98a245f44fd6c1f74a4c6c67f0061f25" width="280">
</p>
