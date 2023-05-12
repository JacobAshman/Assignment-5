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
int length;
while(x == 1){
printf("Welcome to the fun and cool calculus calculator! \nDo you wish to compute an Integral or Derivative (1/2)\n");
scanf("%d", &doi);
printf("definite or indefinite?(1/2)\n");
//printf("enter the expression with spaces between + signs, - signs, and the terms (variable can only be 1 character)\n");
scanf("%d", &key);
getchar();
printf("if doing an integral, format must be [coef x^power + coef x^power]\n");
printf("derivative format is [coefx^power + coefx^power]\n");
printf("enter the expression with spaces between + signs, - signs, and the terms (variable can only be 1 character)\n");
scanf("%[^\n]", drunkDriving);
//printf("%s\n", drunkDriving);
printf("please enter the number of terms in your expression(do not count + or - signs)\n");
scanf("%d", &length);
if(key == 1)
{
    if (doi == 1){
    printf("please enter the Upper Bound\n");
    scanf("%d", &upperBoundOrX);
    printf("Please enter the lower bound\n");
    scanf("%d", &lowerBoundOrY);
    }
    else{
        printf("please enter the X of the point\n");
        scanf("%d", &upperBoundOrX);
        printf("please enter the Y value\n");
        scanf("%d", &lowerBoundOrY);
    }
}
getchar();
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
//int test = atoi(drunkCrashing[0]);
//printf("%d\n", test);
if(key == 2)
{
derivative(drunkCrashing, iAmDrunk, var, 0, length);
printf("The Derivative function is :) %s\n", iAmDrunk);
}
else{
    int dAtPoint;
    dAtPoint = definiteDerivative(drunkCrashing, iAmDrunk, var, 0, length, upperBoundOrX, 0);
    printf("The Derivative at the point %d is : %d\n", upperBoundOrX, dAtPoint);
    printf("The Derivative function is %s", iAmDrunk);
}
printf("do you wish to input another Equation? (Y/N)\n");
scanf("%c", &Y);
if (Y == 'N')
{
    printf("Thank you for using the fun and cool calculus calculator!\n");
    break;
}

}






}