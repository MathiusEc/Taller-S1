#include <stdio.h>
#include <string.h>
void limpiarbuffer(){
     // Limpiar el Buffer
     int c;
     while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int id, stock, cantidad, opcion;
    float precio, total_ganancias = 0;
    char nombre[30];

    // Registro del producto
    printf("Ingrese el ID del producto: ");
    scanf("%d", &id);
    
    limpiarbuffer();
    printf("Ingrese el nombre del producto: ");
    fgets(nombre, 30, stdin);
    
    do {
        printf("Ingrese la cantidad inicial en stock: ");
        scanf("%d", &stock);
        if (stock < 0) {
            printf("La cantidad inicial en stock no puede ser negativa...\n");
            printf("Porfavor ingrese de nuevo\n");
            printf("\n");
        }
    } while (stock < 0);
    
    do {
        printf("Ingrese el precio unitario del producto: ");
        scanf("%f", &precio);
        if (precio < 0) {
            printf("El precio unitario no puede ser negativo...\n");
            printf("Porfavor ingrese de nuevo\n");
            printf("\n");
        }
    } while (precio < 0);
    
    do {
        printf("\nMenú de Opciones:\n");
        printf("1. Vender producto\n");
        printf("2. Reabastecer producto\n");
        printf("3. Mostrar información del producto\n");
        printf("4. Mostrar total de ganancias\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                do {
                    do {
                        printf("Ingrese la cantidad a vender: ");
                        scanf("%d", &cantidad);
                        if (cantidad < 0) {
                            printf("La cantidad a vender no puede ser negativa...\n");
                            printf("Porfavor ingrese de nuevo\n");
                            printf("\n");
                        }
                    }while (cantidad);
                   
                    if (cantidad > stock) {
                        printf("La cantidad digitada supera al stock disponible...\n");
                        printf("Porfavor ingrese de nuevo\n");
                        printf("\n");
                    }
                } while (cantidad > stock);
                stock -= cantidad;
                break;

            case 2:
                do {
                    printf("Ingrese la cantidad a agregar al stock: ");
                    scanf("%d", &cantidad);
                    if (cantidad < 0) {
                        printf("La cantidad digitada no puede ser negativa...\n");
                        printf("Porfavor ingrese de nuevo\n");
                        printf("\n");
                    }
                }while (cantidad < 0);
                stock += cantidad;
                break;

            case 3:
                printf("\nInformación del producto:\n");
                printf("ID:\t\t\t%d\n", id);                  
                printf("Nombre:\t\t\t%s", nombre);          
                printf("Stock disponible:\t%d\n", stock);    
                printf("Precio unitario:\t%.2f\n", precio);  
                break;

            case 4:
                printf("Total de ganancias: $%.2f\n", total_ganancias);
                break;

            case 5:
                printf("\n");
                printf("Saliendo del programa...\n");
                break;
                
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 5);

    return 0;
}
