
#For Q1
gcc Q1_solution.c -o Q1sol -lm
./Q1sol
#For Q2








--------------------------------------------------------------------------
Embedded Software Engineer Quiz

Please submit answers by creating a public repo on Github or Bitbucket and sharing the url of the repo. Please do not submit answers in any other format. 

Q1) Consider that you have a rectangular piece of paper of arbitrary dimensions N by M (where N and M are positive integers). You also have a pair of scissors which can cut perfectly straight with no loss of paper. You wish to reduce the original piece of paper into a series of perfect squares of paper, making the largest possible squares, and using all of the paper provided. Write a function in C that takes the inputs N, and M, and returns the series of squares that can be made out of that piece of paper. No fractional squares, i.e. no square should be less than 1 in length and width.

Some examples:
Input: N =6 , M = 5
Output: 5x5, 1x1, 1x1, 1x1, 1x1, 1x1

Input: N = 1, M = 1
Output: 1x1

Input: N = 9, M = 9
Output: 9x9

Q2) Below is a link to a spreadsheet with two columns A and B. Define a mapping function that for each row of column A, the output of the function will be the corresponding row of column B. More generally: mapping_function(An) =  Bn.  
Embedded Software Engineer Quiz Resource
For example:
	
mapping_function(15840) = cGp
mapping_function(16465) = cmW
mapping_function(17941) = cX3

Q2 a) What is the mapping function?

Q2 b) What is the output of the mapping function for the following inputs: 30001, 55555, 77788

Q2 c) What is the upper limit of this mapping function before there will be collisions? 

Q2 d) Please share any code that you wrote in the process of trying to solve the above problem.

N.B. I came up with Q2 myself this morning.  It is my first time using it for a programming quiz, and I’m not sure yet how I feel about it. Perhaps it is a bit too difficult. If you think it is too much work, please just say that and only submit the answer to Q1. We might remove this question for future candidates after we receive some feedback. But, perhaps you are the type of person who won’t be able to sleep until you solve it. In which case, by all means please go ahead.

