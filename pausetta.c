#include <stdio.h> 

int main ()
{
    int x;
    printf ("inserisci l anno ");
    scanf ("%d", &x);
    if ((x%4== 0 && x%100 != 0)|| x%400 == 0 )
{
    printf ( "e'bisestile\n");
}
else{
    printf ("non e'bisestile\n");
}
}