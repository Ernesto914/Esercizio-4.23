#include <stdio.h>
#include <math.h>
int main(void)
{
    int numy, numx=1, potenza=1;
    double ris;
    printf("Inserisci un numero positivo intero: ");
    scanf("%d", &numy);

    do
    {
        ris = pow(numx, potenza);
        printf(" %.0f < %d\n", ris, numy);
        numx++;
        potenza++;
    } while (ris < numy);
}
