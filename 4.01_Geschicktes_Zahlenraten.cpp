#include <iostream>
using namespace std;

int main()
{
	int unten = 1;
	int oben = 100;
	int mitte = (oben - unten) / 2 + unten;
	char auswahl = 0;
	cout << "Merken Sie sich eine Zahl zwischen " << unten << " (inklusive) und " << oben << " (exklusive)" << endl << endl;

	while (auswahl != 'j')
	{
		cout << "Aktueller Ratebereich : " << unten << " bis " << oben << endl
			<< "Ist "<< mitte <<" ihre Zahl ?" << endl
			<< "(j)ja : gleich," << endl
			<< "(k)nein : meine Zahl ist kleiner," << endl
			<< "(g)nein : meine Zahl ist groesser." << endl
			<< " ? ";
		cin >> auswahl;

		if (auswahl == 'k')
		{
			oben = mitte;
			mitte = (oben - unten) / 2 + unten;
		}

		else if (auswahl == 'g')
		{
			unten = mitte;
			mitte = (oben - unten) / 2 + unten;
		}
	}

	system("PAUSE");
	return 0;
}