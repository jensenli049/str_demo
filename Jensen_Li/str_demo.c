#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int better_word(char * str1, char * str2);
int a_kind(char * str1, char * str2, int num);

int main(){
  srand( time(NULL) );
  char str[][13] = { "pork" , "cement" , "gallery" , "feel" , "scenic" , "demolishment" , "binding" , "subsonic" , "swarm" , "overt" };
  int i;
  for(i = 0; i < 3; i++){
    int n = rand() % 9;
    //printf("%d\n",n);
    better_word(str[n],str[n+1]);
  }
  for(i = 0; i < 3; i++){
    int n = rand() % 9;
    if(n<4)
      a_kind(str[n],str[n+1],n);
    else
      a_kind(str[n],str[n+1],2);
  }  
}

int better_word(char * str1, char * str2){
  //int strcmp ( const char * str1, const char * str2 );
  if(strcmp(str1,str2) < 0)
    printf("%s is better than %s!\n", str1, str2);
  else if(strcmp(str1,str2) > 0)
    printf("%s is better than %s!\n", str2, str1);
  else
    printf("%s is always the best!\n", str1);
}

int a_kind(char * str1, char * str2, int num){
  //int strncmp ( const char * str1, const char * str2, size_t num );
  if(strncmp(str1,str2,num) == 0)
    printf("%s and %s are two of a kind!\n", str1, str2);
  else if(strncmp(str1,str2,num) > -5 && strncmp(str1,str2,num) < 5)
    printf("%s and %s are pretty similar but not yet of a kind!\n", str1, str2);
  else
    printf("%s and %s are NOT EVEN CLOSE! You BETTER TRY AGAIN!\n", str1, str2);

}
