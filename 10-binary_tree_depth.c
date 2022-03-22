#include "binary_trees.h"
/**
 * binary_tree_depth - Mide la profundidad de un nodo en un árbol binario
 * @tree: arbol
 * Return: profundidad.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t pedro = 0;

	if (!tree)
		return (0);
	if (tree->parent == NULL)
		return (0);
	if (tree->parent)
		pedro = binary_tree_depth(tree->parent) + 1;

	return (pedro);
}
