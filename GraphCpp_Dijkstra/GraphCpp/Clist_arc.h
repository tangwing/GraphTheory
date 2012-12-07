/*********************
Interface de la classe Clist_arc
***********************/

#ifndef CLIST_ARC_H
#define CLIST_ARC_H
#include "Ccellule.h"
#include "stdafx.h"

class Clist_arc: protected Ccellule{

private: 
	unsigned int uiARCdest;//Le numero du sommet de destination
	int iARCval;//Valuation
	int iARCflot;//

public:
    //Clist_arc():uiARCdest(-1), iARCval(0), {}; Le constructeur par d¨¦faut n'est pas raisonnable
    Clist_arc(int val,unsigned int dest):
        iARCval(val),
        uiARCdest(dest),
        iARCflot(-1){};
    Clist_arc(int val,unsigned int dest, int flot):
        iARCval(val),
        uiARCdest(dest),
        iARCflot(flot){};
	
    unsigned int ARCget_dest_num(){return uiARCdest;}
	void ARCset_dest_num(unsigned int dest){uiARCdest=dest;}
	
    int ARCget_val(){return iARCval;}
	void ARCset_val(int val){iARCval=val;}
	
    int ARCget_flot(){return iARCflot;}
	void ARCset_flot(int flot){iARCflot=flot;}

	Clist_arc * ARCsearch_forward(int pos);
	Clist_arc * ARCsearch_backward(int pos);
    
	void ARCchainer_apres(Clist_arc * new_arc);
	void ARCsupprimer();
	
};
#endif