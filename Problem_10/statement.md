# Problem 10 : Ironian War

## Statement:
The Ironian kingdom has entered a war with the dwarfs, the emperor was afraid to lose it, that's why he summoned the skilled wizard "IronByte" from the wizards land to try the reincreate the legendary slayer "Gaya The Dragon Champion". To reinsert the legendary slayer IronByte needs to gather some ancient gems, those gems are stored in a fabled cave, this cave is protected by the legendary guardian Zoe. She sets a password to the cave to protect it, that's why he needs your help to crack it.

Zoe got an array a of numbers from 1 to n, where **a[i] = i**.

He performed n operations sequentially. In the end, he received a new state of the array.

At the i-th operation, Zoe chose the first i elements of the array and cyclically shifted them to the right an arbitrary number of times (elements with indexes i+1 and more remain in their places). One cyclic shift to the right is such a transformation that the array a=[a1,a2,…,an] becomes equal to the array a=[ai,a1,a2,…,ai−2,ai−1,ai+1,ai+2,…,an].

For example, if a=[5,4,2,1,3] and i=3 (that is, this is the third operation), then as a result of this operation, he could get any of these three arrays:

a = [5,4,2,1,3] (makes 0 cyclic shifts, or any number that is divisible by 3).
a = [2,5,4,1,3] (makes 1 cyclic shift, or any number that has a remainder of 1 when divided by 3).
a = [4,2,5,1,3] (makes 2 cyclic shifts, or any number that has a remainder of 2 when divided by 3).

Let's look at an example. Let n=6, i.e. initially a = [1,2,3,4,5,6]. A possible scenario is described below.

i = 1: no matter how many cyclic shifts Zoe makes, the array a does not change.
i = 2: let's say Zoe decided to make a 1 cyclic shift, then the array will look like a = [2,1,3,4,5,6].
i = 3: let's say Zoe decided to make 1 cyclic shift, then the array will look like a = [3,2,1,4,5,6].
i = 4: let's say Zoe decided to make 2 cyclic shifts, the original array will look like a = [1,4,3,2,5,6].
i = 5: let's say Zoe decided to make 0 cyclic shifts, then the array won't change.
i = 6: let's say Zoe decided to make 4 cyclic shifts, the array will look like a = [3,2,5,6,1,4].

You are given a final array state a after all n operations. Determine if there is a way to perform the operation that produces this result. In this case, if an answer exists, print the numbers of cyclical shifts that occurred during each of the n operations.

The cave password will be those cyclical shifts.

## Input :
The first line of the input contains an integer **T** (1 ≤ T ≤ 500) — the number of test cases in the test.

In each test case:

The first line of the test case contains one integer **n** (2 ≤ n ≤ 2⋅10^3) — the length of the array a.

The next line contains the final state of the array a: n integers a[1],a[2],…,a[n] (1 ≤ a[i] ≤ n) are written. All **a[i]** are distinct.

## Output :
For each test case, print the answer on a separate line.

Print -1 if the given final value a cannot be obtained by performing an arbitrary number of cyclic shifts on each operation. Otherwise, print n non-negative integers d1,d2,…,dn (d[i] ≥ 0), where d[i] means that during the i-th operation the first i elements of the array were cyclic shifted to the right di times.

If there are several possible answers, print the one where the total number of shifts is minimal (that is, the sum of d[i] values is the smallest). If there are several such answers, print any of them. 

## Example:
Input :  

```
3
6
3 2 5 6 1 4
3
3 1 2
8
5 8 1 3 2 6 4 7
```

Output :  

```
0 1 1 2 0 4 
0 0 1 
0 1 2 0 2 5 6 2 
```
