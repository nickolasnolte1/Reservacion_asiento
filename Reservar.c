#include <stdio.h>
#include <stdlib.h>

// Colores
void blue(){
  printf ("\033[0;34m");
} 
void green(){
  printf ("\033[0;32m");
}
void red(){
  printf("\033[0;31m");
}
void yellow(){
  printf("\033[0;33m");
}
void reset (){
  printf ("\033[0m");
}

//Funciones globales
int asientos [32][7]
int filas [1][32]
char columnas [7]={' ','A','B','C','D','E','F'
};
char vuelo [10];
char opcion [2];
char*asiento= opcion;
int i,j;

//Funcion de Bienvenida
void bienvenida (){
    printf("\nBIENVENIDO A SAMALTE AIRLINES\n");
     printf("------------------------------\n");

red();
printf("     ****\n");
yellow();
printf("      *****\n");
red();
printf("       ******\n");
yellow();
printf("       *******\n");
red();
printf("        **********************************\n");
blue();
printf("         \\                            ////////\n");
red();
printf("          \\                              *****\n");
printf("           ***************    ***************\n");
printf("                         *   *\n");
printf("                        *   *\n");
printf("                       *   *\n");
printf("                         *\n");
reset();

        printf("Escribe el número de vuelo\n");
        scanf("%s, vuelo");
        printf("\n");
        printf("Bienvenido al vuelo %s\n", vuelo);
}


 
 //Escoger Asientos
    void escoger(){
        printf("Escoja un número de asiento: \n");
        scanf("%c", opcion); 
}

//Mapa de asientos
void mapa(){
    printf("Asientos disponibles: 0\n Asientos ocupados: X\n");
    printf("\n");
    for (int a=0;a<6;a++){
        printf("[%c]", columnas[a]);
    }
    printf("\n");
    for (int a=0;a<1;a++){
        for (int b=0;b<32;b++){
            asientos[i][j]=0;
            printf("[%d]", asientos[i][j]);
        }
        printf("\n");
    }
}

//Clear screen
void clearscreen (){
    system("@cls||clear");
}

//Main 
int main (void){
    //Definiciones locales
    int opcion;
    //Código
    bienvenida();
    Menu:
    printf("----------------------\n");
    printf("MENÚ PRINCIPAL\n");
    printf("1. Reservar Asientos\n 2. Ver Mapa de Asientos\n 3. Salir\n");
    printf("----------------------\n");
    Escoger:
    scanf("%d", &opcion);
    //Escoger Asientos
    if (opcion==1){
        escoger();
        printf("%s", &asiento[0]);
    }
    //MAPA de Asientos
    else if(opcion==2){
        clearscreen();
        mapa();
        goto Escoger;
    }
    //Salir
    else if(opcion==3){
        clearscreen();
        printf("GRACIAS POR UTILIZAR NUESTROS SERVICIOS!\n");
        exit(0);
    }
    else{
        clearscreen();
        printf("Opción inválida");
        goto Menu;
    }

    return 0;
}