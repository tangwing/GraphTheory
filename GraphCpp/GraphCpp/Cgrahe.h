#ifndef CGRAPHE_H
#define CGRAPHE_H
#include "Csommet.h"

class Cgraphe{
private:
	unsigned int uiGRAnb_sommet;
	Csommet* pSOMlist;
public:
	Cgraphe(unsigned int n);
    ~Cgraphe(){delete [] pSOMlist;}
	//void GRAadd_arc(Clist_arc arc);
	void GRAadd_arc(int sommetDepart, int valuation, int sommetArrive);
	unsigned int GRAget_nb_sommet(){return uiGRAnb_sommet;};
	unsigned int * GRAplus_court_chemin_Dijkstra( unsigned int depart);
	void testGraphe();
};
#endif