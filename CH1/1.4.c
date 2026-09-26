// USING THE SAME FARENHEIT CELSIUS SCALE, BUT USING FOR LOOP
#include <stdio.h>
// A #define line defines a symbolic name or symbolic constant to be a particular string of characters.
#define LOWER 0
#define UPPER 300
#define STEP 10
int main(){
    int fahr;
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP){
        printf("%3d\t%6.2f\n", fahr, (5.0/9.0)*(fahr-32.0));
    }
}
