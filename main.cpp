#include "InterfacePrincipale.h"
#include <QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	InterfacePrincipale interfacePrincipale;
	interfacePrincipale.show();
	
	

	return a.exec();
}