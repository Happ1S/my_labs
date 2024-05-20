#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct TreeNode {
    char data[100];
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

// Function to create a new tree node
TreeNode* createTreeNode(const char *data) {
    TreeNode *newNode = (TreeNode *)malloc(sizeof(TreeNode));
    strncpy(newNode->data, data, sizeof(newNode->data));
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int tokenizeExpression(char *expr, char tokens[][100]) {
    char *token = strtok(expr, " ");
    int count = 0;
    while (token != NULL) {
        strncpy(tokens[count], token, sizeof(tokens[count]));
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}

// Function to check if a string is a valid number
int isNumber(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}
int isOperator(const char *token) {
    return (strcmp(token, "+") == 0 || strcmp(token, "-") == 0 ||
            strcmp(token, "*") == 0 || strcmp(token, "/") == 0);
}

// Function to return the precedence of an operator
int precedence(const char *op) {
    if (strcmp(op, "+") == 0 || strcmp(op, "-") == 0) {
        return 1;
    }
    if (strcmp(op, "*") == 0 || strcmp(op, "/") == 0) {
        return 2;
    }
    return 0;
}

// Function to repeat the string 'str' 'n' times with '+' separators
char* repeatString(char* str, int n) {
    int str_len = strlen(str);
    int sep_len = 3; // Длина разделителя " + "
    int total_len = str_len * n + sep_len * (n - 1) + 1; // Общая длина результирующей строки
    char* result = (char*)malloc(total_len); // Выделяем достаточно памяти
    if (result == NULL) {
        printf("Memory allocation failed!");
        exit(1);
    }

    int index = 0;
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            strcpy(result + index, " + "); // Копируем разделитель в результирующую строку
            index += sep_len; // Обновляем индекс
        }
        strcpy(result + index, str); // Копируем строку в результирующую строку
        index += str_len; // Обновляем индекс
    }
    result[total_len - 1] = '\0'; // Добавляем нулевой символ в конец строки

    return result;
}


void infixToPostfix(char tokens[][100], int n, char postfix[][100]) {
    char stack[100][100];
    int top = -1;
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (isalnum(tokens[i][0])) {
            // Add operand to postfix expression
            strcpy(postfix[j++], tokens[i]);
        } else if (strcmp(tokens[i], "(") == 0) {
            // Push '(' onto stack
            strcpy(stack[++top], tokens[i]);
        } else if (strcmp(tokens[i], ")") == 0) {
            // Pop and output from stack until '('
            while (top != -1 && strcmp(stack[top], "(") != 0) {
                strcpy(postfix[j++], stack[top--]);
            }
            top--; // Remove '(' from the stack
        } else {
            // Operator: pop and output from stack while stack is not empty and precedence of stack top is greater or equal to current token
            while (top != -1 && precedence(stack[top]) >= precedence(tokens[i])) {
                strcpy(postfix[j++], stack[top--]);
            }
            // Push current operator onto stack
            strcpy(stack[++top], tokens[i]);
        }
    }
    // Pop remaining operators from stack
    while (top != -1) {
        strcpy(postfix[j++], stack[top--]);
    }
    postfix[j][0] = '\0'; // Null terminate the postfix array
}

TreeNode* buildExpressionTree(char postfix[][100], int n) {
    TreeNode *stack[100];
    int top = -1;

    for (int i = 0; i < n; i++) {
        if (isalnum(postfix[i][0])) {
            // Create a new tree node for operand and push it onto the stack
            stack[++top] = createTreeNode(postfix[i]);
        } else if (isOperator(postfix[i])) {
            // Create a new tree node for operator
            TreeNode *node = createTreeNode(postfix[i]);
            // Pop the last two nodes from the stack as children of the operator node
            node->right = stack[top--];
            node->left = stack[top--];
            // Push the new operator node back onto the stack
            stack[++top] = node;
        }
    }
    // The root of the expression tree will be the last remaining node on the stack
    return stack[top];
}

void printTreeIndented(TreeNode *root, int depth) {
    if (root) {
        // First, print the right child with increased depth
        printTreeIndented(root->right, depth + 1);
        
        // Print the current node with indentation based on depth
        for (int i = 0; i < depth; i++) {
            printf("\t");
        }
        printf("%s\n", root->data);
        
        // Finally, print the left child with increased depth
        printTreeIndented(root->left, depth + 1);
    }
}

void freeTree(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

void myFunc1(char infix[]) {

    char postfix[100][100];
    char tokens[100][100];
    // Tokenize the input expression
    int tokenCount = tokenizeExpression(infix, tokens);

    // Convert infix to postfix
    infixToPostfix(tokens, tokenCount, postfix);
    
    // Calculate the length of postfix array
    int postfixCount = 0;
    while (postfix[postfixCount][0] != '\0') {
        postfixCount++;
    }

    // Build the expression tree from postfix expression
    TreeNode *root = buildExpressionTree(postfix, postfixCount);
    
    // Print the tree in order (infix)
    printf("Expression tree: \n");
    printTreeIndented(root, 0);
    printf("\n");
    freeTree(root);
}


int main() {
    char infix[100];
    char str[100];
    char string[100] = "";
    int n;
    printf("Enter an algebraic expression: ");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = '\0'; // Remove newline character
    strncpy(str, infix, sizeof(str));
    if (strlen(str) == 1) {
        printf("Expression tree: \n");
        printf("	%s\n", str);
        printf("new algebraic expression: ");
        printf("%s\n", str);
        printf("Expression tree: \n");
        printf("	%s\n", str);
        return 0;
    }
    myFunc1(infix);
    char* token;
    char* prev_token = NULL;
    char* next_token;

    // Get the first token
    token = strtok(str, " ");

    // Iterate through the string until no more tokens are found
    while (token != NULL) {
        next_token = strtok(NULL, " ");
        // printf("%s %s\n", prev_token, next_token);
        // ----
        if (strcmp(token, "*") == 0) {
            if (isalpha(prev_token[0]) && !isalpha(next_token[0])) {
                n = atoi(next_token);
                char* repeated_str = repeatString(prev_token, n);
                strcat(string, repeated_str);
                free(repeated_str);
            } else if (isalpha(next_token[0]) && !isalpha(prev_token[0])) {
                n = atoi(prev_token);
                char* repeated_str = repeatString(next_token, n);
                strcat(string, repeated_str);
                free(repeated_str);
            } else {
                strcat(string, prev_token);
                strcat(string, " ");
                strcat(string, token);
                strcat(string, " ");
                strcat(string, next_token);
                strcat(string, " ");
            }
            strcat(string, " ");
            
        } else if (prev_token == NULL && strcmp(next_token, "*") != 0) {
            strcat(string, token);
            strcat(string, " ");
        } else if (next_token == NULL && strcmp(prev_token, "*") != 0) {
            strcat(string, token);
            strcat(string, " ");
        } else if (prev_token != NULL && next_token != NULL && strcmp(prev_token, "*") != 0 && strcmp(next_token, "*") != 0) {
            strcat(string, token);
            strcat(string, " ");
        }
        // ----

        prev_token = token;
        token = next_token;
    }
    // printf("%s\n", string);
    printf("new algebraic expression: ");
    printf("%s\n", string);
    myFunc1(string);
}
