#include <iostream>

int some(int valeur1, int valeur2)
{
	return valeur1 + valeur2;
}

int main()
{
	// generation de seed
	srand(time(NULL));

	int scoreCourantJ1;
	int scorePrecedentJ1 = 5;

	int scoreCourantJ2;
	int scorePrecedentJ2 = 5;

	bool continuer = true;

	int CHF = 5;

	do
	{
		//un lancement de dés 
		int tirageDe1J1 = 1 + (rand() % 6);
		int tirageDe2J1 = 1 + (rand() % 6);

		int tirageDe1J2 = 1 + (rand() % 6);
		int tirageDe2J2 = 1 + (rand() % 6);


		scoreCourantJ1 = some(tirageDe1J1, tirageDe2J1);
		scoreCourantJ2 = some(tirageDe1J2, tirageDe2J2);

		//affichage du tirage 

		std::cout << "tirageJ1" << tirageDe1J1 << std::endl << tirageDe2J1 << std::endl;
		std::cout << "score courant J1 : " << scoreCourantJ1 << std::endl;
		std::cout << "score precedent J1 : " << scorePrecedentJ1 << std::endl;


		std::cout << "tirageJ2" << tirageDe1J2 << std::endl << tirageDe2J2 << std::endl;
		std::cout << "score courant J2 : " << scoreCourantJ2 << std::endl;
		std::cout << "score precedent J2 : " << scorePrecedentJ2 << std::endl;

		//determination de la win ou lose J1

		if (scoreCourantJ1 > scorePrecedentJ1)
		{
			std::cout << "WIN !!!" << std::endl;
			scorePrecedentJ1 = scoreCourantJ1;

			char reponse;
			std::cout << "la cagnotte du J1 contien : " << CHF << "chf" << std::endl;
			std::cout << "Continue or Leave ? (C/L) " << std::endl;
			std::cin >> reponse;

			if (reponse == 'o') // rejouerJ1

			{
				CHF *= 2;
				continuer = true;
			}
			else if (reponse == 'o')

			{
				std::cout << "le J1 a WIN $$$" << CHF << "CHF" << std::endl;

				continuer = false;
			}

			//determination win lose J2 
			else if (scoreCourantJ2 > scorePrecedentJ2)

			{
				std::cout << "WIN!!!" << std::endl;
				scorePrecedentJ2 = scoreCourantJ2;

				char reponse;
				std::cout << "la cagnotte du J2 contien : " << CHF << "chf" << std::endl;
				std::cout << "Continue or Leave ? (C/L) " << std::endl;
				std::cin >> reponse;

				if (reponse == 'o') // rejouerJ2

				{
					CHF *= 2;
					continuer = true;
				}

				else if (reponse == 'o')

				{
					std::cout << "le J2 a WIN$$$" << CHF << "CHF" << std::endl;

					continuer = false;
				}
			}
		}
	} while (continuer);
}
