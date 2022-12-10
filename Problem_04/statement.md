# Problem D: Ice-Cream

There is a wonderful ice-cream shop in centre urbain that contains N ice-creams, such that each ice-cream is represented by two numbers Ci and Hi denoting the number of calories and the happiness value, respectively.

Amine wants to buy exactly K ice-creams such that the calories of the densest ice-cream (the one with most calories) are as minimal as possible. If there is more than one way to do that, you want to maximize the total happiness of the ice-creams you will buy, that is the sum of the happiness values of the chosen ice-creams.

Input:

The first line of the input contains a single integer T specifying the number of test cases (1 ≤ T ≤100).

Each test case begins with a line containing two integers N and K (1 ≤ K ≤ N ≤ 10^5), in which N is the number of ice-creams in the shop, and K is the number of ice-creams you want to buy.

Then a line follows containing N integers C1,⋯,CN (0 ≤ Ci ≤ 10^9), in which Ci is the number of calories in the ith ice-cream. Then a line follows containing N integers, H1,…,HN (0 ≤ Hi ≤ 10^9), in which Hi is the hapinnes value of the ith ice cream.

Output:

For each test case, print a single line containing two space-separated integers representing the calories of the densest ice-cream you will buy and the total happiness of the ice-creams you will buy, respectively.

Remember that your goal is to buy KK ice-creams such that the calories of the densest ice-cream (the one with most calories) are as minimal as possible. If there is more than one way to do that, you want to maximize the total happiness of the ice-creams you will buy.
 
Example:

Input:

```
1
5 3
1 2 3 4 5
5 4 3 2 1
```

Output:

```
3 12
```
