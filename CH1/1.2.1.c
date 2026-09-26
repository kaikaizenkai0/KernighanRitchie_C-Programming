#include <stdio.h>
int main(){
int fahr, cels;
int lower,upper,step;

lower =0; //lower limit of scale
upper =300; //upper limit of scale
step = 10; //step count
fahr = lower;
while (fahr <= upper){
    cels = 5*(fahr -32)/9; 
// The reason for multiplying by 5 and dividing by 9 instead of just multiplying by 5/9 is that in
// C, as in many other languages, integer division truncates: any fractional part is discarded.
// Since 5 and 9 are integers. 5/9 would be truncated to zero and so all the Celsius temperatures
// would be reported as zero. 
    printf("%d\t%d\n", fahr, cels);
    fahr += step;
}

}
