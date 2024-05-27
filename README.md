# Special Array with Binary Search

## Intuition
To find a special integer `x` such that there are exactly `x` numbers in the array that are greater than or equal to `x`, we can leverage binary search. The key observation is that if an array has `x` elements greater than or equal to `x`, and if we sort the array, there exists a position where this condition can be evaluated. This allows us to use binary search to efficiently narrow down the potential values of `x`.

## Approach
1. **Binary Search Initialization**:
   - Initialize `low` to 0 and `high` to the size of the array `n`. The search range is from 0 to `n` because the number of elements greater than or equal to any value `x` can be between 0 and `n`.
   
2. **Counting Function**:
   - Implement a helper function `cnt` that takes the array and a middle value `mid`. This function counts how many elements in the array are greater than or equal to `mid`.

3. **Binary Search Logic**:
   - Perform binary search while `low` is less than or equal to `high`.
   - Calculate the middle value `mid` as the average of `low` and `high`.
   - Use the `cnt` function to count how many elements are greater than or equal to `mid`.
   - If the count equals `mid`, then `mid` is the special value, and return it.
   - If the count is greater than `mid`, it means we need to look for a larger value, so adjust `low` to `mid + 1`.
   - If the count is less than `mid`, it means we need to look for a smaller value, so adjust `high` to `mid - 1`.

4. **Return Result**:
   - If the loop completes without finding a special value, return -1 indicating no such value exists.

## Complexity
- **Time complexity**: 
  - The time complexity of the binary search approach is (O(log n)). 
  - Within each iteration of the binary search, the `cnt` function is called, which has a linear time complexity \(O(n)\).
  - Therefore, the overall time complexity is (O(n log n)).

- **Space complexity**: 
  - The space complexity is \(O(1)\) since we are using a constant amount of extra space for variables.

# Code
#### Brute force
``` cpp
class Solution {
public:
    int specialArray(vector<int>& nums) {

        int n = nums.size();

        for(int i = 1 ; i <= n ; i++)
        {
            int cnt = 0;
            for(int j = 0 ; j < n ; j++)
            {
                if(nums[j] >= i) cnt++;
            }

            if(cnt == i) return i;
        }

        return -1;
    }
};

```
#### Binary Search Approach
``` cpp
class Solution {
public:
    int cnt(const vector<int>& nums, int mid) {
        int cnt = 0;
        for (int num : nums) {
            if (num >= mid) cnt++;
        }
        return cnt;
    }

    int specialArray(vector<int>& nums) {

        int n = nums.size();

        int low = 1, high = n;  

        while (low <= high) {
            
            int mid = (low + high) / 2;
            int count = cnt(nums, mid);

            if (count == mid) {
                return mid;
            } else if (count > mid) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};

```
---

## Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps me to keep providing high-quality solutions.

![Like and Upvote](https://qph.cf2.quoracdn.net/main-qimg-98933841f8b334fc12908bcc17e361bc.webp)
