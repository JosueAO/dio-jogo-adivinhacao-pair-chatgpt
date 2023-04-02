#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num, guess, tries = 0;
    srand(time(0)); // semente aleatória
    num = rand() % 100 + 1; // número aleatório entre 1 e 100
  
printf("Adivinhe um número entre 1 e 100\n");
    do {
        printf("Tentativa %d: ", tries+1);
        scanf("%d", &guess);
        tries++;

        if (guess > num) {
            printf("Muito alto!\n");
        } else if (guess < num) {
            printf("Muito baixo!\n");
        } else {
            printf("Parabéns, você adivinhou o número em %d tentativas!\n", tries);
        }
    } while (guess != num);
    return 0;
}