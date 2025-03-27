# EJERCICIO DE PROGRAMACIÓN

## Integrantes
Isaac Benítez - 
Mathías Castillo

## INDICACIONES 
Un pequeño comerciante necesita un programa en C para gestionar la venta de un único producto en su tienda. El programa debe permitirle:
* Registrar los datos del producto: ID, nombre, cantidad en stock y precio unitario.
* Vender unidades del producto: El usuario debe ingresar cuántas unidades desea vender y el programa debe verificar si hay suficiente stock antes de realizar la venta.
* Reabastecer el producto: Permitir al usuario agregar más unidades al stock.
* Consultar información actualizada del producto.
* Calcular y mostrar las ganancias obtenidas hasta el momento a partir de las ventas realizadas.
* Salir del programa.

## REQUERIMENTOS TÉCNICOS
* Uso de variables (enteros, flotantes, cadenas).
* Entrada y salida de datos (printf, scanf, fgets, gets).
* Estructuras de control
  * Condicionales (if, else, switch) para validar opciones y restricciones (como no permitir ventas si no hay stock suficiente).
  * Iteraciones (while, do-while) para mantener el programa en ejecución hasta que el usuario decida salir.
  * Cálculos matemáticos para manejar las ventas y ganancias.

## Actividades

1. Completar las secciones faltantes del código:
   - Evitar que se vendan más unidades de las disponibles (condicional `if`).
   - Actualizar correctamente el stock y las ganancias en cada venta.
   - Permitir al usuario reabastecer el stock correctamente.

2. Probar el código con distintos escenarios:
   - Intentar vender más productos de los que hay en stock (el programa debe impedirlo).
   - Agregar productos al stock y verificar que el sistema los registre correctamente.
   - Realizar múltiples ventas y calcular las ganancias acumuladas.

3. Extender la funcionalidad:
   - Agregar validaciones para evitar valores negativos.
   - Mejorar la presentación de la información usando `\t` y `\n`.
   - Permitir al usuario ingresar un descuento al precio del producto en cada venta.

