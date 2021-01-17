# Fun With Functions
Let's analyze which values can the function g(x) have. It can be proven that the value of g(x) is equal to 10k, where k is the number of zero-digits at the end of the number x, because f(f(x)) is the same number as x except for the fact that it doesn't have any trailing zeroes.

Okay, now let's analyze when we reach the new value of g(x). 1 is the first value of x such that g(x)=1, 10 is the first value of x such that g(x)=10, 100 is the first value of x such that g(x)=100, and so on. We have to calculate the maximum number that has the form 10k and is not greater than n, and the answer is exactly k+1.

It can be done with a mathematical solution, but the most simple way to do it is read n as a string instead, and calculate its length.

```
eg. n=231
Here as you can see for 1 to 9 we have same value of g(x) that is 1
for 10 value g(10)=10 and rest 11 to 19 again has same value 1
but 20 has g(20)=10 and rest 21 to 29 again same value is 1
but for 100 g(100)=100 so if you observe we get unique values only on number of form 10*k
so we actually need to find how many 10*k type of number exists in range 1 to n 
so for doing this we can simply find the number of digits in n, which can easily be done by taking input as string and returning length of string as answer.
```

Time Complexity : O(1) as n.size() is a constant time operation.

Note: This question was given to make you guys understand importance of constraints in question.If you had noticed 1≤n<10<sup>100</sup> which is quite high, so in such cases using string for taking input can be a good option. 