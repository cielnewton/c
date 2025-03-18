#include <stdio.h>

int main() {
    float moyenne;

    // Demande à l'utilisateur de saisir sa moyenne
    printf("Entrez votre moyenne : ");
    scanf("%f", &moyenne);

    // Vérification et affichage de l'appréciation
    if (moyenne < 7) {
        printf("Appréciation : Insuffisant\n");
    } else if (moyenne >= 7 && moyenne < 10) {
        printf("Appréciation : Fragile\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Appréciation : Moyen\n");
    } else if (moyenne >= 12 && moyenne < 16) {
        printf("Appréciation : Très bien\n");
    } else {
        printf("Appréciation : Excellent\n");
    }

    return 0;
}
