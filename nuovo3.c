#include <stdio.h>
int main ()
{
    int eta;
    printf ("quanti anni hai ? ");
    scanf ( "%d", &eta);
    printf ("la tua eta e'%d/n", eta );
    if ( eta<18)
    { 
        printf ("sei minorenne \n");
    }
    else 
    {
        printf ("sei monerene \n");
    }
}