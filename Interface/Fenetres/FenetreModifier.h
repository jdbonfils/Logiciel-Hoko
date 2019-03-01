

#ifndef FENETREMODIFIER_H
#define FENETREMODIFIER_H

#include <QDialog>
#include "Interface/InterfacePrincipale.h"
#include <stdio.h>

class InterfacePrincipale;

namespace Ui {
	
	class FenetreModifier;
}

/**
* Fen�tre de modification des param�tres d'un traitement.
*/
class FenetreModifier : public QDialog
{
	Q_OBJECT

public:
	explicit FenetreModifier(QWidget *parent = nullptr);

	/**
	* Constructeur de FenetreModifier
	* \param interface L'interface principale de l'application
	* \param parent QWidget*
	*/
	FenetreModifier( InterfacePrincipale* interface, QWidget *parent = nullptr);

	~FenetreModifier();

private slots:
	/**
	* Enregistre les param�tres et ferme la fen�tre.
	* D�clench�e lors de l'appui sur le bouton "Valider".
	*/
	void on_validerBouton_clicked();

	/**
	* Ferme la fen�tre sans enregistrer les param�tres, si le traitement viens d'�tre ajout�, il est supprim�.
	* D�clench�e lors de l'appui sur le bouton "Annuler".
	*/
	void on_annulerBouton_clicked();

	/**
	* Applique le traitement avec les nouveaux param�tres et provoque la mise � jour de l'image dans l'interface principale.
	* D�clench�e lors de la modification de la valeur du spinBoxLargeurNoyau.
	*/
	void on_spinBoxLargeurNoyau_valueChanged(int largeurNoyau);

	/**
	* Applique le traitement avec les nouveaux param�tres et provoque la mise � jour de l'image dans l'interface principale.
	* D�clench�e lors de la modification de la valeur du spinBoxHauteurNoyau.
	*/
	void on_spinBoxHauteurNoyau_valueChanged(int hauteurNoyau);

	/**
	* Applique le traitement avec les nouveaux param�tres et provoque la mise � jour de l'image dans l'interface principale.
	* D�clench�e lors de la modification de la valeur du doubleSpinBoxSigma.
	*/
	void on_doubleSpinBoxSigma_valueChanged(double sigma);
private:
	Ui::FenetreModifier *ui;

	/** L'interface principale de l'application */
	InterfacePrincipale *interface;

	int largeurNoyau;
	int hauteurNoyau;
	double sigma;

	/**
	* Applique un flou gaussien (fonction OpenCV GaussianBlur)
	* \param largeurNoyau Hauteur du noyau du flou gaussien
	* \param hauteurNoyau Largeur du noyau du flou gaussien
	* \param sigma Sigma du flou gaussien
	* \return Image trait�e au format OpenCV Mat
	*/
	cv::Mat flouGaussien(int largeurNoyau, int hauteurNoyau, double sigma);
};

#endif // FENETREMODIFIER_H