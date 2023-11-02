#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: ptr to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 *
 * @tree: ptr to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t i, nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	/* Calculate the number of nodes in the tree */
	for (i = 0; i < height; i++)
	{
		nodes += (1 << i);
	}
	return ((nodes == 1) || (nodes == height));
}
