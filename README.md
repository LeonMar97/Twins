# Twins

Just a code challenge in a job interview, this code consists of two ways of solving a code challenge - finding how many times the sequence "0110" appears inside the 32-bit representation of a number received as a string from the standard input.
## first way

1. Build the 32-bit representation.
2. Strip every four bits and input them inside a vector (std::vector which supports logical operations), XOR between that vector and a vector {0,1,1,0).
3. Count for each 0 -> a.k.a
``` bash
if (v XOR v2) == 0 counter++;
```
4. Return counter if incrementd, else return NULL

## second way

1. Extract the last 4 digits using "%16" and check the same XOR with 6.
2. Count for each success.
3. Shift right to divide by two for each iteration using shift opeartion (which will remove the lsb, by moving the all the bits to the right).
