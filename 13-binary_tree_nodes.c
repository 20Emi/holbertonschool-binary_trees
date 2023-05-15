#include "binary_trees.h"

/**
 * 
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes_le = 0, nodes_ri = 0;

    if (!tree || (!tree->left && !tree->right))
        return (0);

    nodes_le += binary_tree_nodes(tree->left);
    nodes_ri += binary_tree_nodes(tree->right);

    return (1 + nodes_le + nodes_ri); 
}