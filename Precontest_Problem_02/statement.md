
#  PreContest Problem B : IMO Preparation

##  Statement:

Preparing for her first ever participation at the **International Mathematical Olympiad** (IMO), Sarah encountered a simple and tricky problem that she needs to prove.
In the process of proving it, she started by manually testing diffrent examples that she had in mind which turned out being a waste of time **especially with large numbers**. So as a software engineer student she decided to write a program that automatically gives her the result.
As one of her closest friends you are asked to help her writing this program.

**The "IMO" Problem Statement :** 

Let $1 \leq a_{0} \lt a_{1} \lt ... \lt a_{n}$  a finite sequence of positive integers.
Prove that there exists a unique integer $n \geq 1$ such that :

$a_{n} \lt {a_{0}+a_{1}+...+a_{n} \over n} \leq a_{n+1}$

To make the problem easier, we assume that the sequence $a_{0}, a_{1}, ... , a_{n}$ follows arithmetic sequence with reason 1 :  
$a_{1} = a_{0}+1$

$a_{2} = a_{1}+1$ 
...  
$a_{n+1} = a_{n}+1$


##  Input :

The first line contains a single integer **T** (1≤T≤100) — the number of test cases.

Each test case consists of one line containing two integers **$a_{0}$** and **$a_{n}$** (1 $\leq a_{0} \lt a_{n} \leq 10^7$) — where $a_{0}$ is the first number in the sequence and $a_{n}$ is the last one.

##  Output :

For each test case, print one integer — the unique integer **n** mentionned in the **“IMO” Problem Statement** if **n** exists if it does not then print **NO** .

##  Example:

Input :

```

3

1 6

4 9

4754 97535

56332 67477864

```

Output :

```

3

4

48652

NO

```
