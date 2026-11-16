#include <stdio.h>

typedef struct {
    int edad;
    char iniciales[10];
    char tipo_sangre[10];
    float altura;
} Paciente;

int main() {
    Paciente p;
    char seguir = 's';
    int opcion;

    printf("--- Carga de datos del Paciente ---\n");
    printf("Ingrese la edad: ");
    scanf("%d", &p.edad);
    printf("Ingrese las iniciales: ");
    scanf("%s", p.iniciales);
    printf("Ingrese el tipo de sangre: ");
    scanf("%s", p.tipo_sangre);
    printf("Ingrese la altura (ej: 1.75): ");
    scanf("%f", &p.altura);

    while (seguir == 's' || seguir == 'S') {
        printf("\n¿Que dato desea consultar?\n");
        printf("1. Edad\n");
        printf("2. Iniciales\n");
        printf("3. Tipo de sangre\n");
        printf("4. Altura\n");
        printf("Elija una opcion (1-4): ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                printf("La edad del paciente es: %d\n", p.edad);
                break;
            case 2:
                printf("Las iniciales del paciente son: %s\n", p.iniciales);
                break;
            case 3:
                printf("El tipo de sangre es: %s\n", p.tipo_sangre);
                break;
            case 4:
                printf("La altura es: %.2f m\n", p.altura);
                break;
            default:
                printf("Opcion invalida.\n");
        }

        printf("\n¿Desea consultar otro dato? (s/n): ");
        scanf(" %c", &seguir);
    }

    printf("\nPrograma finalizado.\n");
    return 0;
}
