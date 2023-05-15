#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: 0
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
