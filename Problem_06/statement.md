# Problem F : Raed and number transformation

## Statement:

Raed wants to play a game. The Game consists of transforming a string A consisting of many digits into another string B of digits.

These digits are represented as follows :
![clock_digits](https://user-images.githubusercontent.com/65515933/206281361-61b1892d-3533-40bc-ac26-cbc9f0c18e89.jpg)

The Game rules are as follows :

-In each operation He can:

    -add one stick to one digit of the string so it becomes a new valid digit.

    -remove one stick from one digit of the string so it becomes a new valid digit.

-He can perform as much operations as possible.

Raed doesn't play a game until he is sure that he can win.

Help Raed find out whether he should play the game or not.

## Input :
The first line contains a single integer **T** (1≤T≤100) — the number of test cases. Then the test cases follow. Each test case consists of one line.

The first line of each test case contains an integer **n**, the number of characters in the string A.

The first line of each test case contains string A (number of digits in string A doesn't exceed 10^5).

The second line of each test case contains string B (number of digits in string B is the same as the number of digits in string A).


## Output :
For each test case, output "YES" (all uppercase) if the string A can be transformed into string B. Output "NO" (all uppercase) otherwise.  

## Example:
Input :  

```
2
3
789
798
6
146669
185654
```

Output :  

```
YES
NO
```
