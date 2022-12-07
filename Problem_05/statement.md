# Problem E : Tic Tac Toe

## Statement:
Mariem has 2 younger sisters Fatma and Hiba.

Mariem wants to study but her sisters are too annoying and noisy, so Mariem decided to teach them Tic Tac Toe. Fatma and Hiba loved the game so much that they kept playing all day long. Mariem thought that they wouldn't annoy her anymore, but that wasn't the case because at the end of each day,the 2 sisters came up to her with a bunch of papers so that Mariem tells them who wins.

Mariem wants you to write a program that outputs the winner of each given paper, to save her the time so that she can study.

Notes :

- Hiba always starts first and always begins with X

- If Hiba wins you should output 1,otherwise if Fatma wins you should output 2 else you should output 0 (in the case of a tie or if the game is unfinished)

- Hiba and Fatma are new to the game so they sometimes make a mistake (for example hiba plays twice in a row), in that case you output -1
	

<pre>
O..                                                         OX.  			XOX
O.X it is not correct (-1) (because Hiba(X) always start)   O.X Fatma wins (2)          XXO it is a tie (0) 
O.X                                                         O.X                   	OXO
                                                        

</pre>
 

## Input :
The first line contains a single integer **T** (1≤T≤10<sup>5</sup>) — the number of test cases. Then the test cases follow. Each test case consists of 3 lines.

The 3 lines represent the paper given by the 2 sisters (the . means that it is empty)

## Output :
For each test case, output as described above. 

## Example:
Input :  

```
4
O..
O.X
O.X

OX.
O.X
O.X

O.X
O.X
O.X

XOX
XXO
OXO
```

Output :  


```
-1
2
-1
0
```
