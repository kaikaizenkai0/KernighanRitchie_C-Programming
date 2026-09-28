// Recreate Power function
#include <stdio.h>
int power(int base, int exp); // Function prototype
int main(){
    printf("%d\n", power(2,3));
    printf("%d\n", power(2,4));
    printf("%d\n", power(2,5));

}
int power(int base, int exp){
    int val=base;
    for(int i=1; i!=exp; i++){
        val *= base;
    }
    return val;

}
