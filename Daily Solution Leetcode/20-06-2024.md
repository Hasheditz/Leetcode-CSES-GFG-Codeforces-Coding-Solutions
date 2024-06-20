### Editorial for the Problem: [Magnetic Force Between Two Balls](https://leetcode.com/problems/magnetic-force-between-two-balls/)

## **Date**: June 20, 2024

**Difficulty**: ![Medium](https://img.shields.io/badge/Medium-yellow)  
**Related Topics**: ![Array](https://img.shields.io/badge/Array-blue) ![Binary Search](https://img.shields.io/badge/Binary%20Search-blue)

<p>
  <a href="https://leetcode.com/problems/magnetic-force-between-two-balls/">
    <img src="https://img.shields.io/badge/Link%20To%20The%20Question-blue" alt="Link To The Question">
  </a>
</p>

## Editorial

The problem is to determine the maximum possible minimum distance between any two balls when they are placed in different positions from the given array.

### Approach

This problem can be efficiently solved using a binary search on the possible distances. The idea is to find the maximum minimum distance such that we can place all \( m \) balls with at least this distance between any two of them.

#### Key Steps:

1. **Binary Search Initialization**:
    - Sort the positions array to facilitate the placement of balls in order.
    - Set `low` to 1, the smallest possible distance.
    - Set `high` to the difference between the maximum and minimum positions.

2. **Binary Search Loop**:
    - Calculate `mid` as the average of `low` and `high`.
    - Use a helper function `fix` to count the number of balls that can be placed with at least `mid` distance between them.
    - If the number of balls placed is greater than or equal to \( m \), adjust the search to find a potentially larger distance by setting `low` to `mid + 1`.
    - If the number of balls placed is less than \( m \), adjust the search to find a smaller distance by setting `high` to `mid - 1`.

3. **Helper Function `fix`**:
    - This function counts the number of balls that can be placed with at least `mid` distance between them.
    - It iterates through the sorted positions and places balls only if the current position is at least `mid` distance from the last placed ball.

### Code

```cpp
class Solution {
    int fix(vector<int> &pos, int m, int mid) {
        int cnt = 1, n = pos.size();
        int curr = pos[0];

        for (int i = 1; i < n; i++) {
            if (abs(curr - pos[i]) >= mid) {
                cnt++;
                curr = pos[i];
            }
        }

        return cnt;
    }

public:
    int maxDistance(vector<int>& pos, int m) {
        int n = pos.size();
        sort(pos.begin(), pos.end());

        int low = 1, high = pos[n - 1] - pos[0];

        while (low <= high) {
            int mid = (low + high) / 2;
            if (fix(pos, m, mid) >= m) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return high;
    }
};
```
### Explanation of Code

**Helper Function `fix`**:

- Initializes `cnt` to 1 (since we place the first ball at the first position) and `curr` to the first position.
- Iterates through the `pos` array, placing a ball only if the current position is at least `mid` distance away from the last placed ball (`curr`).
- Returns the total number of balls placed.

**Main Function `maxDistance`**:

- Sorts the `pos` array to facilitate the placement of balls in order.
- Initializes `low` to 1 and `high` to the difference between the maximum and minimum positions in `pos`.
- Uses binary search to find the maximum possible minimum distance where \( m \) balls can be placed.
- Adjusts the search range based on whether placing balls with the current `mid` distance is feasible.

**Efficiency**:

- The binary search approach ensures a time complexity of O(N log D), where N is the number of positions and D is the range of distances between the minimum and maximum positions, making it efficient for large inputs.

### Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps in continuing to provide high-quality solutions.

<p align="center">
  <img src="https://preview.redd.it/petition-to-change-the-upvote-and-downvote-button-to-like-v0-jbrdq402054c1.jpg?width=640&crop=smart&auto=webp&s=8225d21c98a245f44fd6c1f74a4c6c67f0061f25" width="280">
</p>
