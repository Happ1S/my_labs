#include <stdio.h>

#define MAX_SIZE 7

void spiralLinear(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int top = 0, bottom = size - 1, left = 0, right = size - 1;
    while (top <= bottom && left <= right) {
        // влево
        for (int i = right; i >= left; --i) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // вниз
        for (int i = top; i <= bottom; ++i) {
            printf("%d ", matrix[i][left]);
        }
        left++;

        // вправо
        for (int i = left; i <= right; ++i) {
            printf("%d ", matrix[bottom][i]);
        }
        bottom--;

        // вверх
        for (int i = bottom; i >= top; --i) {
            printf("%d ", matrix[i][right]);
        }
        right--;
    }
}

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

    printf("Результат: ");
    spiralLinear(matrix, size);

    return 0;
}
