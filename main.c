#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h> 


#include "calc.h"

void main(int argc, char **argv) {

int doi;  //integral or derivative?
int key; //def or indef 
int upperBoundOrX;
int lowerBoundOrY;
char Y;
char * drunkDriving = malloc(sizeof(char) * 100);
int x = 1;
char var;
char * solution = malloc(sizeof(char) * 100);
double sol;
int length;

printf("Welcome to the fun and cool calculus calculator! \nDo you wish to compute an Integral or Derivative (1/2)\n");
scanf("%d", &doi);
getchar();
printf("if doing an integral, format must be [coef x^power + coef x^power]\n");
printf("derivative format is [coefx^power + coefx^power]\n");
printf("enter the expression with spaces between + signs, - signs, and the terms (variable can only be 1 character)\n");
scanf("%[^\n]", drunkDriving);
//printf("%s\n", drunkDriving);
printf("please enter the number of terms in your expression(do not count + or - signs)\n");
scanf("%d", &length);

printf("which variable?\n");
scanf("%c", &var);
getchar();

//call the functions here please


   




//delimeter written for your conviencence, feel free to move it into the functions
char **drunkCrashing = malloc(40 * sizeof(char*));
for (int i = 0; i < 40; i++)
{
    drunkCrashing[i] = malloc((100) * sizeof(char));
}


length = length * 2;
length -= 1;
char * token1 = " ";
tokenization(drunkDriving, drunkCrashing, token1);
/*for(int i = 0; i < length; i++)
{
    printf("%s\n", drunkCrashing[i]);
}

int drink = isPowerable(drunkCrashing[0], var);
printf("%d\n", drink);
if (drink == 0)
{
    
    printf("must use product rule\n");
}
else
{
    printf("can use power rule\n");
}
*/

char * iAmDrunk = malloc(sizeof(char) * 100); 

if(doi == 1)
{
 indefiniteIntegral(drunkDriving, solution, var);
    printf("%s+ c\n", solution);
    memset(solution,0,strlen(solution));
}
else{
derivative(drunkCrashing, iAmDrunk, var, 0, length);
printf("The Derivative function is %s\n", iAmDrunk);
}




}






