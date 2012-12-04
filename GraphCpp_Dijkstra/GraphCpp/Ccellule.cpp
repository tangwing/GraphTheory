/**************
Corp de la classe Ccellule
**************/
#include "stdafx.h"
#include "Ccellule.h"
#include "Cexception.h"

Ccellule::Ccellule()
{
	pCELpere = NULL;
	pCELfils = NULL;
}

/* M¨¦thode pour chercher la cellule prededente*/
Ccellule * Ccellule::CELchercher_prev(int iPosition) {

	if( iPosition<0 )
		return CELchercher_suiv(-iPosition);
	Ccellule * pCELtest = this;
   
	while (pCELtest->pCELpere != NULL && iPosition > 0){
        	
		pCELtest = pCELtest->pCELpere;
		iPosition--;
	}
	if(iPosition == 0) {
		return pCELtest;
	}else {
		Cexception EXCex;
		EXCex.EXCmodifier_valeur(BAD_PARA);
		throw EXCex;
	}
}

/* M¨¦thode pour chercher la cellule suivante*/
Ccellule * Ccellule::CELchercher_suiv(int iPosition){
	if( iPosition<0 )
		return CELchercher_prev(-iPosition);
    Ccellule * pCELtest = this;
	while (pCELtest->pCELfils != NULL && iPosition > 0){
	
		pCELtest = pCELtest->pCELfils;
		iPosition--;
	}
	if(iPosition == 0) {
		return pCELtest;
	}else {
		Cexception EXCex;
		EXCex.EXCmodifier_valeur(BAD_PARA);
		throw EXCex;
	}
}

/* Method pour chainer la cellule courante 
a la suite de celle pass¨¦e en parametre*/
void Ccellule::CELchainer_apres( Ccellule* pere) {
	if( pere == NULL ) throw Cexception(BAD_PARA);
	else if(pere->pCELfils == NULL)
	{
		pere->pCELfils = this;
		this->pCELpere = pere;
		return;
	}
	else
	{
		this->pCELpere = pere;
		this->pCELfils = pere->pCELfils;
		pere->pCELfils=this;
		this->pCELfils->pCELpere = this;
		return;
	}
}

/* Method pour extraire la cellule courante 
de la liste courante*/
void Ccellule::CELextraire() {
	if(this->pCELfils != NULL)
	{
		this->pCELfils->pCELpere = this->pCELpere;
	}
	if(this->pCELpere != NULL)
	{
		this->pCELpere->pCELfils=NULL;
	}
	delete(this);
}