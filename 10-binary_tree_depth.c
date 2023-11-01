#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: ptr to the node to measure the depth
 *
 * Return: 0 if tree is NULL
 */


size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	/* Initialize a variable to keep track of the depth */
	size_t depth = 0;

	/* Traverse up the tree from the given node to the root */
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
