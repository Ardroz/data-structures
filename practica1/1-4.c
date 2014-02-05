#include <stdio.h> 

void qs( int array[], int left_limit, int right_limit) {
    int left,
        right,
        temporal,
        pivot;

    left = left_limit;
    right = right_limit;
    pivot = array[(left+right)/2];

    do {
      while( array[left] < pivot && left < right_limit ) left++;
      while( pivot < array[right] && right > left_limit) right--;
      if ( left <= right ) {
        temporal = array[left];
        array[left]=array[right];
        array[right]=temporal;
        left++;
        right--;
      }

    } while( left <= right );
    if ( left_limit < right ) {
      qs( array, left_limit, right);
    }
    if( right_limit > left ) {
      qs( array, left, right_limit );
    }
}

void quicksort( int array[], int n) {
  qs( array, 0, n - 1);
}

int main(int argc, const char * argv[]) {
  int arrayLength = 0,
      i = 0;

  printf("Ingresa la longitud del arreglo: ");
  scanf( "%d", &arrayLength );

  int array [arrayLength];

  for ( i = 0; i < arrayLength; i++ ) {
    printf( "array[%d]: ", i );
    scanf( "%d", &array[i] );
  }

  quicksort( array, arrayLength );

  printf("Lista Ordenada \n");
  for ( i = 0; i < arrayLength; i++ ) {
      printf( "%d", array[i] );
      if( i < arrayLength - 1 ){
        printf(",");
      }
  }

  return 0;
}