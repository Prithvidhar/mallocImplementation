#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
  char * ptr1 = ( char * ) malloc ( 65535 );
  printf("malloc 1\n");
  char * buffer1 = ( char * ) malloc( 1 );
   printf("malloc 2\n");
  char * ptr4 = ( char * ) malloc ( 65 );
   printf("malloc 3\n");
  char * buffer2 = ( char * ) malloc( 1 );
  printf("malloc 4\n");
  char * ptr2 = ( char * ) malloc ( 6000 );
  printf("malloc 5\n");

  printf("Worst fit should pick this one: %p\n", ptr1 );
  printf("Best fit should pick this one: %p\n", ptr2 );

  free( ptr1 ); 
  free( ptr2 ); 

  buffer1 = buffer1;
  buffer2 = buffer2;
  ptr4 = ptr4;
 
  char * ptr3 = ( char * ) malloc ( 1000 );
  printf("malloc 6\n");
  printf("Chosen address: %p\n", ptr3 );

  return 0;
}

