#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Solicitando altura de los triángulos
    int n;
    do{
        n = get_int("Height: ");
    }while(n < 1 || n > 8);


    // Mostrando por pantalla los triángulos

    // Pirámide Izquierda
    for(int i = 0; i<n; i++){

        for(int k = n-1; k>i; k--){
            printf(" ");
        }

        for(int j = 0; j<=i; j++){
            printf("#");
        }

        printf("  ");

        for(int m = i; m<=i; m++){
            for(int a = 0; a<=m; a++){
                printf("#");
            }
        }
        printf("\n");
    }


    // Pirámide Derecha








}
