////Palindrome Check for Linked List
Algorithm:
The goal is to check if the linked list reads the same forwards and backwards. We will follow these steps:

1.Find the Middle Node:
Use two pointers: slow and fast.
Move slow one step at a time, and fast two steps at a time.
When fast reaches the end, slow will be at the middle of the list.

2.Reverse the Second Half:
After finding the middle node, reverse the second half of the linked list starting from slow.
This will turn the second half of the list into a reversed version of itself.

3.Compare Both Halves:
Now, compare the first half of the list (starting from head) with the reversed second half (starting from prev, which is the reversed portion).
If at any point the values of the nodes don't match, the list is not a palindrome.
If all nodes match, the list is a palindrome.

Steps in Code:
1.Find the middle node using the slow and fast pointers.
2.Reverse the second half of the list starting from the middle.
3.Compare both halves. If they match, return true; otherwise, return false.
Example:
For a linked list like 1 -> 2 -> 3 -> 2 -> 1:

Step 1: Find the middle node (3).
Step 2: Reverse the second half (2 -> 1 becomes 1 -> 2).
Step 3: Compare both halves (1 -> 2 -> 3 with 1 -> 2 -> 3), and they match, so it's a palindrome.

This approach works in O(n) time and uses O(1) space



///Valid Perfect Square
1.Base Case (for numbers less than 2):
If the number is less than 2 (i.e., 0 or 1), it's automatically a perfect square because both 0 and 1 are perfect squares.
2.Binary Search Initialization:
We initialize two pointers: s (start) set to 2, and e (end) set to num / 2. The reasoning is that any square root of num will be between 1 and num / 2 for num > 1.
3.Binary Search Loop:
We perform binary search where we calculate the middle point mid as (s + e) / 2 and check if mid^2 is equal to the num.
If mid^2 == num, return true because it's a perfect square.
If mid^2 < num, move the start pointer (s) to mid + 1 (search in the right half).
If mid^2 > num, move the end pointer (e) to mid - 1 (search in the left half).

4.End Condition:
If the loop ends without finding an exact match (mid^2 == num), return false, indicating that num is not a perfect square.