#include <iostream>
#include <cstdio>

int main() {
    int opcion;
    do {
        int cedula, tipoCliente, tipoTiquete, cantidadTiquetes;
        float montoUnitario, montoVenta, descuento, subtotal, impuesto, totalPagar;
        
        // Solicitar datos
        printf("Ingrese cedula del cliente: ");
        scanf("%d", &cedula);
        printf("Ingrese nombre del cliente: ");
        char nombre[100];
        scanf("%s", nombre);
        printf("Tipo de cliente (1=Nino o adulto mayor, 2=Adulto): ");
        scanf("%d", &tipoCliente);
        printf("Tipo de tiquete (1=Tiquete Galeria, 2=Tiquete Palco): ");
        scanf("%d", &tipoTiquete);
        printf("Cantidad de tiquetes a comprar: ");
        scanf("%d", &cantidadTiquetes);
        
        // Calcular montos
        if (tipoTiquete == 1) {
            montoUnitario = 6000;
        } else if (tipoTiquete == 2) {
            montoUnitario = 12000;
        } else {
            printf("Tipo de tiquete no valido.\n");
            continue;  // Volver al inicio del ciclo
        }
        
        montoVenta = cantidadTiquetes * montoUnitario;
        if (tipoCliente == 1) {
            descuento = montoVenta * 0.3;
        } else {
            descuento = 0;
        }
        subtotal = montoVenta - descuento;
        impuesto = subtotal * 0.13;
        totalPagar = subtotal + impuesto;
        
        // Mostrar datos de la venta
        static int numeroFactura = 1;
        printf("\nFactura #%d\n", numeroFactura++);
        printf("Cedula: %d\n", cedula);
        printf("Nombre: %s\n", nombre);
        printf("Tipo de cliente: %d\n", tipoCliente);
        printf("Tipo de tiquete: %s\n", tipoTiquete == 1 ? "Galería" : "Palco");
        printf("Cantidad de tiquetes: %d\n", cantidadTiquetes);
        printf("Monto unitario por tiquete: %.2f\n", montoUnitario);
        printf("Monto de venta: %.2f\n", montoVenta);
        printf("Descuento: %.2f\n", descuento);
        printf("Subtotal de venta: %.2f\n", subtotal);
        printf("Impuesto de venta: %.2f\n", impuesto);
        printf("Total a pagar: %.2f\n", totalPagar);
        
        // Preguntar si desea registrar otra venta
        printf("\n¿Desea registrar otra venta? (1=Sí, 0=No): ");
        scanf("%d", &opcion);
        printf("\n");
    } while (opcion == 1);
    
    // Mostrar estadísticas al finalizar las ventas
    // (Agrega aquí la lógica para calcular las estadísticas solicitadas)
    
    return 0;
}

