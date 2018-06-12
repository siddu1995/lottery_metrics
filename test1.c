#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[])
{
  int tickets = 0;

  //int value = info(2);
  //printf(0, "\n*****\n1)%d\n*****\n", info(1));
  //printf(0, "\n*****\n3)%d\n*****\n", info(3));
  //printf(0, "\n*****\n2)%d\n*****\n", value);
 
  if(fork())
    tickets = 50;
  else if (fork())
    tickets = 100;
  else
    tickets = 250;
  
  set_tickets(tickets);
  
  int i,k;
  const int loop=43000;
  for(i=0; i<loop; i++)
  {
    asm("nop");
    for(k=0; k<loop; k++)
       asm("nop");
  }
  
  info(4); 

  wait();  
  exit();
}
