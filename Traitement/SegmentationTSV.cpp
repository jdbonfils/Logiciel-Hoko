#ifndef SEGMENTATIONTSV_CPP
#define SEGMENTATIONTSV_CPP

#include "Traitement.h"
#include <opencv2/core/utility.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>



class SegmentationTSV : public Traitement {
public:
	SegmentationTSV(GestionTraitement* gestionTraitement, cv::Mat imageEntree, bool ouvrirFenetre = true) :
		Traitement(gestionTraitement, imageEntree)
	{
		this->nom = "Segmentation TSV";
		this->id = 2;

		this->parametres.push_back(Parametre{ _INT, "Teinte Min", 4 });
		this->parametres.push_back(Parametre{ _INT, "Teinte Max", 24 });

		this->parametres.push_back(Parametre{ _INT, "Saturation Min", 0 });
		this->parametres.push_back(Parametre{ _INT, "Saturation Max", 90 });

		this->parametres.push_back(Parametre{ _INT, "Valeur Min", 99 });
		this->parametres.push_back(Parametre{ _INT, "Valeur Max", 194 });

		appliquer(toValeurList(this->parametres));

		if (ouvrirFenetre) {
			fenetre = new FenetreModifier(this);
			fenetre->show();
		}
	}

	~SegmentationTSV() {}

	virtual void appliquer(list<Valeur> valeurs) {
		majParametres(valeurs);

		cv::Mat imageTSV;
		cv::Mat imageTSVSegmente;

		cvtColor(this->imageEntree, imageTSV, cv::COLOR_BGR2HSV);

		list<Valeur>::iterator it = valeurs.begin();
		double tMin = (*it)._int; ++it;
		double tMax = (*it)._int; ++it;

		double saMin = (*it)._int; ++it;
		double saMax = (*it)._int; ++it;

		double vMin = (*it)._int; ++it;
		double vMax = (*it)._int;

		inRange(imageTSV,
			cv::Scalar(tMin, saMin, vMin),
			cv::Scalar(tMax, saMax, vMax),
			imageTSVSegmente
		);

		cvtColor(imageTSVSegmente, this->imageTraitee, cv::COLOR_GRAY2BGR);

		gestionTraitement->imageTraitee(this->imageTraitee);
	}

	virtual cv::Mat maj(cv::Mat imageEntree) {
		this->imageEntree = imageEntree;
		appliquer(toValeurList(this->parametres));
		return this->imageTraitee;
	}

	virtual void modifier() {
		fenetre = new FenetreModifier(this, true);
		fenetre->show();
	}

};

#endif