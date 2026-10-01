// Function:- Call by Value
// Use pointers to get the argument
#include <stdio.h>
void power(int* output, int exp);
int main(){
    int a =2;
    int* pointtoa = &a;
    power(pointtoa, 0);
    printf("%d\n",a);
}
void power(int* output, int exp){
    int base;
    base = *output;
    for(int temp =1; temp!=exp; temp++){
        *output = (*output)*base;
    }
}
