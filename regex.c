#include <regex.h>
#include <stdio.h>
 
int main()
{
 
 
    regex_t regex;
 
 
    int value;
 
     value = regcomp(®ex, "[:word:]", 0);
 
    if (value == 0) {
        printf("RegEx compiled successfully.");
    }
 
    else {
        printf("Compilation error.");
    }
    return 0;
}
