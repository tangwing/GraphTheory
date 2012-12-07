// GraphCpp.cpp : Defines the entry point for the console application.
/*Pbs:
1, constructeur de recopie?
2, num de sommet dans Clist_arc
3, Il peut y avoir plusieur ppc, comment return
4, arc arrivant, pour quoi faire?
*/
#include "stdafx.h"
#include "Cgrahe.h"

Cgraphe* creer_graphe();
void testGraphe( Cgraphe*);

int _tmain(int argc, _TCHAR* argv[])
{
    //Ccellule c;
    //cout<<c.test;
	Cgraphe* GRAtp = creer_graphe();
	testGraphe(GRAtp);
	return 0;
}

Cgraphe* creer_graphe(char* path)
{
    return NULL;
}

Cgraphe* creer_graphe()//int** g, unsigned int )
{
	Cgraphe* GRAtp = new Cgraphe(11);
	
	GRAtp->GRAadd_arc(0,3,1);
	GRAtp->GRAadd_arc(0,4,2);
	GRAtp->GRAadd_arc(0,2,3);
	GRAtp->GRAadd_arc(1,2,4);
	GRAtp->GRAadd_arc(2,1,5);
	GRAtp->GRAadd_arc(3,3,6);
	GRAtp->GRAadd_arc(4,3,5);
	GRAtp->GRAadd_arc(5,1,8);
	GRAtp->GRAadd_arc(5,2,9);
	GRAtp->GRAadd_arc(6,1,7);
	GRAtp->GRAadd_arc(7,1,9);
	GRAtp->GRAadd_arc(8,4,10);
	GRAtp->GRAadd_arc(9,3,10);
	return GRAtp;
}

/*Une petite m¨¦thod pour tester*/
void testGraphe(Cgraphe* graphe)
{
	cout<<"The total number of vertexes:"<<graphe->GRAget_nb_sommet()<<endl;
	for(unsigned int i=0; i<graphe->GRAget_nb_sommet(); i++)
	{
		cout<<(*graphe)[i].SOMget_nb_arc_arrivant()<<",";
		cout<<(*graphe)[i].SOMget_nb_arc_partant()<<endl;
	}
    
    int iDistance;
	unsigned int * const iChemin = graphe->GRAplus_court_chemin_Dijkstra(0, &iDistance);
    //Test le sommet 10
    cout<<"La longeur du pcc du sommet 10 :"<< iDistance<<endl;//pSOMlist[10].SOMget_val()<<endl;
    int pere = iChemin[10];
    cout<<10<<" <- ";
    while( pere != -1)
    {
        cout<<pere<<" <- ";
        pere = iChemin[pere];
    }
    cout<<"\b\b\b\b    "<<endl;

}

