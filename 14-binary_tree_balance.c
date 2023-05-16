#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is NULL or balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t nodes_le = 0, nodes_ri = 0;

	if (!tree)
		return (0);

	nodes_le = binary_tree_height(tree->left);
	nodes_ri = binary_tree_height(tree->right);

	return (nodes_le - nodes_ri);
}

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL or alt_ri if it is larger or else alt_le
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t alt_ri = 0;
	size_t alt_le = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		alt_le = binary_tree_height(tree->left);

	if (tree->right != NULL)
		alt_ri = binary_tree_height(tree->right);

	if (alt_le > alt_ri)
		return (alt_le + 1);

	return (alt_ri + 1);
}
