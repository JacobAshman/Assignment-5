Jacob Ashman, Chloe Holmes, Luke Swanson
Jashman2@huskers.unl.edu
Cholmes28@huskers.unl.edu
Lswanson21@huskers.unl.edu 
CSCE 155E
Homework Assignment 5: Integration and Derivation calculator
Assigned: April 13th
Due: May 11th 
Objectives
The objectives of this homework assignment:
	Understand and practice recursion.
	Be able to choose the best option for a solution out of many possible options.
	Understand various C concepts such as variables, loops, arrays, and conditionals.
	Practice Computational Thinking within your solution
	Problem decomposition (e.g., breaking up solution into smaller problems)
	Algorithmic thinking (e.g., designing an algorithmic solution to the given calculations)
	Evaluation (e.g., testing correctness of solution)
	Abstraction (e.g., when planning out your solution)
	Generalization (e.g., when reviewing proper outputs to find a general equation)
	
Problem Description
You have been tasked with making a calculator for some students who really hate doing derivatives and integrals by hand. Lucky for you, you can do this in C! 
The students have had a lot of trouble with the power rule, and thus only want your calculator to be able to compute integrals and derivatives that utilize the power rule. The power rule for derivatives is given by:
dx 〖 x〗^n=nx^(n-1)
The power rule for Integrals is given by:
∫▒x^n =x^(n+1)/(n+1)
You will be tasked with computing equations for either definite or indefinite forms, depending on user input. 
For the Programming solution, recursion can be implemented to great effect. The following Pseudocode can be an idea for where to start.
-Function Derivative (array of terms in equation, current term, number of terms, variable to be derived (as a char))
-take term from array at current term
-tokenize it based on the variable being derived (for example, 3x^7 being derived for x will return 3 for the coefficient and 7 for n) (if there is no coefficient or n then return 1)
-Then apply the power rule using all the variables gathered from the tokenization
-Pass this back into the array
-Return derivative (array of terms, current term +1, number of terms, variable to be derived)
-The base case should be something along the lines of when the current term is == to the number of terms, then it should return the array. 
Integration works in a much similar way. The only difference is the power rule implementation. For definite integration/derivation, a new function must do a similar action but instead of applying the power rule it applies the bounds and point to the generated function.
Your solution is required to have the following:
	Take user given equations as strings as what they want their output to be (integral/derivative, definite/indefinite) if definite user must provide bounds for integration and a point for derivation. 
	User input should be taken as a string then tokenized based on + or – signs in the expression. No spaces for user input.
	If a user wishes to input an inverse expression, such as 1/x^2, the power must be negative. So, the example must be represented as x^-2. 
	Define a function for definite Integration using a recursive solution. Should return a number. 
	Define a function for indefinite integration by applying a recursive solution. Should return an equation. 
	Define a function for derivation using recursion. 
	Define a function for finding the derivative at a point using a recursive solution.
	Print out the indefinite equation and if given bounds or a point print out the definite answer. 

Sample Input & Output

Welcome to the fun and cool calculus calculator!
Do you wish to compute an Integral or Derivative (1/2)
1
Do you wish this to be Definite or Indefinite? (1/2)
1
What is the equation you wish to integrate, 
x^3+4x^2-10
Upper bound?
5
Lower Bound?
0
Which variable?
x
The indefinite equation for that integral is: (x^4)/4-(4/3)(x^3)-10x
Along the bounds (5,0) gives the answer: 372.92
Would you like to supply another equation? (Y/N)
N
Thank you for using the fun and cool calculus calculator!


Welcome to the fun and cool calculus calculator!
Do you wish to compute an Integral or Derivative (1/2)
2
Do you wish this to be Definite or Indefinite? (1/2)
1
What is the equation you wish to integrate, 
x^4+2x^2-10x
Point to be derived at?
(2,1)
Which variable?
x
The indefinite equation for that derivative is: 4x^3+4x-10
The derivative at the point (2,1) is: 30
Would you like to supply another equation? (Y/N)
N
Thank you for using the fun and cool calculus calculator!

Extra Credit

Perhaps a student has a particularly nasty derivative that cannot be solved with the power rule. Your mission, should you choose to accept, is to modify this code to be able to solve a derivative using the product rule, as well as implementing the ability to derive ln(x) and integrate 1/x. Your program should also be able to handle the exponential function e. Chain rule is not required and thus you will not be required to handle anything further than e^x or 1/x.

The product rule is given by the following.
F(x)G(x) = F’(x)G(x) + F(x)G’(x)
The derivative of 1ln(x) is 1/x and the integral of 1/x is ln(x)

The Derivative of e^x is e^x. The integral is the same.

Your program should check the given equation to see if it can be solved using the power rule, if not use the product rule and print out what method was used to solve the derivative. 
