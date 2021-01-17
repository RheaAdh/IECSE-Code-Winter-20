# Rishi's Assignments

For the given constraints, a simple linear time complexity solution is good enough. But suppose the number of hours was also part of the input taking large values, and if n and k also could take really large values, then we would need a more optimized solution.   
We can do binary search here. Our search space is from 1 to n, which is sorted, and hence suitable for binary search. We can find the time needed to complete upto i assignments (for 1 <= i <= n) using the sum of first n natural numbers formula. We just need to multiply it by 5. This is because our series here is 5*1, 5*2, 5*3, 5*4, ... which is 5 * (1, 2, 3, 4, ...) .   
