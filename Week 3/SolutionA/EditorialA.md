## A Different Exponentiation

Here you just need to make use of the fact that x % y = x if x < y. Otherwise you have to calculate the value. So as long as 
2<sup>x</sup> ( 1 <= x <= n) is less than m, you keep iterating to find the value. 

Time Complexity : O(min(n, 30))     
2<sup>30</sup> > 10<sup>8</sup>, hence you don't have to consider the entire range of n. 