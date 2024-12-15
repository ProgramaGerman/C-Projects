#include <stdio.h>
#include <string.h>
#include<stdbool.h>

const int MAX = 100;



struct materiales {
    int id;
    char nombre[20];
    double costo;
    char fecha[20];
} Amaterial, inventario[100], mostrador[100],aux;


int contador = 0, llenado = 0;//Variables de control de Amateriales e Inventario

void solicitud() {

    printf("\n\nPor favor indique el nombre del producto:");
    scanf("%s", &Amaterial.nombre);

    printf("\n Indique la fecha del producto:");
    scanf("%s", &Amaterial.fecha);

    printf("\n Indique el costo del producto $:");
    scanf("%d", &Amaterial.costo);



            printf("\nGuardando los Datos...\n");

            Amaterial.id = contador;
            strcpy(mostrador[contador].nombre, Amaterial.nombre);
            strcpy(mostrador[contador].fecha, Amaterial.fecha);
            mostrador[contador].costo = Amaterial.costo;
            mostrador[contador].id = Amaterial.id;
            contador++;

            printf("\nGuardado Exitoso...\n");

}

void compraMostrador(){
    int accion = 0, id = 0;

    do{

    printf("\n\nId del Producto: %i", mostrador[id].id);
    printf("\nNombre del Producto: %s",mostrador[id].nombre);
    printf("\nFecha del Producto: %s",mostrador[id].fecha);
    printf("\nCosto del Producto: %i", mostrador[id].costo);
    printf("\n\n Que desea hacer? ");
    printf("\n 1. Comprar\n 2. Pasar a siguiente\n 3.Salir al menu\n Opcion:");
    scanf("%i",&accion);

    switch(accion){
    case 1:
        mandarInventario(id);
        break;
    case 2:
        if(id < contador){
            id ++;
        }else{
            printf("\n No hay mas productos. \n");
        }
        break;
    case 3:
        printf("\n\nVolviendo al menu....\n\n");
        break;
    default:
        printf("\nIngrese una opcion valida\n");
        break;
    }
}while(accion != 3);
}

void limpiar() {
    strcpy(Amaterial.nombre, "");
    strcpy(Amaterial.fecha, "");
    Amaterial.costo = 0;
}



//metodo de ordenamiento por burbuja
void ordenarM(){

void ordenarI(){
 for(int i = 0; i < llenado; i++){
    if(strcmp(inventario[i].nombre, "") && strcmp(inventario[i].fecha, "") && inventario[i].costo == 0){
            if(i < contador ){
                //proceso de copiado al auxiliar
                strcpy(aux.nombre,inventario[i].nombre);
                strcpy(aux.fecha,inventario[i].fecha);
                aux.costo = inventario[i].costo;
                aux.id = inventario[i].id;

                //proceso de traslado de los productos siguientes a la posicion anterior
                strcpy(inventario[i].nombre,inventario[i+1].nombre);
                strcpy(inventario[i].fecha,inventario[i+1].fecha);
                inventario[i].costo = inventario[i+1].costo;
                inventario[i].id = inventario[i+1].id;

                //proceso de traslado de auxiliar a la posicion siguiente de los productos
                strcpy(inventario[i+1].nombre,aux.nombre);
                strcpy(inventario[i+1].fecha,aux.fecha);
                inventario[i+1].costo = aux.costo;
                inventario[i+1].id = aux.id;


            }else{
                printf("\n\n Ya no hay mas espacio.");
            }
    }

 }
 printf("\n\nProceso Terminado\n\n");

}
 for(int i = 0; i < contador; i++){
    if(strcmp(mostrador[i].nombre, "") && strcmp(mostrador[i].fecha, "") && mostrador[i].costo == 0){
            if(i < contador ){
                //proceso de copiado al auxiliar
                strcpy(aux.nombre,mostrador[i].nombre);
                strcpy(aux.fecha,mostrador[i].fecha);
                aux.costo = mostrador[i].costo;
                aux.id = mostrador[i].id;

                //proceso de traslado de los productos siguientes a la posicion anterior
                strcpy(mostrador[i].nombre,mostrador[i+1].nombre);
                strcpy(mostrador[i].fecha,mostrador[i+1].fecha);
                mostrador[i].costo = mostrador[i+1].costo;
                mostrador[i].id = mostrador[i+1].id;

                //proceso de traslado de auxiliar a la posicion siguiente de los productos
                strcpy(mostrador[i+1].nombre,aux.nombre);
                strcpy(mostrador[i+1].fecha,aux.fecha);
                mostrador[i+1].costo = aux.costo;
                mostrador[i+1].id = aux.id;


            }else{
                printf("\n\n Ya no hay mas espacio.");
            }
    }

 }
 printf("\n\nProceso Terminado\n\n");

}

void mostrar() {
    printf("\n\nMostrando productos....\n");

    for (int i = 0; i < contador; i++) {
        printf("\nProducto no: %d\n", mostrador[i].id);
        printf("Nombre: %s\n", mostrador[i].nombre);
        printf("Fecha: %s\n", mostrador[i].fecha);
        printf("Costo: %d$\n", mostrador[i].costo);
    }
}

void mandarInventario(int id){
    printf("\n Transfiriendo los datos al Inventario\n");

    if(llenado < MAX){
        inventario[llenado].id = mostrador[id].id;
        strcpy(inventario[llenado].nombre,mostrador[id].nombre);
        strcpy(inventario[llenado].fecha,mostrador[id].fecha);
        inventario[llenado].costo = mostrador[id].costo;

        printf("\nCompra Exitosa.\n");
    }else{
        printf("\nEl Inventario esta lleno.\n");
    }

}

int main(int argc, char const *argv[]) {
    int accion = 0;


    printf("Bienvenido....\n");

    do{

    printf("\n\n #Mostrador#\nIngrese una opcion:\n 1. Registar \n 2. Mostrar \n 3. Salir\n Opcion:");
    scanf("%i",&accion);

    switch(accion){
case 1:
    solicitud();
    limpiar();
    break;

case 2:
     mostrar();
    break;

case 3:
    printf("\n\nPrograma terminado.\n");
    return 0;
    break;
default:
    printf("\n\nIntente con otra opcion.\n");
    break;

    }

    }while(accion != 3);

    return 0;
}
