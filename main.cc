#include <stdio.h>
#include "beer.h"
/**
 * This was never tested.   I don't remember C syntax well.  But you know...
 */
int main( void ){
  int qty;
  printf( "How many pint of beer did you consume? : ");
  qty = getchar();

  bool result = beer( qty );
  if( result == true ) printf( "You have consumed %c pint of beer.\n", qty );
  else printf( "Do you need recommendations on where you could grab a pint?  Google it.\n" );
  
  return 0;
}
