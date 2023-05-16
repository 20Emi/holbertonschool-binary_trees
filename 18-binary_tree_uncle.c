#include "binary_tree.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - Finds the uncle of a node.
 * @node: Pointer to node to find the uncle.
 * Return: Uncle node, NULL otherwise.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	/*Return the Sibling's parent (Uncle)*/
	return (binary_tree_sibling(node->parent));
}
