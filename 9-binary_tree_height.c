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

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	/* Recursively calculate the height of the left and right subtrees */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	/* Return the max of left & right subtree heights, plus 1 for current node */
	return ((left_height > right_height ? left_height : right_height) + 1);
}
