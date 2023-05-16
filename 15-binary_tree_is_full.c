#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or if a binary tree is full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t full_ri = 0;
	size_t full_le = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	full_le = binary_tree_is_full(tree->left);
	full_ri = binary_tree_is_full(tree->right);

	return (full_le && full_ri);
}
