# Problem 5 : Tic Tac Toe

## Statement:
Mariem has 2 younger sisters Fatma and Hiba.<br />
Mariem wants to study but her sisters are too annoying and noisy, so Mariem decided to teach them Tic Tac Toe.<br />
Fatma and Hiba loved the game so much that they play all day long. <br />
Mariem thought that they wouldn't annoy her anymore, but that wasn't the case because at the end of each day,the 2 sisters come to her with a bunch of papers so that Mariem tells them who wins.<br />
Mariem wants from you to write a code that output the winner of each paper given, to save her the time so that she can study.<br />
Notes:<br />
	.Hiba always start and always begin with X <br />
	.If Hiba wins you output 1,otherwise if Fatma wins you output 2 else you output 0 (in the case of a tie or if the game is unfinished)<br />
	.Hiba and Fatma are starters so they sometimes make a mistake (for example hiba plays twice in a row), in that case you output -1<br />

<pre>
O..                                                         OX.                   O.X                                                        XOX
O.X it is not correct (-1) (because Hiba(X) always start)   O.X Fatma wins (2)    O.X it is not correct because Hiba have already won (-1)   XXO it is a tie (0) 
O.X                                                         O.X                   O.X                                                        OXO
                                                        

</pre>
 

## Input :
The first line contains a single integer **T** (1≤T≤10E9) — the number of test cases. Then the test cases follow. Each test case consists of 3 lines.

the 3 lines represent the paper given by the 2 sisters (the . means that it is empty)

## Output :
For each test case, output as it is shown above. 

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
