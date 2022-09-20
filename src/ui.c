#include <stdio.h>
#include <string.h>
#


int main(){
  puts("Welcome!");

  char input[30];
  char history[10][30];
  char *begin;
  char *end;
  
  while(1){
    int unusedSpace = 0;
    puts("Input String of Characters:");

    printf(">");

    scanf("%s", input);
    // printf("Saved To History: %s\n", input);

    /*
    history[unusedSpace] = input;
    unusedSpace++;
    printf("History: %s", history[unusedSpace]);
    */      

    /*
    for(int i = 0; i < 30; i++){
      *begin =  *word_start(input[i]);
      *end = *word_terminator(input[i]);
    }
    
    }
    */
}

int space_char(char c){
  if(c == ' ' || c == '\n' || c == '\t'){
    return 1;
  }
  return 0;
}
/*
char *word_start(char *str){
  while(space_char(&str)){
    *str = *str+1;
  }
  return *str;
}

char *word_terminator(char *word){
  while(!space_char(&str)){
    *str = *str+1;
  }
  return *str;  
}
*/  
}
