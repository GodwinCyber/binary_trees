#include "binary_trees.h"

/**
 * binary_tree_sibling - function that find the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: return a pointer to a sibling node; if node is NULL or
 * parent is NULL return NUL, if node has no sibling return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
 * binary_tree_uncle - function that find the uncle of node
 * @node: pointer to the node to frind the uncle
 * Return: return a pointer to the uncle node: If node is
 * NULL, return NULL; if node has no uncle return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
