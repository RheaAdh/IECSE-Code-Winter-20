# Distinct Coloring

This is an arrays / searching / sorting problem. It can be done in many ways, and for the given constraints even O(N^2) solution will get accepted.

## Suboptimal Solution

We first sort the array, and then each time we find an element that's less than or equal to the previous element, we know that it is a repeated element since this had been sorted initially. So we simply set it to previous element + 1, and add this difference to the count variable.       
```
For example, let n = 6, arr = {1 2 2 2 3 5}.  
We find that arr[2] == arr[1], so we increment arr[2], arr = {1 2 3 3 3 5}  
Next, arr[3] == arr[2], so arr = {1 2 3 4 3 5}   
Now arr[4] < arr[3], so arr = {1 2 3 4 5 5}   
Finally arr[5] == arr[4], hence arr = {1 2 3 4 5 6}  
```
The time complexity of this solution is O( N Log(N) ) because the costliest operation is sorting, which is a N Log(N) operation.

## Optimal Solution 

Here we take advantage of the fact that the range of values is fairly small and exactly known to us, which is from 1 to n.   
By keeping a track of frequency of each element we can know which element occurs more than once. By traversing the frequency array from the start to end, you can think of the array elements to be sorted ( this is basically count sort, it can be done when size and range of array is known, and the size is fairly small.)      
Now in an array if the element 1 is repeated thrice, we know we can set 2 of the ones to 2 and 3. That's basically what we'll do in the solution. We will also have to keep track of the frequency of the new values, in the frequency array.    
The frequency array has been initialized to -1, so that when freq[i] is greater than 0, we know that the frequency of element i + freq[i] needs to be incremented.   
```
For 0 <= i <= 2n, freq[i] = number of times i has been repeated. freq[i] = -1 means it doesn't occur, 0 means it's only present once.  
Let n = 5, arr = {3 4 4 5 5}. The frequency array will look like this in the start, freq = {-1 -1 -1 0 1 1 -1 -1 -1 -1 -1}   
When we reach i = 4, freq gets updated to {-1 -1 -1 0 1 2 -1 -1 -1 -1 -1}   
When we reach i = 5, freq gets updated to {-1 -1 -1 0 1 2 0 0 -1 -1 -1}   
Notice that we are not decreasing freq[i] when we are at i, because it doesn't affect the result anymore.   
```
The time complexity of this solution is O(n). The trade off here is the extra space for the frequency array
