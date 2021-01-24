# Prime is cool 

To solve this problem you were to find prime numbers in range [2..N]. The constraints were pretty small, so you could do that in any way - using the Sieve of Eratosthenes or simply looping over all possible divisors of a number.
Take every pair of neighboring prime numbers and check if their sum increased by 1 is a prime number too. Count the number of these pairs, compare it to K and output the result.
