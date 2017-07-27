#include "binary_trees.h"

/**
 * binary_tree_leaves - find the number of leaves inside of a tree
 * @tree: tree to count the nodes
 * Return: size_t value of the number of nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}

	return (0);
}
