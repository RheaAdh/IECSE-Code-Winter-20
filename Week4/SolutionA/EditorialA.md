In this problem, you can implement an algorithm opposite to that given in the condition. Let's maintain two pointers to the left-most and right-most unhandled element. Then, restoring the original array, you:

put the left-most unhandled item in the first position
put the right-most unhandled item in the second position
put the left-most unhandled item in the third position
put the right-most unhandled item in the fourth position
...
That is, in general, you put the leftmost elements on all odd positions, and the rightmost ones on all even positions. After processing each element, you either move the left pointer forward by one, or the right one backward by one.