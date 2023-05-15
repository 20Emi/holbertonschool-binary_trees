#include "binary_trees.h"

/**
 * 
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0; 

	if (!tree)
		return (0);
	
	if (tree && tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	
	return (depth);
}