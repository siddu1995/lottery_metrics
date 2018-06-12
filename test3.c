#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[])
{
  //int value = info(2);
  //printf(0, "\n*****\n1)%d\n*****\n", info(1));
  //printf(0, "\n*****\n3)%d\n*****\n", info(3));
  //printf(0, "\n*****\n2)%d\n*****\n", value);
  set_tickets(50);
  
  int i,k;
  const int loop=43000;
  for(i=0; i<loop; i++)
  {
  //  if (i%1000==0)
    // printf(0, "i=%d ", i);
    asm("nop");
    for(k=0; k<loop; k++)
       asm("nop");
  }
 
  //printf(0, "\n3)number of ticks = %d\n", info(4)); 
  exit();
}
