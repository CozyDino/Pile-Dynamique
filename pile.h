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

pile init_pile(); //init the stack
bool pile_vide(pile); //return true if the stack is empty
void empiler(pile*, element); //put an element at the top of the stack
void depiler(pile*); //remove an element of the top of the stack
element sommet_pile(pile); //return the element at the top of the stack
#endif
