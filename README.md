# 1404. Number of Steps to Reduce a Number in Binary Representation to One

**Difficulty**: ![Medium](https://img.shields.io/badge/Medium-yellow)  
**Related Topics**: ![String](https://img.shields.io/badge/String-blue) ![Bit Manipulation](https://img.shields.io/badge/Bit%20Manipulation-blue)  
**Date**: May 29, 2024

[Link to the question](https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/description/)

## Editorial

This problem requires us to find the number of steps to reduce a given binary string to "1". The allowed operations are:
1. If the string ends in '0', remove the last character.
2. If the string ends in '1', add one to the binary number represented by the string.

### Solution Explanation

To solve this problem, we can use a greedy approach where we continuously perform the allowed operations until the binary string reduces to "1".

#### Key Steps:
1. **Count Ones Function**: A helper function `countOnes` is created to count the number of '1's in the string. This helps in determining if the entire string is composed of '1's.
2. **Main Logic in `numSteps`**:
   - Initialize a step counter.
   - Iterate until the string becomes "1".
   - If the string ends in '0', remove the last character.
   - If the string ends in '1':
     - Check if all characters are '1'. If true, transform the string to a single '1' followed by all '0's and increment the step.
     - Otherwise, add one to the binary string by flipping '1' to '0' from the end until a '0' is found, which is then flipped to '1'.
   - Increment the step counter after each operation.

This approach ensures we minimize the number of operations needed to reduce the binary string to "1".

### Code

```cpp
class Solution {
public:
    int countOnes(const string& s) {
        int count = 0;
        for (char ch : s) {
            if (ch == '1') {
                count++;
            }
        }
        return count;
    }
	
    int numSteps(string s) {
        int steps = 0;
        while (s != "1") {
            if (s.back() == '0') {
                s.pop_back();
            } else {
                if (countOnes(s) == s.size()) {
                    // All characters are '1'
                    s = string(s.size(), '0');
                    s.insert(s.begin(), '1');
                } else {
                    // Add one to the binary number
                    for (int i = s.size() - 1; i >= 0; --i) {
                        if (s[i] == '1') {
                            s[i] = '0';
                        } else {
                            s[i] = '1';
                            break;
                        }
                    }
                }
            }
            steps++;
        }
        return steps;
    }
};
```

## Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps me to keep providing high-quality solutions.

![Like and Upvote](https://qph.cf2.quoracdn.net/main-qimg-98933841f8b334fc12908bcc17e361bc.webp)
