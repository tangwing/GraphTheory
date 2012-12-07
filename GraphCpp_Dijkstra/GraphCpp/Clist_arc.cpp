/**************
Corp de la classe Clist_arc
**************/
#include "stdafx.h"
#include "Clist_arc.h"
#include "Cexception.h"

Clist_arc * Clist_arc::ARCsearch_forward(int pos)
{
	return (Clist_arc*)CELchercher_suiv(pos);
}

Clist_arc * Clist_arc::ARCsearch_backward(int pos)
{
	return (Clist_arc*)CELchercher_prev(pos);
}

//Chainer l'arc courant ¨¤ la suite de celui dans le para
void Clist_arc::ARCchainer_apres(Clist_arc * arc_pere) 
{
	if( arc_pere == NULL ) throw new Cexception(BAD_PARA);
	CELchainer_apres(arc_pere);
}

//Se d¨¦truire
void Clist_arc::ARCsupprimer()
{
	this->CELextraire();

}