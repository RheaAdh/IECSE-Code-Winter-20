# Buying Papers For Poster
Here while iterating over given sequence of color answer in each step would be double of minimum among length of two consecutive set of equal elements. For implementation we can maintain two variables say a and b storing count of continuous set of white and black color papers respectively i.e. keep on updating a as we get continuously white color papers and similarly keep on updating b as continuous black color papers are encountered, once a new segment of white color or black color is encountered reset a=1 for white and similarly b=1 for black and then keep updating as mentioned above. At each step double of min(a,b) will give a possible ans keep on updating ans as we get a larger value as answer.
```
eg. For Input 
n=9
index  0 1 2 3 4 5 6 7 8
color  2 2 1 1 1 2 2 2 2

Initially a=0,b=0,ans=0
let index be i

when i=0 v[i]=2
as we get black color we set b=1
ans=max(ans,2* min(a,b))=0

when i=1 v[i]=2
b is encounterd again increment b,hence b=2
ans=max(ans,2* min(a,b))=0

when i=2 v[i]=1
we encounter white color we set a=1
ans=max(ans,2* min(a,b))=2

when i=3 v[i]=1
we get white again so increment a,hence a=2
ans=max(ans,2* min(a,b))=4

when i=4 v[i]=1
we get white again so increment a,hence a=3
ans=max(ans,2* min(a,b))=4

when i=5 v[i]=2
we get new segment of 2 so we reset b=1
ans=max(ans,2* min(a,b))=2

when i=6 v[i]=2
we get b again so increment b, hence b=2
ans=max(ans,2* min(a,b))=4

when i=7 v[i]=2
we get b again so increment b, hence b=3
ans=max(ans,2* min(a,b))=6

when i=8 v[i]=2
we get b again so increment b, hence b=4
ans=max(ans,2* min(a,b))=6

```
Final output is **6** which is [2 2 **1 1 1 2 2 2** 2]

Time Complexity: O(n), as we go to each element just once.



