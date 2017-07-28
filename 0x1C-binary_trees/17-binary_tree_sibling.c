#include "binary_trees.h"

/**
 * binary_tree_sibling - return the value of a sibling of node
 * @node: node to find sibling of
 * Return: sibling of the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (node->parent == NULL || node == NULL)
	{
		return (NULL);
	}

	if (node->parent->left != NULL && node->parent->left != node)
	{
		return (node->parent->left);
	}
	if (node->parent->right != NULL && node->parent->right != node)
	{
		return (node->parent->right);
	}
	return (NULL);
}
