#include <stdio.h>

/*
   napisao hernad@bring.out.ba svojoj sceri Samri
*/

/* legend: samrin_babo = 1 => Ernad
           samrin_babo = 2 => other 
*/

const int samrin_babo = 2;

int main()
{
  if (samrin_babo == 1)
    printf("hello from Samra Husremovic");
  else
    printf("hello from neka druga Samra");

  printf("\n");

  return 0;
}
