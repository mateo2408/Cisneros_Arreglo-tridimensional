//Mateo Cisneros
//30/11/2023
/*Crear e imprimir todos los elementos de un arreglo tridimensional, cuyas dimensiones sean ingresadas por el 
usuario. El programa debe inicializar todas las matrices del arreglo en ceros, 
a excepción de la última matriz que debe ser inicializada 
en unos.*/

#include<stdio.h>

int main()
{
    //Se pide el tamaño de las matrices
    int capas;
    int filas;
    int columnas;
    printf("Ingrese el número de matrices: ");
    scanf("%d", &capas);
    printf("Ingrese el número de filas de las matrices: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de las matrices: ");
    scanf("%d", &columnas);

    //Definimos la matriz
    int arreglo[capas][filas][columnas];

    //Inicializamos las matrices en o
    for (int k = 0; k < capas; k++)
    {
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                arreglo[k-1][i][j]=0;
            }   
        } 
    }


    //Se establecen la ultima matriz en uno
    for (int k = 0; k < capas; k++)
    {
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                arreglo[k][i][j]=1;
            }   
        }
    }


    //Imprimimos las matrices
    for (int k = 0; k < capas; k++)
    {
        printf("Matriz %d\n", k);
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {   
                printf("%d", arreglo[k][i][j]);
            } 
            printf("\n"); 
        }
    }

    return 0;
}
