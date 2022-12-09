
#  PreContest Problem B : IMO Preparation

##  Statement:

Preparing for her first ever participation at the **International Mathematical Olympiad** (IMO), Sarah encountered a simple and tricky problem that she needs to prove.
In the process of proving it, she started by manually testing diffrent examples that she had in mind which turned out being a waste of time **especially with large numbers**. So as a software engineer student she decided to write a program that automatically gives her the result.
As one of her closest friends you are asked to help her writing this program.

**The "IMO" Problem Statement :** 

Let $1 \leq a_{0} \lt a_{1} \lt ... \lt a_{n}$  a finite sequence of positive integers.
Prove that there exists an integer $k \geq 1$ such that :

$a_{k} \lt {a_{0}+a_{1}+...+a_{k} \over k} \leq a_{k+1}$


##  Input :

The first line contains a single integer **T** (1≤T≤100) — the number of test cases.

The first line of each test case contains an integer **$N$** (1 $\leq N \leq 10^5$) — where $N$ is the length of the sequence.

The second line contains **$N$** integers **$a_{i}$** (1 $\leq a_{i} \leq 10^5$) describing the sequence.

##  Output :

For each test case, print one integer — the integer **k** mentionned in the **“IMO” Problem Statement** if **k** exists, if it doesn't then print **-1** .

##  Example:

Input :

```
2
4
1 2 9 10
6
4 5 6 7 8 9
```

Output :

```
1
3
```

In the first case k = 1, **$a_{k}$** = 2

In the second case k = 3, **$a_{k}$** = 7
