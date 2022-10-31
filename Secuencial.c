#include <stdio.h>
#define TAM 10

int busquedaRecursiva(int tam, int arreglo[TAM],int num, int i, int band);

int main(){
    int arr[TAM] = {4,9,3,15,93,8,11,7,14,12};
    int num = 14;
    int band = 0;
    
    band = busquedaRecursiva(TAM, arr, num,0,band);
    
    if(band == 0){
        printf("No se encontró el valor en el arreglo");
    }
}

int busquedaRecursiva(int tam, int arreglo[TAM],int num, int i, int band){

    if(i>tam){  //0>7
        return band;
    }
        //4        0
    if(num == arreglo[i]){
        printf("El numero esta en la posicion: %d \n",i);
        band = 1;
    }

    return busquedaRecursiva(tam,arreglo,num,i+1,band);
}
