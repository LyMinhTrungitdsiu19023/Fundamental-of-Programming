#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int i, n;
   time_t t;
   
   n = 5;
   
   /* Khoi tao bo sinh so ngau nhien */
   srand((unsigned) time(&t));

   /* in 5 so ngau nhien trong day tu 0 toi 50 */
   for( i = 0 ; i < n ; i++ )    /* i là so vong lap*/
   {
      printf("%d\n", rand() % 50);
   }
   
   return(0);
}
