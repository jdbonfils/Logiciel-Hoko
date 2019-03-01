/********************************************************************************
** Form generated from reading UI file 'FenetreModifier.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREMODIFIER_H
#define UI_FENETREMODIFIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FenetreModifier
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelNoyauLargeur;
    QSpinBox *spinBoxLargeurNoyau;
    QLabel *labelNoyauHauteur;
    QSpinBox *spinBoxHauteurNoyau;
    QLabel *labelSigma;
    QDoubleSpinBox *doubleSpinBoxSigma;
    QHBoxLayout *horizontalLayout;
    QPushButton *validerBouton;
    QPushButton *annulerBouton;

    void setupUi(QDialog *FenetreModifier)
    {
        if (FenetreModifier->objectName().isEmpty())
            FenetreModifier->setObjectName(QString::fromUtf8("FenetreModifier"));
        FenetreModifier->resize(314, 218);
        verticalLayout = new QVBoxLayout(FenetreModifier);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelNoyauLargeur = new QLabel(FenetreModifier);
        labelNoyauLargeur->setObjectName(QString::fromUtf8("labelNoyauLargeur"));

        verticalLayout->addWidget(labelNoyauLargeur);

        spinBoxLargeurNoyau = new QSpinBox(FenetreModifier);
        spinBoxLargeurNoyau->setObjectName(QString::fromUtf8("spinBoxLargeurNoyau"));
        spinBoxLargeurNoyau->setMinimum(1);
        spinBoxLargeurNoyau->setSingleStep(2);

        verticalLayout->addWidget(spinBoxLargeurNoyau);

        labelNoyauHauteur = new QLabel(FenetreModifier);
        labelNoyauHauteur->setObjectName(QString::fromUtf8("labelNoyauHauteur"));

        verticalLayout->addWidget(labelNoyauHauteur);

        spinBoxHauteurNoyau = new QSpinBox(FenetreModifier);
        spinBoxHauteurNoyau->setObjectName(QString::fromUtf8("spinBoxHauteurNoyau"));
        spinBoxHauteurNoyau->setMinimum(1);
        spinBoxHauteurNoyau->setSingleStep(2);

        verticalLayout->addWidget(spinBoxHauteurNoyau);

        labelSigma = new QLabel(FenetreModifier);
        labelSigma->setObjectName(QString::fromUtf8("labelSigma"));

        verticalLayout->addWidget(labelSigma);

        doubleSpinBoxSigma = new QDoubleSpinBox(FenetreModifier);
        doubleSpinBoxSigma->setObjectName(QString::fromUtf8("doubleSpinBoxSigma"));

        verticalLayout->addWidget(doubleSpinBoxSigma);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        validerBouton = new QPushButton(FenetreModifier);
        validerBouton->setObjectName(QString::fromUtf8("validerBouton"));

        horizontalLayout->addWidget(validerBouton);

        annulerBouton = new QPushButton(FenetreModifier);
        annulerBouton->setObjectName(QString::fromUtf8("annulerBouton"));

        horizontalLayout->addWidget(annulerBouton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FenetreModifier);

        QMetaObject::connectSlotsByName(FenetreModifier);
    } // setupUi

    void retranslateUi(QDialog *FenetreModifier)
    {
        FenetreModifier->setWindowTitle(QApplication::translate("FenetreModifier", "Modification des param\303\250tres", nullptr));
        labelNoyauLargeur->setText(QApplication::translate("FenetreModifier", "Largeur du noyau", nullptr));
        labelNoyauHauteur->setText(QApplication::translate("FenetreModifier", "Hauteur du noyau", nullptr));
        labelSigma->setText(QApplication::translate("FenetreModifier", "Sigma", nullptr));
        validerBouton->setText(QApplication::translate("FenetreModifier", "Valider", nullptr));
        annulerBouton->setText(QApplication::translate("FenetreModifier", "Annuler", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FenetreModifier: public Ui_FenetreModifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREMODIFIER_H
