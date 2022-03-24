#include "binary_trees.h"
/**
 * profundidad - Mide la profundidad de un nodo en un árbol binario
 * @tree: raiz
 * Return: profundidad.
 */
size_t profundidad(const binary_tree_t *tree)
{
	size_t c;

	if (!tree)
		return (0);
	for (c = 0; tree; c++)
		tree = tree->left;
	return (c);
}
/**
 * is_perfect - Verifica si los hijos terminan al mismo nivel
 * @tree: padre.
 * @d: profundidad.
 * @level: nivel
 * Return: 1 or 0.
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (!tree->left && !tree->right)
		return (d == level + 1);
	if (!tree->left || !tree->right)
		return (0);
	return (is_perfect(tree->left, d, level + 1) &&
			is_perfect(tree->right, d, level + 1));
}
/**
 * binary_tree_is_perfect - dice si el arbol es o no perfecto.
 * @tree: arbol..
 * Return: 1 si es perfecto 0 si no.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leng;

	if (!tree)
		return (0);
	leng = profundidad(tree);
	return (is_perfect(tree, leng, 0));
}
