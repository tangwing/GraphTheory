#ifndef CSOMMET_H
#define CSOMMET_H
#include "Clist_arc.h"

class Csommet
{
private:
	unsigned int uiSOMid;
	int iSOMval;//valuation
	Clist_arc * pARCpartant;
	Clist_arc * pARCarrivant;
	unsigned int uiARCnb_arc_partant;
	unsigned int uiARCnb_arc_arrivant;

public:
	Csommet(); //On enleve ça, est-ce que le constructeur de Ccellule sera également appelé?
	Csommet(unsigned int id);

	unsigned int SOMget_id(){return uiSOMid;}
	void SOMset_id(unsigned int id){uiSOMid=id;}
	
    int SOMget_val(){return iSOMval;}
	void SOMset_val(int val){iSOMval = val;}
	
    unsigned int SOMget_nb_arc_partant(){return uiARCnb_arc_partant;}
	unsigned int SOMget_nb_arc_arrivant(){return uiARCnb_arc_arrivant;}

	Clist_arc* SOMget_arc_partant(int pos);
	Clist_arc* SOMget_arc_arrivant(int pos);

	void SOMajouter_arc_partant(Clist_arc* arc);
	void SOMajouter_arc_arrivant(Clist_arc* arc);
};
#endif