#include <stdio.h>
#include <string.h>

int encryptString( char *string );

int main() {
  char string[100];
  char character = ' ';
  int flag = 0;
  gets( string );

  flag = encryptString( string );
  printf("%s\n", string);
  return 0;
}

int encryptString( char *string ) {
  int length = strlen(string),
      i = 0;
  while ( i <= length - 1 ) {
    if ( (i % 2) == 0 ) {
      string[i]+=2;
    } else {
      string[i]+=3;
    }
    i++;
  }
  return 1;
}
