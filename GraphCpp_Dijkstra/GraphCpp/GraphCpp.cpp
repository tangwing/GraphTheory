// GraphCpp.cpp : Defines the entry point for the console application.
/*Pbs:
1, constructeur de recopie : n¨¦cessaire?
2, num de sommet dans Clist_arc
3, Il peut y avoir plusieur ppc, comment return
4, arc arrivant, pour quoi faire?
*/
#include "stdafx.h"
#include "Cgrahe.h"

Cgraphe* creer_graphe();

int _tmain(int argc, _TCHAR* argv[])
{
    //Clist_arc* tmp = new Clist_arc(3, 4,3);
    //cout<<"int main :"<<tmp->ARCget_dest_num()<<
    //              "  "<<tmp->ARCget_val()<<endl;
	Cgraphe* GRAtp = creer_graphe();
	GRAtp->testGraphe();
	return 0;
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
