#include <stdio.h>

int main() {
    char op;
    float num1, num2, resultat;

    printf("Entrez un opérateur (+, -, *, /) : ");
    scanf("%c", &op);

    printf("Entrez deux nombres : ");
    scanf("%f %f", &num1, &num2);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            printf("Le résultat de l'addition est : %.2f\n", resultat);
            break;
        case '-':
            resultat = num1 - num2;
            printf("Le résultat de la soustraction est : %.2f\n", resultat);
            break;
        case '*':
            resultat = num1 * num2;
            printf("Le résultat de la multiplication est : %.2f\n", resultat);
            break;
        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                printf("Le résultat de la division est : %.2f\n", resultat);
            } else {
                printf("Erreur : division par zéro.\n");
            }
            break;
        default:
            printf("Opérateur invalide.\n");
            break;
    }

    return 0;
}

