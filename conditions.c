#include <stdio.h>

int main() {
    int age;

    // Demande à l'utilisateur de saisir son âge
    printf("Entrez votre âge : ");
    scanf("%d", &age);

    // Vérifie si l'utilisateur est majeur ou mineur
    if (age >= 18) {
        printf("Vous êtes majeur.\n");
    } else {
        printf("Vous êtes mineur.\n");
    }

    return 0;
}
