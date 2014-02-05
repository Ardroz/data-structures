#include <stdio.h>

int swapOccurrences( char *string, char character );

int main() {
  char string[100];
  char character = ' ';
  int times = 0;
  gets( string );

  printf("Ingresa el caracter a cambiar: ");
  scanf( "%c", &character );
  setbuf(stdin,NULL);

  times = swapOccurrences( string, character );
  printf("%s \n", string);
  
  printf("%d ocurrencias\n", times);
  return 0;
}

int swapOccurrences( char *string, char character ) {
  int i = 0,
      counter = 0;
  char to = ' ';

  printf("Cambiar por: ");
  scanf( "%c", &to );

  while ( string[i] ) {
    if ( string[i] == character ) {
      string[i] = to;
      counter++;
    }
    i++;
  }
  return counter;
}
