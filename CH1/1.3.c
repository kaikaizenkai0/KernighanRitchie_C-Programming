// USING THE SAME FARENHEIT CELSIUS SCALE, BUT USING FOR LOOP
#include <stdio.h>

int main(){
    int fahr;
    for(fahr=0; fahr<=300; fahr+=10){
        printf("%3d\t%6.2f\n", fahr, 5.0*(fahr-32.0)/9.0);
    }
// FOR(INIT; LOOP CONDITION(RUNS UNTIL TRUE); STEP COUNT)

}
