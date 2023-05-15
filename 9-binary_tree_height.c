#include "binary_trees.h"

/**
 * 
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t alt_ri = 0;
	size_t alt_le = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		alt_le = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		alt_ri = 1 + binary_tree_height(tree->right);
	
	if (alt_le > alt_ri)
		return(alt_le);

	return(alt_ri);
}