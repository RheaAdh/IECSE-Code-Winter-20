# Partition Problem

Since sum2 doesn't matter, we simply need to look for sum1 and sum3, such that it's maximum and equal. So we make use 
of 2 pointers, one at the beginning and other at the end. We take continuous sums from both the ends, and keep a running
maximum to get the maximum value when the sums are equal.