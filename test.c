#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[])
{
  //int value = info(2);
  printf(0, "There are %d processes in the system\n", info(1));
  printf(0, "Total number of syscall this process has made:%d\n", info(2));
  printf(0, "number of pages allocated to this process:%d\n", info(3));
  
  /*set_tickets(30);
  
  int i,k;
  const int loop=43000;
  for(i=0; i<loop; i++)
  {
    asm("nop");
    for(k=0; k<loop; k++)
       asm("nop");
  }
  printf(0, "number of ticks = %d\n", info(4)); */

  exit();
}
