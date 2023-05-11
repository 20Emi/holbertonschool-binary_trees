#include "binary_trees.h"

/**
 * 
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new = NULL;

    new = malloc(sizeof(binary_tree_t));

    if (!new)
        return (0);
    
    new->parent = parent; /*apunta a padre*/
    new->n = value; /*agrega valor a new*/
    new->right = NULL; /*ultima hoja del arbol*/
    new->left = NULL;
    
    return (new);
}