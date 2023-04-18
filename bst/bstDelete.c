node* find_min_node(node* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

node* delete_node(node* root, int key) {
    if (root == NULL) {
        return NULL;
    }

    if (key < root->data) {
        root->left = delete_node(root->left, key);
    } else if (key > root->data) {
        root->right = delete_node(root->right, key);
    } else {
        if (root->left == NULL && root->right == NULL) {
            free(root);
            return NULL;
        } else if (root->left == NULL) {
            struct node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct node *temp = root->left;
            free(root);
            return temp;
        } else {
            node *successor_node = find_min_node(root->right);
            root->data = successor_node->data;
            root->right = delete_node(root->right, successor_node->data);
        }
    }
    return root;
}