#include <stdio.h>

int main() {
    int nombre;

    // Demande à l'utilisateur de saisir un nombre
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Vérification avec if, else if et else
    if (nombre > 0) {
        printf("Le nombre est positif.\n");
    } else if (nombre < 0) {
        printf("Le nombre est négatif.\n");
    } else {
        printf("Le nombre est nul.\n");
    }

    return 0;
}
