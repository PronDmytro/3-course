#include <assert.h>
#include <stdio.h>

struct node_t {
    node_t* left;
    node_t* right;
    int value;
};

struct node_print_state_t {
    node_print_state_t* child_state;
    bool printing_last_child;
};

node_print_state_t* _root_state = NULL;

void print_subtree(const node_t* node);

void print_tree(const node_t* root) {
    assert(_root_state == NULL);
    try {
        if (root != NULL) {
            print_subtree(root);
        }
    }
    catch (...) {
        // если что-то пошло не так, принудительно reset-им состояние
        _root_state = NULL;
        throw;
    }
}

void print_subtree(const node_t* node) {
    node_print_state_t* parent_state;
    if (_root_state != NULL) {
        printf(" ");
        node_print_state_t* s = _root_state;
        while (s->child_state != NULL) {
            printf(s->printing_last_child ? "  " : "| ");
            s = s->child_state;
        }
        parent_state = s;
        printf(parent_state->printing_last_child ? "L" : "+");
    }
    else {
        parent_state = NULL;
    }
    printf(">%i\n", node->value);

    if ((node->left != NULL) || (node->right != NULL)) { // если есть дети
        node_print_state_t s;
        if (parent_state != NULL) {
            parent_state->child_state = &s;
        }
        else {
            _root_state = &s;
        }
        s.child_state = NULL;

        // печатаем детей
        if (node->left != NULL) {
            s.printing_last_child = (node->right == NULL);
            print_subtree(node->left);
        }
        if (node->right != NULL) {
            s.printing_last_child = true;
            print_subtree(node->right);
        }

        if (parent_state != NULL) {
            parent_state->child_state = NULL;
        }
        else {
            _root_state = NULL;
        }
    }
}

int main() {
    node_t n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13;
    n1.left = &n2; n1.right = &n9; n1.value = 1;
    n2.left = &n3; n2.right = &n6; n2.value = 2;
    n3.left = &n4; n3.right = &n5; n3.value = 3;
    n4.left = NULL; n4.right = NULL; n4.value = 4;
    n5.left = NULL; n5.right = NULL; n5.value = 5;
    n6.left = &n7; n6.right = &n8; n6.value = 6;
    n7.left = NULL; n7.right = NULL; n7.value = 7;
    n8.left = NULL; n8.right = NULL; n8.value = 8;
    n9.left = &n10; n9.right = &n13; n9.value = 9;
    n10.left = &n11; n10.right = &n12; n10.value = 10;
    n11.left = NULL; n11.right = NULL; n11.value = 11;
    n12.left = NULL; n12.right = NULL; n12.value = 12;
    n13.left = NULL; n13.right = NULL; n13.value = 13;
    print_tree(&n1);
    return 0;
}