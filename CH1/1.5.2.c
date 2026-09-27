#include <stdio.h>
int main(){
    int count = 0;
    int get;

    // Count the number of characters input at a time
    while((get = getchar()) != '\n'){ 
/*
Use this instead of EOF to count just the number of characters.
can use another EOF and printf --count inside the loop in order to make this work,
but I feel that this is much cleaner example.
*/
        
        ++count;
    }
    printf("Total Output characters: %d(Excludes \\n)\n", count);
}
