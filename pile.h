#ifndef _PILE_
#define _PILE_
#include <stdlib.h>
#include <stdbool.h>

typedef int element;

typedef struct node_cell
{
	element info;
	struct node_cell* next;
}cell;

typedef struct
{
	cell* sommet;
} pile;

pile init_pile();
bool pile_vide(pile);
void empiler(pile*, element);
void depiler(pile*);
element sommet_pile(pile);
#endif