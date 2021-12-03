#include "binary_trees.h"

/**
 * height_balance - Calculates the height of a tree
 * @tree: Pointer to tree's root
 * Return: height
 */
size_t height_balance(const binary_tree_t *tree)
{
	size_t heightl = 0, heightr = 0;

	if (!tree)
	{
		return (0);
	}

	if (tree->left)
	{
		heightl = 1 + binary_tree_height_balance(tree->left);
	}
	if (tree->right)
	{
		heightr = 1 + binary_tree_height_balance(tree->right);
	}
	if (heightl > heightr)
	{
		return (heightl);
	}
	return (heightr);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t heightl = 0, heightr = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left)
	{
		heightl = 1 + height_balance(tree->left);
	}
	if (tree->right)
	{
		heightr = 1 + height_balance(tree->right);
	}
	return (heightl - heightr);
}
