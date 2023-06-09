#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = binary_tree_node(parent, value); /*llama a la función del ejercicio 0*/

	if (parent->left)
	{
		new->left = parent->left; /*el nuevo nodo izquierdo */
		new->left->parent = new;
	}

	parent->left = new;

	return (new);
}
