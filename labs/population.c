#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Solicitar tamaño inicial de llamas.
    int n;
    do
    {
        n = get_int("Start size: ");
    }while(n < 9);

    // Solicitar tamaño final de llamas.
    int end;
    do
    {
        end = get_int("End size: ");
    }while(end < n);

    // Calcular el numero de años para llegar al tamaño final de llamas.
    int years = 0;

    while(n < end)
    {
        n = n + (n/3) - (n/4);
        years++;
    }


    // Imprimir el número de años.
    printf("Years: %i\n", years);
}
