

#ifndef GESTIONIMAGE_H
#define GESTIONIMAGE_H

#include <opencv2/opencv.hpp>
#include <opencv2/highgui.hpp>
/**
* Gestionnaire des images
*/
class GestionImage
{

private:
	/** Bool�en vrai si une image a �t� import�e par l'utilisateur, faux sinon */
	bool importee;

	/** L'image import�e, non modifi�e*/
	cv::Mat imageOriginale;
public:
	/**
	* Constructeur de la classe, initialise importee � false.
	*/
	GestionImage();

	/**
	* Teste si une image � �t� import�e par l'utilisateur.
	* /return True si une image a �t� import�e par l'utilisateur, False sinon.
	*/
	bool isImportee();

	/**
	* Retourne l' imageOriginale.
	* \return imageOriginale, l'image import�e, non modifi�e.
	*/
	cv::Mat getImageOriginale();

	/**
	* D�finit l'imageOriginale.
	* \param image Image au format OpenCV Mat
	*/
	void setImageOriginale(cv::Mat image);
};

#endif // GESTIONIMAGE_H