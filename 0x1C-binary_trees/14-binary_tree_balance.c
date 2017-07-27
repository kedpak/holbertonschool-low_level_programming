#include "binary_trees.h"

/**
 * binary_tree_balance - find the balance factor of the tree
 * @tree: tree to find the balance factor for
 * Return: integer value which shows the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (tree->left == NULL)
	{
		left = 0;
	}
	if (tree->right == NULL)
	{
		right = 0;
	}

	return (left - right);


}

/**
 * binary_tree_height - find the height of a tree from speific node
 * @tree: tree to found the height on
 * Return: size_t number of height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t height_left, height_right;


	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	height_left = binary_tree_height(tree->left) + 1;
	height_right = binary_tree_height(tree->right) + 1;

	if (height_left < height_right)
	{
		return (height_right);
	}
	else
	{
		return (height_left);
	}
	return (0);
}
