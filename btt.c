#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* create_node(int data) {
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

struct node* insert_node(struct node* root, int data) {
    if (root == NULL) {
        return create_node(data);
    } else {
        if (data <= root->data) {
            root->left = insert_node(root->left, data);
        } else {
            root->right = insert_node(root->right, data);
        }
        return root;
    }
}

void inorder_traversal(struct node* root) {
    if (root != NULL) {
        inorder_traversal(root->left);
        printf("%d ", root->data);
        inorder_traversal(root->right);
    }
}

void preorder_traversal(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

void postorder_traversal(struct node* root) {
    if (root != NULL) {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node* root = NULL;
    int choice, data;

    while(1) {
        printf("Binary Tree Menu\n");
        printf("1. Insert a node\n");
        printf("2. Inorder traversal\n");
        printf("3. Preorder traversal\n");
        printf("4. Postorder traversal\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                root = insert_node(root, data);
                break;
            case 2:
                printf("Inorder traversal: ");
                inorder_traversal(root);
                printf("\n");
                break;
            case 3:
                printf("Preorder traversal: ");
                preorder_traversal(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder traversal: ");
                postorder_traversal(root);
                printf("\n");
                break;
            case 5:
                printf("\n Submitted by :- Akhand Pratap Singh\n");
                printf("\n Roll No. :- 2101641520010\n");
                printf("\n Class:- CS-AI-2A");
                printf("\n Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } 

    return 0;
}
