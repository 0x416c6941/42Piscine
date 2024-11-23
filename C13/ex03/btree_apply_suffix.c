#include <stdlib.h>

/**
 * I believe by "suffix traversal" they mean postfix one?...
 */
void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL);
	btree_apply_suffix(root->left, applyf);
	btree_apply_suffix(root->right, applyf);
	applyf(root->item);
}
