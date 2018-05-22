#include "clase.h"

arreglodinamicoint::arreglodinamicoint(int tamanio,int arr[]){
    this->tamanio=tamanio;
    this->data=new int[tamanio];
    for(int i=0;i<=tamanio;i++){
        data[i]=arr[i];
    }
}
void arreglodinamicoint::insertaratras(int elem){
    int *nuevo = new int[tamanio++];
    for(int i=0;i<=tamanio;i++){
        nuevo[i]=data[i];

    }
    nuevo[tamanio-1]=elem;
    delete data;
    int *data=nuevo;


}

void insertar (int pos,int elem){
    int *nuevo = new int[tamanio++];
    for(int i=0;i<pos;i++){
        nuevo[i]=data[i];
    }
    for(int i=pos;i<tamanio;i++){
        nuevo[i+1]=data[i];
    }
    delete data;
    int *data=nuevo;


}



