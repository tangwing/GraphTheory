/**********************************************************
Titre : Classe pour la gestion des exceptions
***********************************************************
Auteur  : V. T'kindt   
Version : 1.0
Date	: 10/07/2006
-------------------------
Lecteur : V. T'kindt     
Date	: 11/07/2006
***********************************************************
Auteur	: 
Version	:
Date	:
-------------------------
Lecteur : 
Date	: 
***********************************************************
Corps de la classe Cexception.
Cette classe permet de cr�er des objets qui sont remont�s 
lors de la lev�e d'exception dans votre programme.
***********************************************************/


/*CLASSE Cexception
  DOCUMENTATION
	Attributs : uiEXCvaleur, entier, contient la valeur de l'exception
	Structure : Cette classe contient une m�thode de modification et une m�thode
			de consultation de la valeur de l'exception
	M�thode : n�ant
	Modules internes :*/
#include "stdafx.h"		
#include <fstream>
#include "Cexception.h"

//CORPS

/**************************************************************
Nom : Cexception
***************************************************************
Constructeur par d�faut de la classe Cexception : permet 
d'initialiser un objet
***************************************************************
Entr�e : rien
N�cessite : n�ant 
Sortie : rien
Entra�ne : L'exception est intialis�e ?FAUX
***************************************************************/
Cexception::Cexception()
{
 uiEXCvaleur = FAUX;
 //l'exception est initialis?
}

Cexception::Cexception( unsigned int iErrcode)
{
	uiEXCvaleur = iErrcode;
}
/**************************************************************
Nom : EXCmodifier_valeur
***************************************************************
Cette fonction permet de modifier la valeur de l'exception
***************************************************************
Entr�e : la nouvelle valeur de l'exception
N�cessite : n�ant 
Sortie : rien
Entra�ne : L'exception est modifi�e
***************************************************************/
void Cexception::EXCmodifier_valeur(unsigned int val)
{
 uiEXCvaleur = val;
 //l'exception est modifi�e
}