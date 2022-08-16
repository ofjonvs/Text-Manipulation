#include <stdio.h>
#include <string.h>
#include "text_manipulation.h"

int remove_spaces(const char *source, char *result, int *num_spaces_removed) {
  int i, j;

  if(source == NULL || strlen(source)  == 0){
    return FAILURE;
  }
  
  *num_spaces_removed = 0;
  for(i = 0, j = 0; i < MAX_STR_LEN; i++){
    if(source[i] != ' '){
      result[j] = source[i];
      j++;
    }
    else if(source[i] == '\0'){
      result[j] == source[i];
      break;
    }
    else{
      *num_spaces_removed += 1;
    }
  }
  return SUCCESS;
}

int center(const char *source, int width, char *result) { 
  int used_width, i, j;

  if(source == NULL || strlen(source) == 0){
    return FAILURE;
  }

  if(width - strlen(source) % 2 == 1){
    used_width = (width - 1 - strlen(source)) / 2;
  }
  else{
    used_width = (width - strlen(source))/ 2;
      }

  for(i = 0; i < used_width; i++){
    result[i] = ' ';
  }

  for(j = 0; source[j] != '\0'; j++){
    result[i++] = source[j];
  }

  for(j = 0; j < used_width; j++){
    result[i++] = ' ';
  }

  return SUCCESS;
      
}

/*int main(){
  char result[20];
  int spaces_removed;

  remove_spaces("    city     ", result, &spaces_removed);

  return 0;
}*/
