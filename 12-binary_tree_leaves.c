#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL or leaves_ri and leaves_le
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_ri = 0, leaves_le = 0;

	if (!tree)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	leaves_le = binary_tree_leaves(tree->left);
	leaves_ri = binary_tree_leaves(tree->right);

	return (leaves_le + leaves_ri);
}
