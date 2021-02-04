# Powers of Two

The only observation to be made here is that to form a sum that is a power of 2, using only powers of 2, you will always have to repeat at least one number.   
Let x = 32. Now 32 = 16 + 16, or 16 + 8 + 8, or 16 + 8 + 4 + 4. So among the given numbers if any numbers repeat, we can consider
those two numbers to form a subarray each. Using a set we can check for repition. 

Time Complexity : O(n)