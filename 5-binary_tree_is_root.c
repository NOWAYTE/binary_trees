#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if node is a root
 * @node: Pointer to node to check
 * Return: 1 if node is a root,
 * Otherwise - returns 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
	{

		return (0);
	}

	return (1);
}
