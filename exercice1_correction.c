#include <stdio.h>

int main() {
    int nombre;

    // Demande à l'utilisateur de saisir un nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Vérifie si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        printf("Le nombre %d est pair.\n", nombre);
    } else {
        printf("Le nombre %d est impair.\n", nombre);
    }

    return 0;
}
