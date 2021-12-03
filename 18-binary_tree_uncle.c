#include "binary_trees.h"

/**
 * find_uncle - looks for the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: uncle
 */

binary_tree_t *find_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (!node || !(node->parent))
	{
		return (NULL);
	}
	uncle = node->parent;	
	if (uncle->left && (uncle->left != node))
	{
		return (uncle->left);
	}
	else if (uncle->right && (uncle->right != node))
	{
		return (uncle->right);
	}
	return (NULL);
}

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
	{
		return (NULL);
	}
	return (find_uncle(node->parent));
}
