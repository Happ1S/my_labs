#include <stdio.h>

#define MAX_SIZE 8

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int size;

    printf("Введите размерность: ");
    scanf("%d", &size);

    printf("Введите матрицу:\n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max_n[] = {0, 0};
    int min_n[] = {1000, 0};
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (matrix[i][j] > max_n[0]) {
                max_n[0] = matrix[i][j];
                max_n[1] = j;
            }
            if (matrix[i][j] < min_n[0]) {
                min_n[0] = matrix[i][j];
                min_n[1] = i;
            }
        }
    }
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result += matrix[min_n[1]][i] * matrix[i][max_n[1]];
    }
    printf("Результат: %d\n", result);
    return 0;
}
