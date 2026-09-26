// BASIC CHARACTER INPUT AND OUTPUT
#include <stdio.h>
int main(){
    // int getch;
    // while((getch= getchar()) != EOF){
    //     printf("%zu\n", sizeof getch);
    // }
     /*
    THIS RETURNS THE SIZEOF AN INTEGER, SINCE WE GAVE SIZEOF THE GETCH VARIABLE.
    BUT THE OUTPUT WE GET IS 4\n4, WHICH MEANS WE GOT TWO INPUTS, EVEN IF WE GAVE ONE. WHY? 
    BECAUSE GETCHAR CONSIDERS THE ENTER KEY AS AN INPUT TOO, SIGNALING '\n'. ALSO IN WINDOWS, THE ENTER KEY GIVES '\r\n'.
    KEEP THIS IN MIND WHEN USING GETCHAR. OR, YOU CAN USE scanf("%d", &getch) to just get the character.
    */
    int get;
    while((get = getchar()) != EOF){
        printf("%c", get); //Just printing this puts a newline automatically, confirming the theory that the 2nd input is a newline character from the Enter Key.
        // putchar(get); can also be used
    }

}
