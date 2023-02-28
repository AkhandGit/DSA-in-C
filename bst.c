#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data) {
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d \n", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d \n", root->data);
    }
}

struct node *insert(struct node *node, int data) {
    if (node == NULL)
        return newNode(data);

    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    return node;
}

struct node *search(struct node *root, int key) {
    if (root == NULL || root->data == key)
        return root;

    if (root->data < key)
        return search(root->right, key);

    return search(root->left, key);
}

struct node *minValueNode(struct node *node) {
    struct node *current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}


struct node *deleteNode(struct node *root, int value) {
    if (root == NULL) {
        return root;
    } else if (value < root->data) {
        root->left = deleteNode(root->left, value);
    } else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    } else {
        
        if (root->left == NULL) {
            struct node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        
        struct node *temp = minValueNode(root->right);

        
        root->data = temp->data;


        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int main() {
    struct node *root = NULL;
    int choice, value,data, key;

    while (1) {
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Inorder Traversal\n");
        printf("4. Preorder Traversal\n");
        printf("5. Postorder Traversal\n");
        printf("6. Delete\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Enter the key to be searched: ");
                scanf("%d", &key);
                if (search(root, key) != NULL)
                    printf("Key found!\n");
                else
                    printf("Key not found\n");
                break;
            case 3:
                printf("Inorder traversal:\n");
                inorder(root);
                break;
            case 4:
                printf("Preorder traversal:\n");
                preorder(root);
                break;
            case 5:
                printf("Postorder traversal\n");
                postorder(root);
                break;
            case 6:
                printf("Enter the value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                printf("%d deleted from the Binary Search Tree.\n", value);
                break;
            case 7:       
                printf("\n Submitted by :- Akhand Pratap Singh \n");
                printf("\n Roll no. :- 2101641520010 \n");
                printf("\n Class :-CS-AI-2A  \n");
                printf("\n Signing off !!\n");      
                exit(0);
                break;
            default:
                printf("Wrong Choice !!");
                break;

        

        }

    }
}
