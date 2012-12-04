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
Cette classe permet de créer des objets qui sont remontés 
lors de la levée d'exception dans votre programme.
***********************************************************/


/*CLASSE Cexception
  DOCUMENTATION
	Attributs : uiEXCvaleur, entier, contient la valeur de l'exception
	Structure : Cette classe contient une méthode de modification et une méthode
			de consultation de la valeur de l'exception
	Méthode : néant
	Modules internes :*/
#include "stdafx.h"		
#include <fstream>
#include "Cexception.h"

//CORPS

/**************************************************************
Nom : Cexception
***************************************************************
Constructeur par défaut de la classe Cexception : permet 
d'initialiser un objet
***************************************************************
Entrée : rien
Nécessite : néant 
Sortie : rien
Entraîne : L'exception est intialisée ?FAUX
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
Entrée : la nouvelle valeur de l'exception
Nécessite : néant 
Sortie : rien
Entraîne : L'exception est modifiée
***************************************************************/
void Cexception::EXCmodifier_valeur(unsigned int val)
{
 uiEXCvaleur = val;
 //l'exception est modifiée
}