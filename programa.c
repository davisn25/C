#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    int myAge;
    int momsAge;
    int dadsAge;

    myAge = 17;
    momsAge = 50;
    dadsAge = 32;

    printf("Minha idade: %d\n", myAge);
    printf("Idade do meu pai: %d\n", dadsAge);
    printf("Idade da minha mãe: %d", momsAge);
}