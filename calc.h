
//checks if product rule is usable


int isPowerable (char *arr, const char var);

//performs the product rule
char productRule (char *arr, int length, char term);

//performs a string tokenization on an entire string
void tokenization (char *arr, char **arr2, char token1[]);

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
if term is greater than length (this isnt gonna be exactly correct, just find what works) then the function is done and do nothing
since it is a void function, you dont use return.
*/
void derivative (char **arr2, char *arr, char var, int term, int length);