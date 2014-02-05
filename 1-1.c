#include <stdio.h>

int swapOccurences ( int *array, int toChange );

int main() {
  int arrayLength = 0,
      i = 0,
      toChange = 0,
      changed = 0;

  printf("Ingresa la longitud del arreglo: ");
  scanf( "%d", &arrayLength );

  int array [arrayLength];

  for ( i = 0; i < arrayLength; i++ ) {
    printf( "array[%d]: ", i );
    scanf( "%d", &array[i] );
  }

  array[i] = 0;

  printf("Ingresa el número a cambiar: ");
  scanf( "%d", &toChange );

  changed = swapOccurences( array, toChange );

  printf("Se modificaron %d ocurrencias.\n", changed);

  for ( i = 0; i < arrayLength; i++ ) {
    printf( "array[%d]: %d\n", i, array[i] );
  }
  return 0;
}

int swapOccurences ( int *array, int toChange ) {
  int i = 0,
      changeTo = 0,
      counter = 0;

  printf("Cambiar por: ");
  scanf( "%d", &changeTo );

  while ( array[i] ) {
    if ( *(array + i) == toChange ) {
      *(array + i) = changeTo;
      counter++;
    }
    i++;
  }

  return counter;
}