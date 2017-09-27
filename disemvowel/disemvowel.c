#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "disemvowel.h"


// return true if ke isnt a vowel false if it is
bool notvowel(char ke) {

  return (ke!='a'||ke!='e'||ke!='i'||ke!='o'||ke!='u'
	  || ke!='A'||ke!='E'||ke!='I'||ke!='O'||ke!='U');
    }

// helper function for disemvowel
char* disemvoweler(char* str) {
  
  int length = strlen(str);
  int nonvowels = 0;
  int j = 0;
  char* newnovowels;

// all nonvowels will be counted to have size of new string
  for (int i = 0; i < length; i++) {
    if(notvowel(str[i])) {
      nonvowels++;
    }
  }

  // what will be returned
  newnovowels = (char*)calloc(nonvowels + 1, sizeof(char));

  for (int i = 0; i != '\0' &&  i < length; i++) {
    if (notvowel(str[i]) {
	newnovowels[j] = str[i];
	j++;
      }
  }
  free(str);
  newnovowel[j]='\0';
  return newnonvowel;
}

//disemvowels strings; main function
char* disemvowel(char* str) {
  return disemvoweler(str);
}
