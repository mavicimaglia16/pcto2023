#include <stdio.h> 
int main() {
    int i = 0;
    int n;
    printf ("inserisciun numero\n");
    scanf("%d", &n);
     int array [n]; 
     int j;
     int k;
     while (i<n) {
        printf ("inserisci un numero\n");
        scanf("%d", & array[i]);
        i++;
     }
     i = 1;
     j = array [0];
     k = array [0];
     while (i<n) {
        if (array[i]< j)

     {
         j = array[i];
     }
     else if (array[i] > k )
     {
        k = array[i];
     }
    i++;
}
printf ("inserici il numero piu piccolo e'%d\n il numero piu grande e'%d\n", j, k);
} 
