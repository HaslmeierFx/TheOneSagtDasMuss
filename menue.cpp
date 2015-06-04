#include <iostream>
using namespace std;

int main() {
	
	cout << "Waehle einen Modus:\n"
		  << "\t1. Start\n"
		  << "\t2. Beenden\n";
		  
	char auswahl;
	cin >> auswahl;
	
	switch( auswahl ){
			case '1':
				cout << "Spiel wird Gestartet...\n";
				
	int Alter;
	cout << "Du musst ueber 18 Jahre alt sein!" << endl
         << "Bitte gib dein Alter an: ";
	cin  >> Alter;
	
	
	
	
	if( Alter >= 18) {
	cout << "Du bist " << Alter << " Jahre alt." <<endl
		 << "Programm wird geladen..." 			 <<endl;
		
	int Alter1;
	cout << "Bitte gib dein Alter an:";
	cin  >> Alter1;

	int Alter2;
	cout << "Bitte gibt das Alter deiner Mutter an:";
	cin  >> Alter2;
	
	int Alter3;
	Alter3 = Alter2 - Alter1;
	cout << "Deine Mutter hat dich bekommen als du " << Alter3 << " Jahre warst.";
	
	} else if( (Alter >12) && (Alter <18) ) {
		cout << "OK, du bist " << Alter << " Jahre alt." << endl
			  << "Eingeschraenkte Inhalte werden geladen..." <<endl
			  << "Spass werd Erwachsen du Low...";
	} else {
		cout
	 	<< "Du bist noch zu Jung. Versuch es in " << 18- Alter << " Jahre erneut";
	}
				break;
			case '2':
				cout << "Spiel wird Beendet...";
				return 0;
				break;
	}
	
	cin.sync();
	cin.get();
	return 0;
}
