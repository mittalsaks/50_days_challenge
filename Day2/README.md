//Algorithm to Remove Elements from Singly Linked List:



1.Create a Dummy Node: 
Create a dummy node with a value of -1 and set its next to the head of the list. This helps handle edge cases like removing the head node.

2.Use Two Pointers:
prev points to the dummy node, and temp traverses the list.

3.Traverse the List: Iterate through the list:
If the current node’s value equals the target value (val), remove the node by adjusting the prev->next pointer.
If the value does not match, move prev and temp to the next nodes.

4.Return the New Head: After all nodes are processed, the new head of the list is dummy->next.

5.Clean Up: Delete the dummy node to free memory.



//////Algorithm to Check if a Number is Happy:



1.Sum of Squares Function: 
Define a helper function sumofsquares(n) that returns the sum of squares of the digits of the number n.

2.Use Two Pointers (Floyd's Cycle Detection):
slow starts at n, and fast starts with the sum of squares of n.

3.Loop Until a Cycle or Happiness is Detected:
Calculate the next sum of squares for slow and fast.
The slow pointer moves one step at a time, while fast moves two steps.
If fast reaches 1, the number is happy, so return true.
If slow meets fast, it means a cycle is detected, and the number is not happy. Return false.

4.Return Result: If fast becomes 1, the number is happy; otherwise, it’s not.

