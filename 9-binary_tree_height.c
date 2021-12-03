#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightl = 0, heightr = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		heightl = 1 + binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		heightr = 1 + binary_tree_height(tree->right);
	}
	if (heightl > heightr)
	{
		return (heightl);
	}
	return (heightr);
}
