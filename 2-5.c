/*!
 *  @file 2-5.c
 *  @brief This program will encrypt an string by adding + 2 to all the even 
      chars and +3 to all the odd chars.
 *  @author
      Name:     Rodriguez Rosas Daniel Arturo
      Twitter:  @ardroz
 *  @date 02/02/2014
 *  @version 1.0
*/

#include <stdio.h>
#include <string.h>

/*
 * Function: encryptString
 * --------------------
 * Encrypts an string by adding + 2 to all the even chars and +3 to all the odd.
 *
 *  *char[int]: Pointer to the string
 *
 *  returns: 1 if it could be encrypted, 0 if not.
 */
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