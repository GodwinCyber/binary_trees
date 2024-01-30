#include "binary_trees.h"

/**
 * binary_is_root - checks if a given node is a root
 * @node: pointer to the node to check
 * Result: return 1 if node is a root, otherwise 0
 * If node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
