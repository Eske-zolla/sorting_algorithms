#include "sort.h"

void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker);
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker);
void cocktail_sort_list(listint_t **list);

/**
 * swap_node_ahead - Swap a node in a listint_t doubly-linked list
 *                   list of integers with the node ahead of it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @tail: A pointer to the tail of the doubly-linked list.
 * @shaker: A pointer to the current swapping node of the cocktail shaker algo.
 * _swap - Swaps two nodes of doubly linked list
 *
 * @node: node base to change
 * @list: double link list head
 *
 * Return: No Return
 */
void swap_node_ahead(listint_t **list, listint_t **tail, listint_t **shaker)
void _swap(listint_t **node, listint_t **list)
{
	listint_t *tmp = (*shaker)->next;
	listint_t *tmp = *node, *tmp2, *tmp3;

	if ((*shaker)->prev != NULL)
		(*shaker)->prev->next = tmp;
	else
		*list = tmp;
	tmp->prev = (*shaker)->prev;
	(*shaker)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *shaker;
	else
		*tail = *shaker;
	(*shaker)->prev = tmp;
	tmp->next = *shaker;
	*shaker = tmp;
}

/**
 * swap_node_behind - Swap a node in a listint_t doubly-linked
 *                    list of integers with the node behind it.
 * @list: A pointer to the head of a doubly-linked list of integers.
 * @tail: A pointer to the tail of the doubly-linked list.
 * @shaker: A pointer to the current swapping node of the cocktail shaker algo.
 */
void swap_node_behind(listint_t **list, listint_t **tail, listint_t **shaker)
{
	listint_t *tmp = (*shaker)->prev;
	if (!(*node)->prev)
		*list = (*node)->next;

	if ((*shaker)->next != NULL)
		(*shaker)->next->prev = tmp;
	else
		*tail = tmp;
	tmp->next = (*shaker)->next;
	(*shaker)->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = *shaker;
	else
		*list = *shaker;
	(*shaker)->next = tmp;
	tmp->prev = *shaker;
	*shaker = tmp;
}
	tmp = tmp3 = *node;
	tmp2 = tmp->next;

	tmp->next = tmp2->next;
	tmp3 = tmp->prev;
	tmp->prev = tmp2;
	tmp2->next = tmp;
	tmp2->prev = tmp3;

	if (tmp2->prev)
		tmp2->prev->next = tmp2;


	if (tmp->next)
		tmp->next->prev = tmp;

	*node = tmp2;

}
/**
 * cocktail_sort_list - Sort a listint_t doubly-linked list of integers in
 *                      ascending order using the cocktail shaker algorithm.
 * @list: A pointer to the head of a listint_t doubly-linked list.
 * cocktail_sort_list - function that sorts a doubly linked list
 * of integers in ascending order using the Cocktail shaker sort algorithm
 *
 * @list: head of list to be sortered (Double Linked List)
 *
 * Return: No Return
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *tail, *shaker;
	bool shaken_not_stirred = false;
	listint_t *head, *aux;
	int c = 0, n = -1, m = -1;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	if (!list || !(*list) || (!((*list)->prev) && !((*list)->next)))
		return;

	for (tail = *list; tail->next != NULL;)
		tail = tail->next;

	while (shaken_not_stirred == false)
	head = *list;
	while (m >= n)
	{
		shaken_not_stirred = true;
		for (shaker = *list; shaker != tail; shaker = shaker->next)
		n++;
		while (head->next && c != m)
		{
			if (shaker->n > shaker->next->n)
			if (head->n > head->next->n)
			{
				swap_node_ahead(list, &tail, &shaker);
				print_list((const listint_t *)*list);
				shaken_not_stirred = false;
				aux = head;
			       _swap(&aux, list);
			       print_list(*list);
			       head = aux;
			}

			c++;
			head = head->next;
		}
		for (shaker = shaker->prev; shaker != *list;
				shaker = shaker->prev)

		if (n == 0)
			m = c;
		m--;
		while (head->prev && c >= n)
		{
			if (shaker->n < shaker->prev->n)
			if (head->n < head->prev->n)
			{
				swap_node_behind(list, &tail, &shaker);
				print_list((const listint_t *)*list);
				shaken_not_stirred = false;
				aux = head->prev;
				_swap(&aux, list);
				print_list(*list);
				head = aux->next;
			}
			c--;
			head = head->prev;
		}
	}
}
