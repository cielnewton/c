#include <stdio.h>

int main() {
    int age;
    
    // Demande à l'utilisateur de saisir son âge
    printf("Entrez votre âge : ");
    
    // Lecture de la valeur entrée par l'utilisateur
    scanf("%d", &age);  // &age est l'adresse mémoire où stocker la valeur
    
    // Affichage de l'âge saisi
    printf("Vous avez %d ans.\n", age);
    
    return 0;
}
