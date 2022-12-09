# Problem K : Hatem's secret recipe

## Statement:
Hatem has a well-known Baklawa Shop. This is due to his great attention to quality and for never being late when it comes to orders. In fact, he and his partner had devised a recipe that made their Baklawas irresistible.
However, his partner is going on a family vacation for a whole month and fearful of someone stealing his recipe Hatem chooses to do all the work by himself. And so he needs to set the ovens the night.

Mister Hatem wants to know the minimum number of oven necessary to prepare the order before **f** time.

Hatem has access to a lot of ovens that he can set up to match any order he gets where each oven has a capacity **c**. All ovens are installed beforehand. Each oven needs **k** time to cook **c** Baklawas.

**NOTE:**

- The time needed to take the cooked Baklawas out of the oven and start cooking the next c Baklawas **is ignored** : Mister Hatem is so quick.

- All Baklawas are ready at the same moment **k** time after they started baking.

## Input :
The first line contains a single integer **t** ( 1 <= t <= 1000) — the number of test cases. Then the test cases follow.

Each test case consists of one line which contains  integers **n**, **f**, **c**, **k**( 1 <= n, f, c, k <= 10^9 ,  k <= f   ) — where : 
- n is the number of ordered Baklawas.
- f is the available time to prepare the order.
- c is the capacity of one oven.
- k is the time to cook c Baklawas in one oven.
## Output :
For each test case, output the minimum number of ovens that satisfies his needs.  

## Example:
Input :  

```
2
10 10 1 1
12 4 3 2
```

Output :  

```
1
2
```
