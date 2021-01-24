# xOperator

This is a bit manipulation problem. Here you can think of xor as an operator to toggle bit positions. Given the binary representation of 2 numbers,
in order to minimize them you would want to set as many 1s as possible to 0.   
Just to remind you, 0 ^ 0 = 0   
 0 ^ 1 = 1 ^ 0 = 1    
 1 ^ 1 = 0   
Here ^ denotes bitwise xor.   
Let us conisder the binary representation of 2 numbers.        
a = 1010   
b = 0110   
Let's denote right most bit position (LSB) as 1, left most bit position (MSB) as 4. We can try finding x bit by bit.   
At position 1, both a and b have zeroes, hence we set x<sub>1</sub> to 0.   
At position 2, both a and b have 1s, so we set x<sub>2</sub> to 1, as it will toggle 1 to 0.   
Now at position 3, a is set to 0, but b is set to 1. Let's say we set x<sub>3</sub> to 0. Then a<sub>3</sub> remains 0 (=0^0), and b<sub>3</sub> remains 1 (=1^0). Now if we set x<sub>3</sub> to 1 instead, a<sub>3</sub> becomes 1 (=0^1) and b<sub>3</sub> becomes 0 (=1^1). In both these cases, sum of the 2 bits remains the same, and that is 1 (=0+1). So the value of x<sub>3</sub> doesn't matter.    
Similarly it can be seen that value of x<sub>4</sub> also doesn't matter.   
This leads to the observation that for bits 0, 0 x needs to have 0 at that position, for 0, 1 or 1, 0 either 0 or 1 works. For 1,1 the position in x needs to be 1.   
So basically, x can be a & b or a | b. But if you look more carefully, you'll realize that x = a or x = b also works.    
Hence our answer is a^b + b^b = a^b. 
