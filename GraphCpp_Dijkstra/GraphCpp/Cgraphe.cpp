#include"stdafx.h"
#include"Cgrahe.h"

Cgraphe::Cgraphe(unsigned int n)
{
	uiGRAnb_sommet = n;
	pSOMlist = new Csommet[n];
	for(unsigned int i=0; i<n; i++)
	{
		pSOMlist[i].SOMset_id(i);
	}
}

Csommet& Cgraphe::operator[](int index)
{
    return pSOMlist[index];
}

void Cgraphe::GRAadd_arc(int sommetDepart, int valuation, int sommetArrive)
{
    Clist_arc* tmp = new Clist_arc(valuation, sommetArrive);
    //cout<<"int GRAadd_arc :"<<tmp->ARCget_dest_num()<<"  "<<tmp->ARCget_val()<<endl;
	pSOMlist[sommetDepart].SOMajouter_arc_partant(tmp);
	pSOMlist[sommetArrive].SOMajouter_arc_arrivant(new Clist_arc(valuation, sommetDepart));
}

//Il faut retourner directment la distance.
unsigned int * Cgraphe::GRAplus_court_chemin_Dijkstra( unsigned int uiSource, int *piDistance)
{
	unsigned int * puiChemin = new unsigned int[uiGRAnb_sommet];
	unsigned int * puiLongeur = new unsigned int[uiGRAnb_sommet];
	bool * pbVisite = new bool[uiGRAnb_sommet];//i.e. L[]
    unsigned int imin_Longeur = INT_MAX;
    int isommet_choisi = -1;
	unsigned int iBoucle=0;
	//initialisation
	for(;iBoucle<uiGRAnb_sommet; iBoucle++)
	{
		puiChemin[iBoucle]=-1;
		puiLongeur[iBoucle]=INT_MAX;
		pbVisite[iBoucle]=false;
	}
	puiLongeur[uiSource]=0;

    while( true)
    {
        imin_Longeur = INT_MAX;
        isommet_choisi = -1;
        //Choisir le sommet ¨¤ visiter
        for(iBoucle=0; iBoucle<uiGRAnb_sommet; iBoucle++)
        {
            if( pbVisite[iBoucle] == false &&
                puiLongeur[iBoucle] < imin_Longeur)
            {
                imin_Longeur = puiLongeur[iBoucle];
                isommet_choisi = iBoucle;
            }
        }
        //Fini
        if( isommet_choisi == -1)
        {
            for( iBoucle=0; iBoucle<uiGRAnb_sommet; iBoucle++)
            {
                pSOMlist[iBoucle].SOMset_val( puiLongeur[iBoucle]);
            }
            *piDistance = puiLongeur[uiGRAnb_sommet-1];
            delete [] puiLongeur;
            delete [] pbVisite;
            return puiChemin;
        }else
        {
            unsigned int inb_arc_partant = pSOMlist[isommet_choisi].SOMget_nb_arc_partant();
            //Clist_arc* pARCtmp = pSOMlist[isommet_choisi].SOMget_arc_partant(0);//Peut ¨ºtre null
            Clist_arc* pARCtmp ;
            for( iBoucle=0; iBoucle<inb_arc_partant; iBoucle++)
            {
                pARCtmp = pSOMlist[isommet_choisi].SOMget_arc_partant(iBoucle);
                if( puiLongeur[isommet_choisi] + pARCtmp->ARCget_val() < 
                    puiLongeur[pARCtmp->ARCget_dest_num()])
                {
                    puiLongeur[pARCtmp->ARCget_dest_num()] = 
                        puiLongeur[isommet_choisi] + pARCtmp->ARCget_val();
                    puiChemin[pARCtmp->ARCget_dest_num()] = isommet_choisi;
                }

            }
            pbVisite[isommet_choisi] = true;
        }
    }
}


