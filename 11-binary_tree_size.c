#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_ri = 0, size_le = 0;

	if (!tree)
		return (0);

	size_ri = binary_tree_size(tree->right);
	size_le = binary_tree_size(tree->left);

	return (size_ri + 1 + size_le);
	/*suma el lado hizquierdo, el lado derecho y 1 que es la raiz*/
}
