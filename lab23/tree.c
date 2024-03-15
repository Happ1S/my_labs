#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Структура узла обычного дерева
typedef struct _node {
    int data;
    struct _node* parent;
    struct _node** children;
} N_Node;

int input() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    return num;
}

// Создание нового узла
N_Node* createNode(int data) {
    N_Node* newNode = (N_Node*)malloc(sizeof(N_Node));
    if (newNode == NULL) {
        printf("Ошибка: Не удалось выделить память для нового узла.\n");
        exit(-1);
    }
    newNode->data = data;
    newNode->parent = NULL;
    newNode->children = NULL;
    return newNode;
}

// Функция для добавления дочернего узла
void addChild(N_Node* parent, N_Node* child) {
    if (parent->children == NULL) {
        parent->children = (N_Node**)malloc(sizeof(N_Node*));
        parent->children[0] = child;
    } else {
        int numChildren = 0;
        while (parent->children[numChildren] != NULL) {
            numChildren++;
        }
        parent->children = (N_Node**)realloc(parent->children, (numChildren + 1) * sizeof(N_Node*));
        parent->children[numChildren] = child;
    }
    child->parent = parent;
}

int findMinDepthLeafValue(N_Node* root, int depth, int* minDepth) {
    // Если узел пустой, возвращаем максимальное значение
    if (root == NULL)
        return INT_MAX;

    // Если узел является листом, и его глубина меньше минимальной, обновляем минимальную глубину
    if (root->children == NULL) {
        if (depth < *minDepth)
            *minDepth = depth;
        return root->data;
    }

    int minLeafValue = INT_MAX;

    // Рекурсивно ищем значения листьев с наименьшей глубиной в каждом из дочерних узлов
    for (int i = 0; root->children[i] != NULL; i++) {
        int leafValue = findMinDepthLeafValue(root->children[i], depth + 1, minDepth);
        if (leafValue != INT_MAX && leafValue < minLeafValue)
            minLeafValue = leafValue;
    }

    // Возвращаем значение листа с наименьшей глубиной
    return minLeafValue;
}


// Функция для вывода структуры дерева в красивом виде
void printTree(N_Node* root, int depth) {
    if (root == NULL)
        return;

    for (int i = 0; i < depth; i++)
        printf("   ");
    printf("%d\n", root->data);

    if (root->children != NULL) {
        for (int i = 0; root->children[i] != NULL; i++) {
            printTree(root->children[i], depth + 1);
        }
    }
}

int MaxDepth(N_Node* root) {
    // Если узел пустой, возвращаем 0
    if (root == NULL)
        return 0;

    int maxChildDepth = 0;

    // Рекурсивно ищем максимальную глубину в каждом из дочерних узлов
    if (root->children != NULL) {
        for (int i = 0; root->children[i] != NULL; i++) {
            int childDepth = MaxDepth(root->children[i]);
            if (childDepth > maxChildDepth)
                maxChildDepth = childDepth;
        }
    }

    // Максимальная глубина текущего узла - это максимальная глубина его дочерних узлов + 1
    return maxChildDepth + 1;
}


int main() {
    // Создание узлов дерева
    N_Node* root = createNode(1);
    N_Node* node2 = createNode(2);
    N_Node* node3 = createNode(3);
    N_Node* node4 = createNode(4);
    N_Node* node5 = createNode(5);
    N_Node* node6 = createNode(6);
    N_Node* node7 = createNode(7);
    N_Node* node8 = createNode(8);
    N_Node* node9 = createNode(9);
    N_Node* node10 = createNode(10);

    // Установка связей между узлами
    addChild(root, node2);
    addChild(root, node3);
    addChild(node2, node4);
    addChild(node4, node8);
    addChild(node2, node5);
    addChild(node5, node9);
    addChild(node3, node6);
    addChild(node6, node10);
    addChild(node3, node7);

    int minDepth = INT_MAX;
    int choice, data;
    int maxDepth = MaxDepth(root);

    while (1) {
    printf("1. Добавить узел\n");
    printf("2. Распечатать дерево\n");
    printf("3. Удалить узел\n");
    printf("4. Лист минимальной глубины\n");
    printf("0. Завершить программу\n");
    printf("\nВыберите действие: ");
        scanf("%d", &choice);
        switch (choice) {
            case 0:
                printf("Программа завершена.\n");
                exit(0);
            case 1:
                int newNodeValue = input();
                N_Node* newNode = createNode(newNodeValue);
                break;
            case 2:
                printf("Дерево в прямом порядке: \n");
                printTree(root, 5);
                printf("\n");
                break;
            case 3:
                printf("Узел удален.\n");
                break;
            case 4:
                printf("%d\n", findMinDepthLeafValue(root, 5, &minDepth));
                break;
            default:
                printf("Некорректный ввод. Попробуйте еще раз.\n");
                break;
        }
    }
    return 0;
}
