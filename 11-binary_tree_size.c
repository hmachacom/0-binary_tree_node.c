#include "binary_trees.h"
/**
 * binary_tree_size - Suma todas las ramificaciones del arbol.
 * @tree: arbol.
 * Return:total,
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t hugo = 0;

	if (!tree)
		return (0);

	hugo = binary_tree_size(tree->left) + 1;
	hugo += binary_tree_size(tree->right);
	return (hugo);
}
