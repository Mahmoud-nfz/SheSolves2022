# Problem H : Nada and her array of colors

## Statement:
Nada is into painting and coloring so her friends got her a present for her birthday, a ribbon to color on. However this ribbon was divided into **n** cells and some of them had already been colored.
Nada wants to color the ribbon using the minimum number of colors in such a way that no two adjacent cells have the same color.
You are given the description of a ribbon, your task is to determine the minimum number of colors the ribbon can be colored in such that no two adjacent cells have the same color. Or print -1 if it is impossible.

## Input :
The first line contains a single integer **T** (1≤T≤100) — the number of test cases. Then the test cases follow. Each test case consists of one line.

The first line contains an integer **n** (1≤ n ≤10^5) — where n is the length of the ribbon.

The next line contains n integers ai, the description of the ribbon. If the ai is -1 then it isn't colored, otherwise ai is the reference (just an integer) of the color used. (1≤ ai ≤ 10^5).

## Output :
For each test case, output the minimum number of colors that can appear on the ribbon while coloring it in such a way that no two adjacent cells are the same color. Or print -1 if it is impossible.  

## Example:
Input :  

```
4
1
1
6
1 2 -1 9 -1 1
2
1 1
```

Output :  

```
1
3
-1
```

In the second test case one way to color the ribbon only using 3 colors is as follows :
```
1 2 1 9 2 1
```
