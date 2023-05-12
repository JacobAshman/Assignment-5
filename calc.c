#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h> 


#include "calc.h"
/* PseudoCode 
- takes an expression
- tokenizes it
- checks each sub expression to see if it contains more than one of the variable
    -does this by walking through each subterm and counting the number of same variable
    -if there is more than 1, returns 0, if there is 1 or less, returns 1. 
*/
int isPowerable(char *arr, const char var)
{
     int i = 0;
     int count = 0;
     while(arr[i] != '\0')
     {
        if (arr[i] == var)
        {
            count++;
        }
        i++;
     }
     if(count > 1)
     {
        return 0;
     }
     else{
        return 1;
     }
}


/* PseudoCode
-tokenize based off of '('
-will give us "term)" and "term2)"
-derivative of term ('term)
-derivative of term2 ('term2)
-concatenate the string together in the form ('term)(term2) + ('term2)(term)
-this gets stored in a passed through array, which is the array of derivatives.
*/
char productRule(char *arr, int length, char term)
{

}

void tokenization (char *arr, char **arr2, char * token1)
{
  
char * token = strtok(arr, token1);
int j = 0;
while(token != NULL)
{
    strcpy(arr2[j], token);
    //printf("%s\n", drunkCrashing[j]);
    j++;
    token = strtok(NULL, token1);
    
}

}
/* 
arr2 is the array of strings
take string 1
loop through it until you find the x to get the coefficient
then after the x, if no carrot is power of 1, if carrot everything after the carrot is the power 
convert both to ints (there is a built in function in c for this)
run power rule on it
create new string and concatenate it into arr (just google string concatenation)
call the function again. but with term + 1.
if the term is a + or -, you can skip all this and just call the function again with term + 1
*/
/*
int definiteDerivative(char **arr2, char *arr, char var, int term, int length, int xbound, int dAtPoint)

{
  int power;
  
    int coef;
    int check = 0;
    int temp;
    if (term != length + 1)
    {
        if(strcmp(arr2[term], "-") == 0  || (strcmp(arr2[term], "+")) == 0)
        {
            strcat(arr, arr2[term]);
            derivative(arr2, arr, var, term + 1, length);
        }
        else{
            coef = atoi(arr2[term]);
            int i = 0;
            while(arr2[term][i] != 'x')
            {
                if(arr2[term][i] == '\0')
                {
                    check = 1;
                    break;
                }
                i++;
                //printf("%d\n", i);
                
            }
            if(arr2[term][i+1] == '^')
            {
                power = atoi(arr2[term] + (i+2));
            }
            else
            {
                power = 1;
            }
            if (power == 1)
            {
            temp = coef;
            }
            coef = coef * power;
            power = power - 1;
            
            int bruh = pow(xbound, power);
            dAtPoint += coef * bruh;
            printf(":) = %d\n", dAtPoint);
           
            
            //printf("%d\n", power);
            //printf("%d\n", coef);
            char pow [13]; 
            char coe [13];
            char ter[] = {var, '^'}; 
            if(power == 0)
            {
                if (check == 1)
                {
                    coef = 0;
                }
                
                sprintf(coe, "%d", coef);
                strcat(arr, coe);
                //dAtPoint += coef;
                
            }
            else if(power == 1)
            {
                char ter1[] = {var, '\0'};
                sprintf(coe, "%d", coef);
                strcat(arr, coe);
                strcat(arr, ter1);
            }
            else{
                printf("power = %d\n", power);
                sprintf(pow, "%d", power);  
                sprintf(coe, "%d", coef);
           
            strcat(arr, coe);
         
            strcat(arr, ter);
            
            }
     
            printf(":() = %d\n", dAtPoint);
            dAtPoint += definiteDerivative(arr2, arr, var, term + 1, length, xbound, dAtPoint);
        }
    }
    else{
        printf("final = %d\n", dAtPoint);
        return dAtPoint;
    }

   

*/


void derivative (char **arr2, char *arr, char var, int term, int length)
{
    /*for(int i = 0; i < length; i++)
{
    printf("%s\n", arr2[i]);
}*/
    int power;
    int coef;
    int check = 0;
    if (term != length)
    {
        if(strcmp(arr2[term], "-") == 0  || (strcmp(arr2[term], "+")) == 0)
        {
            strcat(arr, arr2[term]);
            derivative(arr2, arr, var, term + 1, length);
        }
        else{
            coef = atoi(arr2[term]);
            int i = 0;
            while(arr2[term][i] != 'x')
            {
                if(arr2[term][i] == '\0')
                {
                    check = 1;
                    break;
                }
                i++;
                //printf("%d\n", i);
                
            }
            if(arr2[term][i+1] == '^')
            {
                power = atoi(arr2[term] + (i+2));
            }
            else
            {
                power = 1;
            }
            coef = coef * power;
            power = power - 1;
            
            //printf("%d\n", power);
            //printf("%d\n", coef);
            char pow [13]; 
            char coe [13];
            char ter[] = {var, '^'}; 
            if(power == 0)
            {
                if (check == 1)
                {
                    coef = 0;
                }
                
                sprintf(coe, "%d", coef);
                strcat(arr, coe);
                
            }
            else if(power == 1)
            {
                char ter1[] = {var, '\0'};
                sprintf(coe, "%d", coef);
                strcat(arr, coe);
                strcat(arr, ter1);
            }
            else{
                printf("power = %d\n", power);
                sprintf(pow, "%d", power);  
                sprintf(coe, "%d", coef);
            //printf("%s\n", pow);
            //printf("%s\n", coe);
            printf("pow = %s\n", pow);
            strcat(arr, coe);
            printf("arr = %s\n", arr);
            strcat(arr, ter);
            printf("arr = %s\n", arr);
            //strcat(arr, pow);
            //printf("arr = %s\n", arr);
            }
     
            
            derivative(arr2, arr, var, term + 1, length);
        }
    }

}
