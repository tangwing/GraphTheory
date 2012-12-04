/**************
Corp de la classe Csommet
**************/
#include "stdafx.h"
#include "Csommet.h"
//#include "Cexception.h"

Csommet::Csommet()
{
	pARCpartant=NULL;
	pARCarrivant=NULL;
	uiARCnb_arc_partant=0;
	uiARCnb_arc_arrivant=0;
}


Csommet::Csommet(unsigned int id)
{
    Csommet();
	this->uiSOMid=id;
}

Clist_arc * Csommet::SOMget_arc_partant(int pos)
{
    if( uiARCnb_arc_partant==0)
        return NULL;
    else
	    return pARCpartant->ARCsearch_forward(pos);
}

Clist_arc* Csommet::SOMget_arc_arrivant(int pos)
{
    if( uiARCnb_arc_partant==0)
        return NULL;
    else
	    return pARCarrivant->ARCsearch_forward(pos);
}

//Pourquoi pas ajouter au d¨¦but?
void Csommet::SOMajouter_arc_partant(Clist_arc* arc)
{
    if(arc == NULL) return;
	//cout<<"int SOMajouter_arc_partant :"<<arc->ARCget_dest_num()<<"  "<<arc->ARCget_val()<<endl;
	if(uiARCnb_arc_partant==0)
    	pARCpartant=arc;
	else
	{
        //Ajouter ¨¤ la fin:
        //Clist_arc *tmp;
		//tmp=pARCpartant->ARCsearch_forward(uiARCnb_arc_partant-1);
		//arc->ARCchainer_apres(tmp);

        //Ajouter apr¨¨s le premier:
        arc->ARCchainer_apres(pARCpartant);
	}
    uiARCnb_arc_partant++;
}

void Csommet::SOMajouter_arc_arrivant(Clist_arc* arc)
{
    if(arc == NULL) return;
	
	if(uiARCnb_arc_arrivant==0)
		pARCarrivant=arc;
	else
	{
        //Ajouter ¨¤ la fin:
        //Clist_arc *tmp;
		//tmp=pARCarrivant->ARCsearch_forward(uiARCnb_arc_arrivant-1);
		//arc->ARCchainer_apres(tmp);
        
        //Ajouter apr¨¨s le premier:
        arc->ARCchainer_apres(pARCarrivant);
	}
    uiARCnb_arc_arrivant++;
}
