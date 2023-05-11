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

