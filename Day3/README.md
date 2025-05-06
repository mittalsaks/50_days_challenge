✅ 1. plusOne (Add One to a Digit Array)



Problem: Add 1 to a number represented by a vector of its digits.
Algorithm:
1.Start from the last digit and move left.
2.If the current digit is less than 9, increment it and return.
3.If it's 9, set it to 0 and continue.
4.If all digits are 9, insert 1 at the beginning (e.g., 999 + 1 = 1000).




✅ 2. rotateRight (Rotate Linked List to the Right)


Problem: Rotate a linked list to the right by k places.
Algorithm:
1.Find the length of the list.
2.Compute actualrotate = k % length.
3.If actualrotate == 0, return the head.
4.Traverse to the (length - actualrotate - 1)-th node.
5.Make the node after that the new head.
6.Break the list and connect the tail to the original head.
7.Return the new head.