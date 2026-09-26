#include <stdio.h>
int main(){
// The more serious problem is that because we have used integer arithmetic, the Celsius
// temperatures are not very accurate; for instance, 0
// oF is actually about -17.8oC, not -17. To get
// more accurate answers, we should use floating-point arithmetic instead of integer. This
// requires some changes in the program. Here is the second version: 
    float fahr, cels;
    float upper, lower, step;
    upper =300.0;
    lower = 0.0;
    step = 10.0;
    fahr = lower;
    while(lower <= upper){
        cels = (5.0/9.0)*(fahr -32.0);
        printf("%3.0f\t%6.2f\n", fahr, cels);
        fahr += step;
        lower += step;
    }
    
}
/*
%d print as decimal integer
%6d print as decimal integer, at least 6 characters wide
%f print as floating point
%6f print as floating point, at least 6 characters wide
%.2f print as floating point, 2 characters after decimal point
%6.2f print as floating point, at least 6 wide and 2 after decimal point
Among others, printf also recognizes %o for octal, %x for hexadecimal, %c for character, %s
for character string and %% for % itself
*/
