# Problem I : Detective Conan Nemesis

## Statement:
Kaitou Kid wanted to go big in his last operation. So, he decided to steal the Monalisa from the Louvre. His plan was perfect and no one could decipher his riddles and tricks and now the masterpiece and the thief are both gone. Hopefully, Detective Conan was clever enough to solve the mystery and he is sure that his nemesis is going to escape with the painting from the roof with a helicopter. However, it took him too much time to get his answers and now Kaitou is on the run.

Given the position and speed of both Conan and Kaitou Kid on the roof, can you tell if conan can catch him before reaching the rope attached to the helicopter.

The roof is an infinte 2d plan with 2 axes X and Y.

**NOTE:** Conan is tired from climbing all the way to the roof so he can't run faster than Kaitou Kid.

## Input :
The first line contains three integers **Xc**, **Yc** and **Sc** (0 <= Xc,Yc <= 10^5, **0 < Sc**) — the position and speed of Conan.

The second line contains three integers **Xk**, **Yk** and **Sk** (0 <= Xk,Yk <= 10^5, **0 < Sk**) — the position and speed of Kaitou.

The last line contains two integers **Xh** and **Yh** (0 <= Xh,Yh <= 10^5) — the position of the Helicopter.

**NOTE:** **Sc <= Sk**

## Output :
Print "YES" (all uppercase) if he can catch him. Otherwise, print "NO" (all uppercase).
## Example:
Input :  

```
0 15 5
19 20 10
5  5
```

Output :  

```
NO
```
Input :  

```
0 1 1
0 2 1
1 1
```

Output :  

```
Yes
```
