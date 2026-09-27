#include <stdio.h>
int main(){
    //Count lines this time
    int linecount =0;
    int get;
    while((get= getchar()) != '|') {
    // I'm using this since I'm using it for console IO, and EOF isn't working.it's gonna exit the loop when i leave this char in.
        if(get == '\n') linecount++;


}
    printf("Total lines counted: %d\n", ++linecount); //To count the final line which includes our ending signalling character.
}
