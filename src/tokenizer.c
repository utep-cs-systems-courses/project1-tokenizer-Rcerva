#include<stdio.h>
#include<tokenizer.h>

int space_char(char c){
  if(c == ' ' || c == '\n' || c == '\t'){
    return 1;
  }
  return 0;
}
 
char *word_start(char *str){
  char *curr = str;
  while(space_char(*curr)){
    curr++;
  }
  return curr;
}

char *word_terminator(char *word){
  char *curr = word;
  while(!space_char(*curr)){
    curr++;
  }
  return curr;  
}

int count_words(char *s){
  int count = 0;
  char *first;
  char *last;
  
  for(char *i = s; *i != '\0'; ){
    first = word_start(i);
    last = word_terminator(first);
    i = last;
    count++;
  }

  return count; 
}

char *copy_str(char *inStr, short len){
  char *first;
  char *last;
  char *curr = inStr;
  char copy[30][len];
  int index;

  for(int i = 0; i < len; i++){
    index = 0;
    first = word_start(curr);
    last = word_terminator(first);

    for(curr = first; curr != last; ){ 
     copy[index][i] = *curr;
     curr++;
     index++;
    }
    
  }
  
}
