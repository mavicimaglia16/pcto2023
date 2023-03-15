#include <stdio.h>
int main ()
{
    int x, y, z;
    x = 0;
    z = 0;
    y = 0;
    int media; 
    

while (x>=0)
{
    printf("inserire una serie di numeri");
    scanf("%d", &x);
   z = z +1;
   y = y + x;
   media = y / z;
   if (x>= 0 && z >1 )
   {
    printf("la media e' %d\n" , media);
   }
     
    
}
}