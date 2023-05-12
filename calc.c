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


void indefiniteIntegral (char *originalString, char *solution, char var)
{
int i = 0;
int q = 0;
int w = 0;
int newPower = 0;
int numberInt = 0;
char * number = malloc(sizeof(char) * 100);
char * power = malloc(sizeof(char) * 100);
char * temp = malloc(sizeof(char) * 100);
int length = strlen(originalString);
while(i < length) {
    if(originalString[i] == 32){
        i++;
    }
    while((originalString[i] >= 48 && originalString[i] <= 57)){
        number[q] = originalString[i];
        q++;
        i++;
    }
    if(originalString[i] == var){
        number[0] = '1';
        i++;
        if(originalString[i] == 94){
            i++;
            while((originalString[i] >= 48 && originalString[i] <= 57)){
                power[w] = originalString[i];
                w++;
                i++;
            }
        newPower = atof(power) + 1;
        numberInt = atof(number);
        sprintf(temp, "(%d/%d)%c^%d ", numberInt, newPower, var, newPower);
        strcat(solution, temp);
        memset(temp,0,strlen(temp));
        } else if (originalString[i] == 32 || originalString[i] == 0){
            newPower = 2;
            numberInt = atof(number);
            sprintf(temp, "(%d/%d)%c^%d ", numberInt, newPower, var, newPower);
            strcat(solution, temp);
            memset(temp,0,strlen(temp));
        }
        i++;
        if (originalString[i] == 43 || originalString[i] == 45 || originalString[i] == 0) {
            sprintf(temp, "%c ", originalString[i]);
            strcat(solution, temp);
            memset(temp,0,strlen(temp));
            i++;
        }
    }
    i++;
    if (originalString[i] == var) {
        i++;
        if(originalString[i] == 94){
            i++;
            while((originalString[i] >= 48 && originalString[i] <= 57)){
                power[w] = originalString[i];
                w++;
                i++;
            }
        newPower = atof(power) + 1;
        numberInt = atof(number);
        sprintf(temp, "(%d/%d)%c^%d ", numberInt, newPower, var, newPower);
        strcat(solution, temp);
        memset(temp,0,strlen(temp));
        } else if (originalString[i] == 32 || originalString[i] == 0){
            newPower = 2;
            numberInt = atof(number);
            sprintf(temp, "(%d/%d)%c^%d ", numberInt, newPower, var, newPower);
            strcat(solution, temp);
            memset(temp,0,strlen(temp));
        }
        i++;
        if (originalString[i] == 43 || originalString[i] == 45 || originalString[i] == 0) {
            sprintf(temp, "%c ", originalString[i]);
            strcat(solution, temp);
            memset(temp,0,strlen(temp));
            i++;
        }
    } else if(originalString[i] == 43 || originalString[i] == 45 || originalString[i] == 0 ){
        numberInt = atof(number);
        sprintf(temp, "%d%c %c ", numberInt, var, originalString[i]);
        strcat(solution, temp);
        memset(temp,0,strlen(temp));
        i++;
    }
    memset(power,0,strlen(power));
    memset(number,0,strlen(number));
    q = 0;
    w = 0;
}

}

double definiteIntegral(char *input, int a, int b, char var){
    int i = 0;
    int q = 0;
    int w = 0;
    int u = 0;
    int pon = 1;
    double answer = 0;
    double answerA = 0;
    double answerB = 0;

    char * number = malloc(sizeof(char) * 100);
    char * power = malloc(sizeof(char) * 100);
    char * solution = malloc(sizeof(char) * 100);
    char * numerator = malloc(sizeof(char) * 100);
    char * denominator = malloc(sizeof(char) * 100);    


    indefiniteIntegral(input, solution, var);

    while(i < strlen(solution)) {
        if(solution[i] == 32){
            i++;
        }
        if(solution[i] == 43){
            pon = 1;
            i++;
        } else if(solution[i] == 45) {
            pon = 0;
            i++;
        }
        if(solution[i] == 40){
            i++;
        }
        while((solution[i] >= 48 && solution[i] <= 57)){
            number[q] = solution[i];
            q++;
            i++;
        }
        if(solution[i] == 47){
            strcat(numerator, number);
            i++;
            while(solution[i] >= 48 && solution[i] <= 57){
                denominator[w] = solution[i];
                i++;
                w++;
            }
            if (solution[i] == 41){
                i = i + 3;
                while((solution[i] >= 48 && solution[i] <= 57)){
                    power[u] = solution[i];
                    u++;
                    i++;
                }

            }
            
            answerA = pow(a, atof(power)) * (atof(numerator) / atof(denominator));
            answerB = pow(b, atof(power)) * (atof(numerator) / atof(denominator));
        }
        if(solution[i] == var) {
            answerA = atof(number) * a;
            answerB = atof(number) * b;
        }
        
        if(pon == 1){
            answer =+ answerA;
            answer =- answerB;
        }
        else if(pon == 0){
            answer =- answerA;
            answer =+ answerB;
        }
        answerA = 0;
        answerB = 0;
        memset(power,0,strlen(power));
        memset(number,0,strlen(number));
        q = 0;
        w = 0;
        u = 0;
    }

    return answer;

}
