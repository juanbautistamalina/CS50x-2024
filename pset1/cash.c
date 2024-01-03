#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Solicitar cantidad de centavos
    int cents = get_cents();

    // Calcular el numero de monedas de 25 Centavos
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calcular el numero de monedas de 10 Centavos
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calcular el numero de monedas de 5 Centavos
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calcular el numero de monedas de 1 Centavo
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sumar Monedas
    int coins = quarters + dimes + nickels + pennies;

    // Mostrar el numero total de monedas
    printf("%i\n", coins);
}

// Solicitar cantidad de monedas
int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    return cents;
}

int calculate_quarters(int cents) // 25
{
    int contador = 0;

    while (cents > 0)
    {
        if (cents - 25 >= 0)
        {
            cents = cents - 25;
            contador++;
        }
        else
        {
            break;
        }
    }

    return contador;
}

int calculate_dimes(int cents) // $10
{
    int contador = 0;

    while (cents > 0)
    {
        if (cents - 10 >= 0)
        {
            cents = cents - 10;
            contador++;
        }
        else
        {
            break;
        }
    }

    return contador;
}

int calculate_nickels(int cents) // $5
{
    int contador = 0;

    while (cents > 0)
    {
        if (cents - 5 >= 0)
        {
            cents = cents - 5;
            contador++;
        }
        else
        {
            break;
        }
    }

    return contador;
}

int calculate_pennies(int cents) // $1
{
    int contador = 0;

    while (cents > 0)
    {
        if (cents - 1 >= 0)
        {
            cents = cents - 1;
            contador++;
        }
        else
        {
            break;
        }
    }

    return contador;
}
