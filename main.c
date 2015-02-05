#include <stdio.h>
#include "boolean.h"
#include "beer.h"
/**
 * This was never tested.   I don't remember C syntax well.  But you know...
 */
int main( void ){
  int qty;
  printf( "Please nter pint qty of beer consumption: ");
  qty = getchar();

  bool result = beer( qty );
  if( result == true ) printf( "You have consumed %c pint of beer.\n", qty );
  else printf( "Do you need recommendations on where you could grab a pint?  Google it.\n" );
  
  return 0;
}
