#ifndef INTERFACEPRINCIPALE_H
#define INTERFACEPRINCIPALE_H

#include <QMainWindow>

#include "Image/GestionImage.h"

#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <stdio.h>
#include <cmath>

namespace Ui {


	class InterfacePrincipale;
}

/**
* Interface Principale de l'application
*/
class InterfacePrincipale : public QMainWindow
{
	Q_OBJECT

public:
	/**
	 * Constructeur d' InterfacePrincipale.
	 * \param    gestionImage       GestionImage gestionnaire des images.
	 * \param    parent             QWidget *
	 */
	explicit InterfacePrincipale(GestionImage gestionImage, QWidget *parent = 0);

	~InterfacePrincipale();

	/**
	* Met � jour le label correspondant � l'image 1 dans l'interface principale.
	* \param image Image au format OpenCV Mat rempla�ant l'ancienne.
	*/
	void majImage1(cv::Mat image);

	/**
	* Met � jour le label correspondant � l'image 2 dans l'interface principale.
	* \param image Image au format OpenCV Mat rempla�ant l'ancienne.
	*/
	void majImage2(cv::Mat image);

	/**
	* Met � jour le label correspondant � l'image 3 dans l'interface principale.
	* \param image Image au format OpenCV Mat rempla�ant l'ancienne.
	*/
	void majImage3(cv::Mat image);

	/**
	* Met � jour le label correspondant � l'image 4 dans l'interface principale.
	* \param image Image au format OpenCV Mat rempla�ant l'ancienne.
	*/
	void majImage4(cv::Mat image);

	/** Gestionnaire des images */
	GestionImage gestionImage;

private slots:
	/**
	* Importe une image et d�clenche la mise � jour de l'affichage.
	* D�clench�e lors de l'appui sur le bouton du menu Image/Importer une image.
	* Ouvre une fen�tre de s�lection de fichier, importe l'image choisie, la d�finie dans gestionImage et met � jour les 4 labels de l'interface.
	*/
	void importerUneImage();

	/**
	* Affiche le .pdf du Guide d'utilisation
	* D�clench�e lors de l'appui sur le bouton du menu Aide/Guide d'utilisation
	*/
	void afficherGuide();

	/**
	* Affiche le .pdf "� Propos"
	* D�clench�e lors de l'appui sur le bouton du menu Aide/� Propos de HoKo
	*/
	void afficherApropos();

	/**
	* Enregistre l'image finale.
	* D�clench�e lors de l'appui sur le bouton du menu Image/Sauvegarder une image.
	* Ouvre une fen�tre de s�lection de fichier et enregistre l'image finale � l'emplacement choisi.
	*/
	void sauvegarderImageFinale();

	/**
	* Ajoute un traitement � la liste des traitements.
	* D�clench�e lors de l'appui sur le bouton "Ajouter".
	* Ouvre la fen�tre de modification du traitement s�lectionn�.
	*/
	void on_ajouterBouton_clicked();

	/**
	* Met � jour l'affichage des images. D�clench�e lors d'un redimensionnement de la fen�tre principale.
	*/
	void resizeEvent(QResizeEvent*);

private:
	Ui::InterfacePrincipale *ui;

	/**
	* Redimensionne une image en fonction de la taille des labels de l'interface principale.
	* \param image Image au format OpenCV Mat � redimensionner.
	* \return Image redimensionn�e au format OpenCV Mat.
	*/
	cv::Mat redimensionner(cv::Mat image);

};

#endif // INTERFACEPRINCIPALE_H