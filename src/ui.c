#include <stdio.h>
#include <string.h>

int main(){
  puts("Welcome!");

  char input[30];
  char history[10][30];
  char *begin;
  char *end;
  
  while(1){
    int unusedSpace = 0;
    int i = 0;
    puts("Input String of Characters:");

    printf(">");

    scanf("%s", input);

    begin = word_start(input);
    printf("Begin Char: %c\n", *begin);
    end = word_terminator(begin);
    printf("End Char: %c\n", *end);
    
  }
}
