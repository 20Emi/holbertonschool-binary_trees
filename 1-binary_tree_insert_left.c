#include "binary_trees.h"
/**
 * 
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);
	
	if (!new)
		return (NULL);

	new = binary_tree_node(parent, value);

	new->left = parent->left;
	parent->left = new;
	
	if (parent->left == NULL)
		new->left->parent = new;

	

	return (new);
}