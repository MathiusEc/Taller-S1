#include <stdio.h>
#include <string.h>

int main() {
    int val;
    int stock=-1, cantidad, opcion;
    float precio, total_ganancias = 0, venta=0;
    char nombre[30];
    char id[10];

    
    do {
        printf("\nMenu de Opciones:\n");
        printf("1. Registrar Producto \n");
        printf("2. Vender producto\n");
        printf("3. Reabastecer producto\n");
        printf("4. Mostrar informacion del producto\n");
        printf("5. Mostrar total de ganancias\n");
        printf("6. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
        case 1:
            // Registro del producto
            printf("Ingrese el ID del producto: ");
            fflush(stdin);
            fgets(id, 10, stdin);

            printf("Ingrese el nombre del producto: ");
            fflush(stdin);
            fgets(nombre, 30, stdin);

            do
            {
                do
                {
                    printf("Ingrese la cantidad inicial en stock: ");
                    fflush(stdin);
                    val = scanf("%d", &stock);
                    if (val != 1)
                    {
                        printf("El valor es incorrecto..\n");
                    }
                } while (val != 1);

                if (stock < 0)
                {
                    printf("La cantidad inicial en stock no puede ser negativa...\n");
                    printf("Porfavor ingrese de nuevo\n");
                    printf("\n");
                }
            } while (stock < 0);

            do
            {
                do
                {
                    printf("Ingrese el precio unitario del producto: ");
                    fflush(stdin);
                    val = scanf("%f", &precio);
                    if (val != 1)
                    {
                        printf("El valor es incorrecto..\n");
                    }
                } while (val != 1);

                if (precio < 0)
                {
                    printf("El precio unitario no puede ser negativo...\n");
                    printf("Porfavor ingrese de nuevo\n");
                    printf("\n");
                }
            } while (precio < 0);
            break;

        case 2:
            if (stock == -1)
            {
                printf("Primero debe registar el producto \n");
            }
            else
            {
                do
                {
                    do
                    {
                        do
                        {
                            printf("Ingrese la cantidad a vender: ");
                            fflush(stdin);
                            val = scanf("%d", &cantidad);
                            if (val != 1)
                            {
                                printf("El valor es incorrecto..\n");
                            }
                        } while (val != 1);

                        if (cantidad < 1)
                        {
                            printf("La cantidad a vender no puede ser negativa...\n");
                            printf("Porfavor ingrese de nuevo\n");
                            printf("\n");
                        }
                    } while (cantidad < 1);

                    if (cantidad > stock)
                    {
                        printf("La cantidad digitada supera al stock disponible...\n");
                        printf("Porfavor ingrese de nuevo\n");
                        printf("\n");
                    }
                } while (cantidad > stock);
                if (cantidad > 5)
                {
                    printf("Acreedor al descuento del 10 por ciento \n");
                    precio = precio * 0.9;
                }
                venta = cantidad * precio;
                stock -= cantidad;
            }

            break;

        case 3:
            if (stock == -1)
            {
                printf("Primero debe registar el producto \n");
            }
            else
            {
                do
                {
                    do
                    {
                        printf("Ingrese la cantidad a agregar al stock: ");
                        fflush(stdin);
                        val = scanf("%d", &cantidad);
                        if (val != 1)
                        {
                            printf("El valor es incorrecto..\n");
                        }
                    } while (val != 1);

                    if (cantidad < 1)
                    {
                        printf("La cantidad digitada no puede ser negativa...\n");
                        printf("Porfavor ingrese de nuevo\n");
                        printf("\n");
                    }
                } while (cantidad < 1);
                stock += cantidad;
            }
            break;

        case 4:
            if (stock == -1)
            {
                printf("Primero debe registar el producto \n");
            }
            else
            {
                printf("\nInformacion del producto:\n");
                printf("ID:\t\t\t%s\n", id);
                printf("Nombre:\t\t\t%s", nombre);
                printf("Stock disponible:\t%d\n", stock);
                printf("Precio unitario:\t%.2f\n", precio);
            }
            break;

        case 5:
            if (stock == -1)
            {
                printf("Primero debe registar el producto \n");
            }
            else
            {
                total_ganancias+=venta;
                printf("Total de ganancias: $%.2f\n", total_ganancias);
            }
            break;

        case 6:
            printf("\n");
            printf("Saliendo del programa...\n");
            break;

        default:
            printf("Opcion invalida. Intente nuevamente.\n");
        }
    } while (opcion != 6);

    return 0;
}  
