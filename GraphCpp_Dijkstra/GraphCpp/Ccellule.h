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
    //On ne veut pas une recopie membre ид membre!
	Ccellule( Ccellule& CELsrc) {pCELpere=pCELfils=NULL;}
	Ccellule & operator= (Ccellule & CELvar) {pCELpere=pCELfils=NULL;}
	Ccellule * CELchercher_prev(int iPosition);
	Ccellule * CELchercher_suiv(int iPosition);
	void CELchainer_apres( Ccellule* pere);
	void CELextraire();
};

#endif