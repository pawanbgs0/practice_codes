#include "tree.h"

int main()
{
    Node* root = NULL;

    // root = create_node(16);
    // root->left = create_node(53);
    // root->right = create_node(45);

    // root->left->left = create_node(1);
    // root->left->right = create_node(2);

    // root->right->right = create_node(19);


    // preorder(root);
    // levelorder(root);

    // add_bst(&root, 48);
    // add_bst(&root, 36);
    // add_bst(&root, 42);
    // add_bst(&root, 98);
    // add_bst(&root, 64);
    // add_bst(&root, 32);

    insert_AVL(&root, 1);
    insert_AVL(&root, 3);
    insert_AVL(&root, 2);
    insert_AVL(&root, 5);
    insert_AVL(&root, 4);
    insert_AVL(&root, 7);
    insert_AVL(&root, 6);

    preorder(root);
    return 0;
}