#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  checks if a node is a leaf
 * @node: popinter to thenode to check
 * Return: 1 if node is a leaf or 0 if node is NULL
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*node->right si es diferente a NULL significa que no es el ultimo nodo*/
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);

	return (1);
}
