#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *p;
    float suma;
    float promedio;

    // Leer cantidad de elementos
    scanf("%d", &n);

    // Reservar memoria
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL) {
        printf("Error al reservar memoria\n");
        return 1;
    }

    // Leer n enteros
    for (i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    // Calcular suma
    suma = 0;
    for (i = 0; i < n; i++) {
        suma = suma + *(p + i);
    }

    // Imprimir resultados
    printf("Suma: %.2f\n", suma);
    promedio = suma / n;
    printf("Promedio: %.2f\n", promedio);

    // Liberar memoria
    free(p);

    return 0;
}
