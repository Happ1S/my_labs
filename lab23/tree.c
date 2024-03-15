#include <stdio.h>
#include <stdlib.h>


// Структура узла дерева
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Создание нового узла
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Ошибка: Не удалось выделить память для нового узла.\n");
        exit(-1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Функция добавления узла в дерево
struct Node* insertNode(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}

// Функция поиска минимального элемента в дереве
struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;

    while (current && current->left != NULL) {
        current = current->left;
    }

    return current;
}

void traverse(struct Node* root, int depth, int points[][2], int index) {
        if (root->left == NULL && root->right == NULL) {
            points[index][0] = depth;
            points[index][1] = root->data;
            index++;
        }
        if (root->left!= NULL) {
            traverse(root->left, depth+1, points, index);
        }
        if (root->right!= NULL) {
            traverse(root->right, depth+1, points, index);
        }
    return points;
    }

int findMinDepthLeaf(struct Node* root) {
    int points[100][2];
    if (root == NULL) {
        printf("Дерево пустое.\n");
        return 1000; // Возвращаем максимальное значение, чтобы не учитывать этот узел
    }

    int minDepth = 1000; // Переменная для хранения минимальной глубины
    int minDepthValue = root->data; // Переменная для хранения значения листа с минимальной глубиной
    // Рекурсивная функция для обхода дерева
    traverse(root, 1, points, 0);
}

// Функция удаления узла из дерева
struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        // Узел с одним или без детей
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        // Узел с двумя детьми: получаем наименьший элемент правого поддерева
        struct Node* temp = minValueNode(root->right);

        // Копируем данные наименьшего узла в текущий узел
        root->data = temp->data;

        // Удаляем наименьший узел из правого поддерева
        root->right = deleteNode(root->right, temp->data);
    }

    return root;
}

// Функция распечатки дерева в прямом порядке (pre-order traversal)
void printPreOrder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        printPreOrder(root->left);
        printPreOrder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    int choice, data;

    printf("1. Добавить узел\n");
    printf("2. Распечатать дерево\n");
    printf("3. Удалить узел\n");
    printf("4. Лист минимальной глубины\n");
    printf("0. Завершить программу\n");

    while (1) {
        printf("\nВыберите действие: ");
        scanf("%d", &choice);
        root = insertNode(root, 5);
        root = insertNode(root, 3);
        root = insertNode(root, 10);
        root = insertNode(root, 8);
        root = insertNode(root, 12);
        root = insertNode(root, 15);
        switch (choice) {
            case 0:
                printf("Программа завершена.\n");
                exit(0);
            case 1:
                printf("Введите значение для нового узла: ");
                scanf("%d", &data);
                root = insertNode(root, data);
                break;
            case 2:
                printf("Дерево в прямом порядке: ");
                printPreOrder(root);
                printf("\n");
                break;
            case 3:
                printf("Введите значение узла для удаления: ");
                scanf("%d", &data);
                root = deleteNode(root, data);
                printf("Узел удален.\n");
                break;
            case 4:
                printf("%d", findMinDepthLeaf(root));
                break;
            default:
                printf("Некорректный ввод. Попробуйте еще раз.\n");
                break;
        }
    }

    return 0;
}
