#include <cs50.h>
#include <stdio.h>

int main(void){
    string nombre = get_string("¿Cual es tu nombre?: ");
    printf("hello, %s\n", nombre);
}
