#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = 0, right_height = 0;
	const binary_tree_t *left_child = tree->left;
	const binary_tree_t *right_child = tree->right;

	while (left_child != NULL)
	{
		left_height++;
		left_child = left_child->left;
	}
	while (right_child != NULL)
	{
		right_height++;
		right_child = right_child->right;
	}
	if (left_height == right_height)
		return (1);
	else
		return (0);
}
