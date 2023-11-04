#include "binary_trees.h"
/**
 * is_full_recursive - Checks if a binary tree is full
 * @tree: A pointer to the root node
 *
 * Return: If tree is not full
 *
 */
int is_recursive(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL) ||
			is_recursive(tree->left) == 0 ||
			is_recursive(tree->right) == 0)

			return (0);
	}

	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node
 *
 * Return: If tree is NULL or is not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{

		return (0);
	}

	return (is_recursive(tree));
}

