# Problem A : Sarah and the study group

## Statement:
It is exams time at Insat so Sarah decided to create a study group to help her revise but they quickly encountered a problem after creating the group. They couldn't decide which subject to study first so they took a vote where each member voted on the topic he wants to study.

Help them find out the topic they will study first.

## Input :
The first line contains a single integer **T** (1≤T≤100) — the number of test cases. Then the test cases follow. Each test case consists of one line.

The first line of every test case contains a single integer **n** (1≤N≤10<superscript>5</superscript>).
The second line contains **n** caracters c<subscript>i</subscript>, the name of the subject the i-th member voted on. (c<subscript>i</subscript> is an uppercase letter between 'A' and 'Z')

## Output :
For each test case, output the letter that is the name of the subject with the most votes. If there is a tie, output '#'.

## Example:
Input :  

```
3
5
A B C D A
4
A B A B
1
X
```

Output :  

```
A
#
X
```
