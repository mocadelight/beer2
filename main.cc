#include <iostream>
#include <string>
#include "beer.h"

using namespace std;

int main( void ){
  string qty_str;
  int qty;

  cout << "How many pint of beer did you consume?";
  cin >> qty_str;

  qty = atoi( qty_str.c_str());

  bool result = beer( qty );
  if( result == true ) printf( "You have consumed %d pint of beer.\n", qty );
  else printf( "Do you need recommendations on where you could grab a pint?  Google it.\n" );

  return 0;
}
