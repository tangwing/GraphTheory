#ifndef CGRAPHE_H
#define CGRAPHE_H
#include "Csommet.h"

class Cgraphe{
private:
	unsigned int uiGRAnb_sommet;
	Csommet* pSOMlist;
public:
    //static int test;
	Cgraphe(unsigned int n);
    ~Cgraphe(){delete [] pSOMlist;}
	void GRAadd_arc(int sommetDepart, int valuation, int sommetArrive);
	unsigned int GRAget_nb_sommet(){return uiGRAnb_sommet;};
    Csommet & operator[](int index);
    
    /**
    * Cette premi¨¨re version note le chemin pendant l'¨¦volution de l'algo, et donc
      n'a pas utilis¨¦ les "arcs arrivants" d¨¦finis par le prof.
    * @para 
        depart Le sommet de source pour appliquer le pcc
        iDistance Un pointeur qui va pointer la valeur de distance trouv¨¦e ¨¤ la fin. 
                  Elle peut ¨ºtre NULL, puisque la distance est aussi acc¨¦dable en utilisant
                  le getVal() du sommet de destination.
    */
	unsigned int * GRAplus_court_chemin_Dijkstra( unsigned int depart, int* iDistance);
    /**
    * Cette 2¨¨me version utilise les "arcs arrivants" d¨¦finis par le prof, 
    * pour calculer le plus court chemin(backtrack).
    */
    unsigned int * GRAplus_court_chemin_Dijkstra_v2( unsigned int depart, int* iDistance);
	
};
#endif