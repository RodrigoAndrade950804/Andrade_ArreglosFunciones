#include <stdio.h>

int resultado(int z, int n, int m);
int main()
{
    // Inicializacion y lectura de variables
    int z, n, m;
    printf("Ingrese cuantas matrices: ");
    scanf("%d", &z);
    printf("Ingrese filas: ");
    scanf("%d", &n);
    printf("Ingrese columas: ");
    scanf("%d", &m);
    resultado(z , n, m);
    return 0;

}
int suma(int z, int n, int m)
{            
    int Matriz[n][m];   
    // Imprime titulo de la matriz
    printf("Matriz");
    // Se agrega estructuras se pone -1 para llegar a una matriz antes
    printf("\n");
    for (int i = 0; i < z - 1; i++)
    {        
        for (int i = 0; i < n; i++)
        {
            printf("\n");
            for (int j = 0; j < m; j++)
            {                   
                Matriz[i][j] = 0;
                printf("%d\t", Matriz[i][j]);
            }
        }
        printf("\nMatriz:" );
        printf("\n");
    }        
    // Se agrega estructuras final para cambiar resultados a 1
    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < m; j++)
        {            
            Matriz[i][j] = 1;
            printf("%d\t", Matriz[i][j]);
        }
    }
}