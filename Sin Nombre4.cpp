#include<stdio.h>
#define MAX 10
int main(int argc, char** args)
{
int matriz[MAX][MAX], col, fila, i=4, j=3;
 printf("Ingrese el numero las columnas ");
 scanf("%d", &col);
 printf("Ingrese el numero de filas");
 scanf("%d", &fila);
 for(i = 0;i < fila;i++)
 {
 for(j = 0;j < col;j++){
 printf("Ingrese el numero: [%d][%d]==>\t", i+1, j+1);
 scanf("%d", &matriz[i][j]);
 }
 }
 printf("\n\n\t\tCorral");
 printf("\n\n");
 for(i = 0;i < fila;i++){
 printf("\n\t\t");
 for(j = 0;j < col;j++){
 printf(" %6d ", matriz[i][j]);
 }
 }
} 
