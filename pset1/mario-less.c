#include <cs50.h>
#include <stdio.h>

int main(void)
{


    int n;

    // Solicitando la altura de la pirámide
    do
    {
        n = get_int("Height: ");
    }while(n < 1 || n > 8);


    // Mostrando la pirámide por consola
    for(int i=1; i<=n; i++){

        for(int k = n-i; k>0; k--){
            printf(" ");
        }

        for(int j=0; j<i; j++){
            printf("#");
        }
        printf("\n");
    }


}
