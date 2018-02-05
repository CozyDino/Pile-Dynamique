#include "pile.h"
#include <stdio.h>

pile init_pile()
{
	pile tmp;
	tmp.sommet = NULL;
	return tmp;
}

bool pile_vide(pile p)
{
	return p.sommet == NULL;
}

void empiler(pile* p,element e)
{
	cell* newcell = malloc(sizeof(cell));
	newcell->next = p->sommet;
	newcell->info = e;
	p->sommet = newcell;
}

void depiler(pile* p)
{
	cell* tmp;
	tmp = p->sommet;
	p->sommet = p->sommet->next;
	free(tmp);
}

element sommet_pile(pile p)
{
	return p.sommet->info;
}