#include "binary_trees.h"
/**
 * binary_tree_balance -
 * @tree:
 * Return:
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right && tree->left)
		return (binary_tree_balance(tree->left) + (0) + binary_tree_balance(tree->right));
	else
	{
		if (tree->right || tree->left)
			return (binary_tree_balance(tree->left) + (-1) + binary_tree_balance(tree->right));
		else
		{
		return (0);
		}
	}
}
