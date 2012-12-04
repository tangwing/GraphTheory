/**********************
Interface de la classe C_cellule dans le TD 3
***********************/
#ifndef CCELLULE_H
#define CCELLULE_H
class Ccellule {

protected: 
	Ccellule *pCELpere;
	Ccellule *pCELfils;
public:
	Ccellule();
	~Ccellule(){};//La cellule doit avoir ижtиж extraite!
	//Ccellule( Ccellule& CELsrc);
	//Ccellule & operator= (Ccellule & CELvar);

	Ccellule * CELchercher_prev(int iPosition);
	Ccellule * CELchercher_suiv(int iPosition);
	void CELchainer_apres( Ccellule* pere);
	void CELextraire();
};

#endif