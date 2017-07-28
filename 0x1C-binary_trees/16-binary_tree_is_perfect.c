#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if tree is a perfect binary tree
 * @tree: tree to check if perfect
 * Return: integer, 1 if tree is perfect, 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{

	size_t size, height;
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	size = binary_tree_size(tree);
	height = binary_tree_height(tree);

	if (size == _pow_recursion(2, height + 1) - 1)
	{
		if (binary_tree_is_leaf(tree) == 1)
		{
			return (1);
		}
		else
		{
			return (left && right);
		}
	}

	return (0);
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


/**
 * binary_tree_is_leaf - check if node is a leaf
 * @node: node to be checked if leaf
 * Return: returns 1 if node is leaf, 0 if node is not leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


/**
 * binary_tree_size - find the size of a binary tree(amount of nodes)
 * @tree: tree to find size of
 * Return: size_t number of nodes
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}


/**
 * _pow_recursion - return power of x to y
 * @x: number to be multiplied
 * @y: power
 * Return: power of x
 */
size_t _pow_recursion(size_t x, size_t y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
