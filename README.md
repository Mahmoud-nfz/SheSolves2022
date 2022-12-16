# SheSolves 5.0 ProblemSet

# For explorers :
### The complete problem set can be found as a pdf version in the [file](https://github.com/Mahmoud-nfz/SheSolves2022/blob/main/ContestProblems.pdf) for the main contest and [this file](https://github.com/Mahmoud-nfz/SheSolves2022/blob/main/Precontest_Problems.pdf) for the practice problems.

Each problem folder contains the problem statement, an accepted solution and a known solution that exceeds the time limit.

You can also find in each folder the script used to generate the test cases and the script used to generate the right answer files to each of these test cases.

For converting the pdf to markdown, I wrote the [script](https://github.com/Mahmoud-nfz/SheSolves2022/blob/main/script_gen_pdf.sh) which makes use of markdown-pdf, an npm package.

## Format:

Each problem setter should include the following files in his problem folder for the problem to be considered complete:

- problem statement (preferably in markdown or .txt format instead of docx to make the work of those who review/edit/format your document faster)
- An optimal solution in c++ (AC)
- A python or java solution (optional: across all problems we should have at least one problem with a java & python implementation)  
- A solution that implements a naive/brute force approach (should return TLE when tested by pc^2 ) 
- A test generator 
- between 30-50 tests:
	-  Those tests should be balanced (if a problem's output is either YES or NO the tests should be designed in a manner where the number of tests that should output "NO" is between 40%-60% of the total number of test cases) 
	- testxx.in should contain the input of test xx
	- testxx.out should contain the correct output of test xx verified by the proposed solution
	- The limit of the number of tests that should be manually done is 10 
	- The first tests (number 01 and 02 ) should be the same as those mentioned in your problem statement (this make figuring out the bugs easier for the participants)  

## Problemset

* Pre-contest Problems: ***2 problems*** 
* Contest Problems : ***11 problems***

## Problem Setters

* Med Ali Ouachani
* Rami Zouari
* Yassine Dhaouadi
* Idris Saddi
* Mahdi Chaaabne
* Mehdi Ben Salha
* Adam Fendri
* Raed Addala
* Mahmoud Nefzi

## Progress 

#### Pre-contest problems:

|      | Problem            | author | Problem statement | AC solution | TLE solution | input / output |
| ---- | ------------------ | ------ | ----------------- | ----------- | ------------ | -------------- |
| 1    |         Doni and boring problems          |    Mahmoud   |         YES         |      YES      |       Doesn't exist      |        YES       |
| 2    |   IMO preparation      |    Yassine   |         YES         |      YES      |       Doesn't exist      |        YES       |

#### Official contest problems:

|      | Problem                             | author     | Problem statement | AC solution | TLE solution (if there is any) | input / output |
| ---- | ----------------------------------- | ---------- | ----------------- | ----------- | ------------------------------ | -------------- |
| 1    |    	Sarah and the study group            |    Mahmoud   |        Yes        |    Yes      |                                |      YES         |
| 2    |  	Ines and summations 	     |    Rami    |         YES         |   YES     |                                |      YES         |
| 3    |        Messi's last worldcup        |    Adam    |         YES         |     YES       |                                |      YES         |
| 4    |          Ice cream shop             |    Adam    |         YES         |     YES       |                                |      x        |
| 5    |              Tic Tac Toe            | Mehdi-Mahdi|         yes         |     Yes     |                                |      YES         |
| 6    |   Raed and number transformation   | Raed        |         YES         |    YES       |                                |      YES        |
| 7    |         Mona and the treasure         |   Mahmoud  |         YES         |     YES       |        Doesn't exist   |      YES         |
| 8    |  Nada and her array of colors   |    Rami    |         YES         |     YES       |                                |      YES         |
| 9    |         Detective Conan Nemesis         |    Raed    |         Yes         |    Yes      |        Doesn't exist         |      YES         |
| 10   |            Ironian War              |   Med Ali  |         Yes       |     Yes     |            NO                 |      YES         |
| 11   |          Hatem's Secret Recipe           |    Raed    |        Yes        |     Yes       |           Yes                     |      YES         |
