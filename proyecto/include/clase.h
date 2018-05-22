#ifndef CLASE_H
#define CLASE_H

class arreglodinamicoint
{
        int tamanio;
        int *data;
public:
    arreglodinamicoint(int tamanio,int arr[]);
    void insertaratras(int elem);
    void insertar (int pos,int elem);


#endif // CLASE_H
