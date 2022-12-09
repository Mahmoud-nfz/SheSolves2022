# Problem B : Ines and summations

## Statement:
Ines is very good at mathematics so her friends challenged her to a problem. They gave her an array of numbers **a** and a number **k** and allowed her to do the following operation on the array any number of times as long as there are 2 or more elements in the array :
- Take two array elements ai and aj and remove them from the array then insert the value (ai + aj ) into any position of the array.

Determine if Ines can reduce the array using the operation provided to a single value that is divisble by **k**.

## Input :
The first line contains a single integer **T** (1 ≤ T ≤100) — the number of test cases. Then the test cases follow. Each test case consists of one line.

The first line contains two integers **n**, **k** (1 ≤ n, k ≤ 10^5 ) — where n is the length of the array and k is the number described above.

The second line contains n integers ai (1 ≤ ai ≤ 10^3) describing the array a.

## Output :
For each test output "YES" (all uppercase) if it is possible to obtain a value divisible by **k** and "NO" otherwise.

## Example:
Input :  

```
3
3 3
4 4 1
4 5
12 5 6 8
1 3
3
```

Output :  

```
YES
NO
YES
```

In the first test case one possible sequence of operations is :
4 4 1 -> 8 1 -> 9
