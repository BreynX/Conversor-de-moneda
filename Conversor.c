#include <stdio.h>

#define TC_DOLAR_GTQ 7.75   // Tipo de cambio: 1 USD = 7.75 GTQ
#define TC_EURO_GTQ 8.49    // Tipo de cambio: 1 EUR = 8.49 GTQ
#define TC_DOLAR_EURO 1.09  // Tipo de cambio: 1 USD = 1.09 GTQ

int main() {
    int opcion;
    float cantidad;

    printf("Bienvenido al conversor de monedas\n");
    printf("¿Qué moneda desea convertir?\n");
    printf("1. Quetzales a Dólares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dólares a Quetzales\n");
    printf("4. Dólares a Euros\n");
    printf("5. Euros a Quetzales\n");
    printf("6. Euros a Dólares\n");
    scanf("%d", &opcion); 

    switch (opcion) {
        case 1:
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_GTQ);
            break;
        case 2:
            printf("Ingrese la cantidad en Quetzales: ");
            scanf("%f", &cantidad);
            printf("%.2f GTQ equivale a %.2f EUR\n", cantidad, cantidad / TC_EURO_GTQ);
            break;
        case 3:
            printf("Ingrese la cantidad en Dólares: ");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_DOLAR_GTQ);
            break;
        case 4:
            printf("Ingrese la cantidad en Dólares: ");
            scanf("%f", &cantidad);
            printf("%.2f USD equivale a %.2f EUR\n", cantidad, cantidad / TC_DOLAR_EURO);
            break;
        case 5:
            printf("Ingrese la cantidad en Euros: ");
            scanf("%f", &cantidad);
            printf("%.2f EUR equivale a %.2f GTQ\n", cantidad, cantidad * TC_EURO_GTQ);
            break;
        case 6:
            printf("Ingrese la cantidad en Euros: ");
            scanf("%f", &cantidad);
            printf("%.2f EUR equivale a %.2f USD\n", cantidad, cantidad * TC_DOLAR_EURO);
            break;
        default:
            printf("Opción no válida\n");   
    }

    return 0;
}