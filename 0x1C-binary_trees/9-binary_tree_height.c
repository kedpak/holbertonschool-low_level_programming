#include "binary_trees.h"

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
