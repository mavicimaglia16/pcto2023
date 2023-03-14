
 
 #include <stdio.h>  
 int main ()
 {
    char sesso;
    printf("quale e'il tuo sesso ");
scanf(" %c",&sesso);
if (sesso == 'm' )
{
    printf ("sei maschio\n");
}
if ( sesso == 'f')
{ 
    printf ("sei femmina\n");

}
else if ( sesso == 'n'  )
{
    printf ( "non ti identifichi\n ");
    
 }
 else 
 {
    printf ("errore\n");
 }
 }