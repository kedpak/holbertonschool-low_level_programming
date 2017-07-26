#include "binary_trees.h"

/**
 * binary_tree_depth - find depth of tree starting from root
 * @node: current node
 * Return: size_t integer data type
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth;


	if (node == NULL)
        {
                return (0);
        }

	depth = 0;
	while (node != NULL && node->parent != NULL)
	{
		node = node->parent;
		depth++;
	}
	return (depth);

}
