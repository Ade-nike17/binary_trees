#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node: ptr to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */


int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	/* A node is a root if it has no parent */
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
