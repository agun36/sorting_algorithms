#include <stdlib.h>
#include <string.h>
#include "deck.h"

/**
 * compare_cards - Comparison function for qsort
 * @a: First card
 * @b: Second card
 *
 * Return: Difference in card values
 */
int compare_cards(const void *a, const void *b)
{
	const card_t *card_a = *(const card_t **)a;
	const card_t *card_b = *(const card_t **)b;
	
	int value_diff = strcmp(card_a->value, card_b->value);
	if (value_diff != 0)
		return value_diff;
	return card_a->kind - card_b->kind;
}

/**
 * sort_deck - Sorts a deck of cards
 * @deck: Pointer to the deck
 */
void sort_deck(deck_node_t **deck)
{
	int swapped;
	deck_node_t *ptr1;
	deck_node_t *lptr = NULL;
	
	if (*deck == NULL)
		return;
	
	do
	{
		swapped = 0;
		ptr1 = *deck;
		
		while (ptr1->next != lptr)
		{
			if (card_value(ptr1->card) > card_value(ptr1->next->card))
			{
				swap_cards(ptr1, ptr1->next);
				swapped = 1;
			}
			ptr1 = ptr1->next;
		}
		lptr = ptr1;
	} while (swapped);
}
