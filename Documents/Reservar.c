#include <stdio.h>
#include <stdlib.h>
int asientos[6][32];
char vuelo[5];
int opcion; 

//Función de Bienvenida
void bienvenida(){
    printf("Escribe el número de vuelo\n");
    scanf("%s", &vuelo); 
    printf("Bienvenido al vuelo %s", vuelo); 
}  

//Mapa de asientos
void mapa(){
    for (int i=0;i<32;i++){
        for (int j=0;j<6;j++){
            asientos[i][j] = 0;
        }
        printf("\n");
    }
    printf("[%d][%d]", asientos[i][j]); 
}


//Main
int main (void){
    bienvenida();
    printf("MENÚ PRINCIPAL\n");
    printf("1.Reservar Asientos\n2.Ver Mapa de Asientos\n3.Salir\n");
    scanf("%d", &opcion); 
    //Escoger Asientos
    if (opcion==1){

    }
    //MAPA de Asientos
    else if(opcion==2){
        mapa(); 
    }
    //Salir
    else if(opcion==3){
        
    }
    else{
        printf("Opción Invalida");
    }
    
    return 0; 
}
