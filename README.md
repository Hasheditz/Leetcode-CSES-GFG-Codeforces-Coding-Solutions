### Today's Question

# Delete Node in a Linked List
**Today - 5 May 2024**  
**Question:** [Delete Node in a Linked List](https://leetcode.com/problems/delete-node-in-a-linked-list)

## My Approach
To delete a node in a linked list, we don't have direct access to the previous node. However, we can simulate a deletion by copying the value of the next node into the current node to be deleted and then bypassing the next node.

Here's how the approach works:
1. We assign the pointer `temp` to the node after the node to be deleted.
2. We copy the value of the next node into the current node to be deleted.
3. We update the `next` pointer of the current node to skip the next node, effectively removing it from the linked list.

## Time and Auxiliary Space Complexity
- **Time Complexity:** O(1). Since we are not traversing the entire list, the time complexity remains constant.
- **Auxiliary Space Complexity:** O(1). We are not using any extra space that scales with the size of the input.

## Code (C++)

```cpp
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node -> next -> next;
        node -> val = node -> next -> val;
        node -> next = temp;
    }
};
```

## Contribution and Support
I always encourage contributors to participate in the discussion forum for this repository.

If you have a better solution or any queries/discussions related to the Problem of the Day solution, please visit our discussion section. We welcome your input and aim to foster a collaborative learning environment.

If you find this solution helpful, consider supporting us by giving a ⭐ star to the[repository](https://github.com/Hasheditz/leetcode-solutions).

