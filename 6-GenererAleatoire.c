#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nombre;
    int min = 5, max = 39;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Génération d'un nombre aléatoire entre min et max
    nombre = (rand() % (max - min + 1)) + min;

    // Affichage du nombre généré
    printf("Nombre aléatoire généré : %d\n", nombre);

    return 0;
}
