#include "types.h"
#include "user.h"

#define NUM_FORKS 500

int main(void)
{
    int *temp;
    int t1, t2;

    temp=malloc(40960); //required to allocate more pages to get better results
    *temp=0;

    printf(1,"Please wait some more!.....\n");
    t1 = 3;
    t2 = 0;
    t1 = t1+t2;
    if (cowfork() == 0){
      //t2 = 5;
    //  printf(1,"t2 = %d\n",t2);
      t1= 20;
      printf(1,"I AM A CHILD! %d \n",t1);
      exit();
    } else{
    //  t1 = 7;
    //  printf(1,"t1 = %d\n",t1);
      printf(1,"I am the father t1 = %d!\n",t1);
      wait();
      printf(1,"I am the father t1 = %d!\n",t1);

      exit();
    }
}