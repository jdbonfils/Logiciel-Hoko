#ifndef TRAITEMENT_H
#define TRAITEMENT_H

#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>


#include <string>
using namespace std;

/** Valeur d'un param�tre */
typedef union {
    int _int;
    double _double;
    bool _bool;
} Valeur;

/** Types de valeurs d'un param�tre */
typedef enum {_INT, _DOUBLE, _BOOL}Type;

/** Param�tre de traitement */
typedef struct {
	Type type;
	string nom;
	Valeur valeur;
} Parametre;

#include "Interface/Fenetres/FenetreModifier.h"
#include "Traitement/GestionTraitement.h"


class FenetreModifier;
class GestionTraitement;

/**
* Classe abstraite de traitement d'image
*/
class Traitement {
	public:
		/**
		* Initialise gestionTraitement et imageEntree.
		* Dans les classes filles, ajout des param�tres, application avec les param�tres initiaux,
		* cr�ation et affichage de la fen�tre de modification.
		* \param gestionTraitement GestionTraitement* gestionnaire de traitement
		* \param imageEntree Mat image � traiter
		*/
		Traitement(GestionTraitement* gestionTraitement, cv::Mat imageEntree);

		/**
		* D�truit l'image entr�e et trait�e.
		*/
		virtual ~Traitement();

		/**
		* Applique le traitement � l'imageEntree dans l'imageTraitee.
		* M�thode virtuelle pure d�finie dans les classes filles.
		*/
		virtual void appliquer(list<Valeur> valeurs)=0;

		/**
		* Met � jour le traitement avec ses param�tres et une nouvelle imageEntree.
		* M�thode virtuelle pure d�finie dans les classes filles.
		* \param imageEntree Mat image � traiter
		*/
		virtual cv::Mat maj(cv::Mat imageEntree)=0;

		/**
		* Cr�e et affiche la fenetre de modification du traitement.
		* M�thode virtuelle pure d�finie dans les classes filles.
		*/
		virtual void modifier()=0;

		/**
		* \param valeurs list<Valeur> valeurs dans le m�me ordre que les param�tres
		* Met � jour les valeurs des param�tres du traitement.
		*/
		void majParametres(list<Valeur> valeurs);

		/**
		* Renvoit les param�tres du traitement.
		* \return list<Parametre> param�tres du traitement, dans l'ordre d'ajout dans le constructeur
		*/
		list<Parametre> getParametres(){return this->parametres;}

		/**
		* Renvoie les valeurs contenues par les param�tres entr�s.
		* \return valeurs list<Parametre> param�tres du traitement, dans l'ordre d'ajout dans le constructeur
		*/
		list<Valeur> toValeurList(list<Parametre> parametres);

		/**
		* Renvoie l'imageEntree du traitement.
		* \return imageEntree Mat image � traiter
		*/
		cv::Mat getImageEntree();

		/**
		* Renvoie l'imageTraitee du traitement.
		* \return imageTraitee Mat image trait�e
		*/
		cv::Mat getImageTraitee();

		/**
		* Revoie le nom du traitement.
		* \return nom du traitement
		*/
		string getNom();

		int getId(){return this->id;}

		/**
		* Appel au gestionnaire de traitement pour annuler l'ajout du traitement.
		*/
		void annulerAjout();

		/**
		* Appel au gestionnaire de traitement pour mettre � jour tous les traitements.
		*/
		void validerModification();

		void detruireFenetre(){this->fenetre=nullptr;}

	protected:
		/** Nom du traitement */
		string nom;

		/** Identifiant du traitement, d�fini dans les classes filles */
		int id;
		
		/** Image � traiter */
		cv::Mat imageEntree;

		/** Image sur laquelle le traitement est appliqu�e */
		cv::Mat imageTraitee;

		/** Liste des param�tres */
		list<Parametre> parametres;

		/** Fenetre de modification des param�tres */
		FenetreModifier* fenetre;

		/** Gestionnaire de traitements */
		GestionTraitement* gestionTraitement;
};

#endif // TRAITEMENT_H