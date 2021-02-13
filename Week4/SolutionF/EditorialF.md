# Commission and Briefcases

Let the array of preferred sizes of briefcases be a, and avaialable sizes of brifcases be b. The observation here is that for a if for a given a[i] and b[j], if b[j] < a[i] - x, then we cannot choose and briefcase that comes before b[j] since for all 1 <= k <= j, b[k] <= b[j]. In simple words, we cannot choose we'll have to look for briefcases that are in the array after b[j]. 
Similarly for b[j] > a[i] + y, we cannot pick any element beyond b[j], since b is in non decreading order. 

Now if we make use if 2 pointers and go from left to right, in the case where b[j] < a[i] - x, we can simply increment j. If 
b[j] > a[i] + y, we would want to check for indices less than j. But we would have either already chosen it for some a[k] <= a[i], 
or we won't be able to choose it becasue it is less than a[i] - x. So in this case we need to increment i. 

Hence this can be solved in O(n), time complexity.