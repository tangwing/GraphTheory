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
Interface de la classe Cexception.
Cette classe permet de créer des objets qui sont remontés 
lors de la levée d'exception dans votre programme.
***********************************************************/

// Définition de la valeur initiale d'une exception
#define FAUX 0
#define BAD_PARA 1
class Cexception
{
 // Cette classe représente une ou plusieurs exceptions levées 
 // par le programme

 //Attributs :
 private :
     unsigned int uiEXCvaleur;//cette variable contient la valeur de l'exception						      
  
 /*ETAT INITIAL
    uiEXCvaleur = FAUX*/

 //Primitives :
 public :
   Cexception();
   Cexception(unsigned int iErrcode);
   /* Constructeur par défaut de la classe 
	E : néant
	nécessite : néant
	S : néant
	entraîne : l'exception est initialis??FAUX */
   ~Cexception(){}
   /* Destructeur de la classe
	E : néant
	nécessite : néant
	S : néant
	entraîne : l'exception est détruite*/
   void EXCmodifier_valeur(unsigned int);
   /* Cette fonction permet de modifier la valeur de l'exception
	E : nouvelle valeur
	nécessite : néant
	S : néant
	entraîne : la valeur de l'exception est modifiée*/
   unsigned int EXClire_valeur();
   /* Cette fonction permet de consulter la valeur de l'exception
	E : néant
	nécessite : néant
	S : valeur de l'exception
	entraîne : la valeur de l'exception est retournée*/
 //MODULES EXTERNES
};

/**************************************************************
Nom : EXClire_valeur
***************************************************************
Cette fonction permet de consulter la valeur de l'exception
***************************************************************
Entrée : rien
Nécessite : néant 
Sortie : la valeur de l'exception
Entraîne : L'exception est retournée
***************************************************************/
inline unsigned int Cexception::EXClire_valeur()
{
 return(uiEXCvaleur);
}