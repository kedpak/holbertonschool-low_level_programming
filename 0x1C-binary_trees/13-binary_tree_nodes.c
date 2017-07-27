#include "binary_trees.h"

/**
 * binary_tree_nodes - return the count for number nodes with atleast one child
 * @tree: tree to count nodes with children
 * Return: size_t type number of nodes with children
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (left + right + 1);
	}

	return (0);
}
