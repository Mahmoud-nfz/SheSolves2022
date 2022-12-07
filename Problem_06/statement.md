# Problem F : Raed and number transformation

## Statement:

Raed has a string A consisting of many digits that he wants to transform into another string B of digits.

These digits are represented as follows :
![clock_digits](https://user-images.githubusercontent.com/65515933/206281361-61b1892d-3533-40bc-ac26-cbc9f0c18e89.jpg)

He wants to perform the transformation in the following way :
He can execute this operation as many times as he wants :

- Take a digit x in its analog representation and add or remove one stick from it to obtain a new digit y, but on the condition that y is a valid digit too. ( For example 1 can be transformed into 7 and vice versa. On the other hand 4 can't be transformed into any digit.)

Help Raed find out whether he can transform string A into string B using the rules described above


## Input :
The first line contains a single integer **T** (1≤T≤100) — the number of test cases. Then the test cases follow. Each test case consists of one line.

The first line of each test case contains an integer **n**, the number of characters in the string A.

The first line of each test case contains string A (number of digits in string A doesn't exceed 10<sup>5</sup>).

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
