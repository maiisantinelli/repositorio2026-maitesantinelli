#include <stdio.h>

int main() {
    int vector[5];
    int opcion, posicion, i;
    char seguir = 's';

    printf("--- Ingreso inicial de 5 valores ---\n");
    for (i = 0; i < 5; i++) {
        printf("Ingrese el valor %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    while (seguir == 's' || seguir == 'S') {
        printf("\n¿Que desea hacer?\n");
        printf("1. Ver todos los valores\n");
        printf("2. Modificar un valor\n");
        printf("Seleccione una opcion (1 o 2): ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("\nValores actuales del vector:\n");
            for (i = 0; i < 5; i++) {
                printf("Posicion %d: %d\n", i + 1, vector[i]);
            }
        } else if (opcion == 2) {
            printf("Ingrese la posicion que quiere modificar (1 a 5): ");
            scanf("%d", &posicion);
            if (posicion >= 1 && posicion <= 5) {
                printf("Ingrese el nuevo valor: ");
                scanf("%d", &vector[posicion - 1]);
                printf("¡Valor modificado con exito!\n");
            } else {
                printf("Posicion no valida.\n");
            }
        } else {
            printf("Opcion incorrecta.\n");
        }

        printf("\n¿Desea realizar otra operacion? (s/n): ");
        scanf(" %c", &seguir);
    }

    printf("\nPrograma finalizado.\n");
    return 0;
}
