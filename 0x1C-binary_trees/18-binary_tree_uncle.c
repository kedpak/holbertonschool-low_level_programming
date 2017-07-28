#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of current node
 * @node: current node
 * Return: value of uncle of current node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{


	if (node->parent == NULL || node == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent == NULL)
	{
		return (NULL);
	}


	if (node->parent->parent->left)
	{
		if (node->parent->parent->left != node->parent)
		{
			return (node->parent->parent->left);
		}
	}

	if (node->parent->parent->right)
	{
		if (node->parent->parent->right != node->parent)
		{
			return (node->parent->parent->right);
		}
	}

	return (NULL);

}
