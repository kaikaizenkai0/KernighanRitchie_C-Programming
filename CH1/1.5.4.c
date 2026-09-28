//Count words, Characters, and lines
#include <stdio.h>
int main(){
    int word, characters, lines;
    characters =0;
    word = lines = 1;

    int buffer;
    while((buffer = getchar()) != '|'){
        if(buffer == '\n') lines++;
        if(buffer == ' ' || buffer == '\n' || buffer == '\t'){
            word++;
            continue;
        }
        characters++;
    }

    printf("%d characters, %d words, %d lines\n", characters, word, lines);
}
