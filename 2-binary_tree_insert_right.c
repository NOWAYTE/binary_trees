#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: value is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw;

	if (parent == NULL)
	{
		return (NULL);
	}

	nw = binary_tree_node(parent, value);
	if (nw == NULL)
	{

		return (NULL);
	}

	if (parent->right != NULL)
	{
		nw->right = parent->right;
		parent->right->parent = nw;
	}

	parent->right = nw;
	return (nw);

}
