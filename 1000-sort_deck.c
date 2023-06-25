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
	size_t deck_size = 52;
	deck_node_t *current = *deck;
	card_t *cards[52];
	size_t i = 0;
	
	while (current != NULL)
	{
		cards[i] = (card_t *)current->card;
		current = current->next;
		i++;
    }

    qsort(cards, deck_size, sizeof(card_t *), compare_cards);

    current = *deck;
    for (i = 0; i < deck_size; i++)
    {
        current->card = cards[i];
        current = current->next;
    }
}
