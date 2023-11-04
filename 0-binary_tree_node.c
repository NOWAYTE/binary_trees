#include "binary_trees.h"
/**
 * binary_tree_node - function creates  binary tree node
 * @parent: a pointer to the parent node
 * @value: the value for the new node
 *
 * Return: a pointer to the new node
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *nw;

	nw = malloc(sizeof(binary_tree_t));
	if (nw == NULL)
	{

		return (NULL);
	}

	nw->n = value;
	nw->parent = parent;
	nw->left = NULL;
	nw->right = NULL;

	return (nw);
}
