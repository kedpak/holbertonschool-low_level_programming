#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is a full tree
 * @tree: tree to be checked if full
 * Return: integer value, returns 1 if tree is full 0 if not full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}


	if (tree->left != NULL && tree->left != NULL)
	{
		if (tree->left->left == NULL && tree->right->right == NULL)
		{
			return (1);
		}
		else
		{

			return (0);
		}
	}
	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);
	return (0);
}
