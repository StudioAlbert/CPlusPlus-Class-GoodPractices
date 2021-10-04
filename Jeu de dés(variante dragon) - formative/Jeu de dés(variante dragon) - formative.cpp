#include <iostream>
#include <time.h>


int soin(int pv_actuel, int vax)
{
    pv_actuel = pv_actuel + vax;

    return vax;
}

void clearConsole()
{
    std::cout << "\x1B[2J\x1B[H";
}


int main()
{
    srand(time(NULL));
    float pv_joueur = 100;
    int pv_grimgor = 100;

    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    std::cout << "      LEOPOLD, LE VALEUREUX CHEVALIER, S'ATTAQUE A GRIMGOR, L'ORQUE NOIR, MAIS IL PERD SALE." << std::endl;
    std::cout << "      ECHAPPANT DE PEU A LA MORT, IL DECIDE DE PARTIR S'ENTRAINER DANS LES MONTAGNES." << std::endl;
    std::cout << "      3 ANS PASSENT.. LEOPOLD REVIENT AU MONT MYOBOKOU POUR PRENDRE SA REVANCHE." << std::endl << std::endl;



    std::cout << "      IL FAIT VITE FAIT LE POINT SUR SES NOUVELLES CAPACITES:" << std::endl;
    std::cout << "      --- ATTAQUE DE L'EPEE QUI FAIT MAL :|: (aie)" << std::endl;
    std::cout << "      --- PROTECTION PROTECTRICE DE LA POSITION LATERALE DE SECURITE oOo (pls)" << std::endl;
    std::cout << "      --- SOINS PCR {+} (la, ca vax)" << std::endl << std::endl;

    std::cout << "      IL ANALYSE LA SITUATION:       " << std::endl;
    std::cout << "          -----PV-----" << std::endl;
    std::cout << "          LEOPOLD |" << pv_joueur << "|" << std::endl;
    std::cout << "          GRIMGOR |" << pv_grimgor << "|" << std::endl << std::endl;

    std::cout << "          !ATTENTION!      " << std::endl;
    std::cout << "      GRIMGOR TIRE SA PUISSANCE DE SON FOCUS   " << std::endl;
    std::cout << "      PLUS IL SE CONCENTRE, PLUS IL DEVIENT PUISSANT   " << std::endl;
    std::cout << "      IL PEUT AUSSI PARFOIS BRISER LE 4EME MUR, ET DOUBLER SON FOCUS ):  " << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl << std::endl;


    do
    {
        srand(time(NULL));
        std::cout << "---[appuyer sur -a- ] ATTAQUE DE L'EPEE QUI FAIT MAL :|: (aie)  " << std::endl;
        std::cout << "---[appuyer sur -p- ] PROTECTION PROTECTRICE DE LA POSITION LATERALE DE SECURITE oOo (pls) " << std::endl;
        std::cout << "---[appuyer sur -s- ] SOINS PCR {+} (la, ca vax)" << std::endl;
        std::cout << "libre arbitre: ";

        float pv_joueur_debut_tour = pv_joueur;
        float pv_grimgor_debut_tour = pv_grimgor;


        char action_joueur;
        bool proteger_joueur = false;

        std::cin >> action_joueur;
        clearConsole();

        std::cout << std::endl;



        switch (action_joueur)
        {

        case 'a':
            pv_grimgor = pv_grimgor - 5;
            std::cout << "Leopold(" << pv_joueur << "pv) utilise :|:";
            break;

        case 'p':
            proteger_joueur = true;
            std::cout << "Leopold(" << pv_joueur << "pv) utilise oOo" << std::endl;
            std::cout << "Leopold(++pls)";
            break;

        case 's':
            std::cout << "Leopold(" << pv_joueur << "pv) utilise {+}" << std::endl;
            pv_joueur = pv_joueur + soin(pv_joueur, 3);
            std::cout << "Leopold +3 pv 'la, ca vax!' " << std::endl;
            std::cout << "Leopold(" << (pv_joueur > 100 ? 100 : pv_joueur) << "pv)";

            break;

        default:
            std::cout << "NUL. APPREND DEJA A ECRIRE CORRECTEMENT";
            break;
        }

        std::cout << std::endl << std::endl;


        int furieDeGrimgor = 1 + (rand() % 10);
        float puissanceDeGrimgor = 2 + (rand() % 7);

        if (furieDeGrimgor >= 1 && furieDeGrimgor <= 9)
        {
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
            std::cout << "GRIMGOR SE CONCENTRE " << puissanceDeGrimgor << " SECONDES.." << std::endl;
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
            std::cout << std::endl;

            if (proteger_joueur)
            {
                puissanceDeGrimgor = puissanceDeGrimgor - puissanceDeGrimgor / 100 * 70;
                pv_joueur = pv_joueur - puissanceDeGrimgor;
                std::cout << "Grimgor attaque" << std::endl;
                std::cout << "La pls absorbe la majorite des degats" << std::endl;
            }

            else
            {
                pv_joueur = pv_joueur - puissanceDeGrimgor;
                std::cout << "Grimgor attaque" << std::endl;
            }


        }

        else if (furieDeGrimgor == 10)
        {
            puissanceDeGrimgor = puissanceDeGrimgor * 2;
            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
            std::cout << "GRIMGOR SE CONCENTRE " << puissanceDeGrimgor / 2 << " SECONDES.." << std::endl;
            std::cout << "EN VAIN. IL N'Y ARRIVE PAS. 'A QUOI BON?' SE DIT-IL." << std::endl;
            std::cout << "'JE NE SUIS QU'UNE SUITE DE BITS..'" << std::endl;
            std::cout << "'UN PROGRAMME COMME UN AUTRE, BON QU'A ETRE JETE..'" << std::endl;
            std::cout << "'CETTE VIE N'A AUCUN SENS..'" << std::endl;
            std::cout << "'JE N'AI AUCUN SENS..'" << std::endl;
            std::cout << "OH OH. GRIMGOR EST EN TRAIN DE BRISER LE 4EME MUR" << std::endl;
            std::cout << "GRIMGOR ASPIRE A ETRE PLUS QU'UN SIMPLE PROGRAMME" << std::endl;
            std::cout << "UNE MELANCOLIE INCONNUE ENVELOPPE GRIMGOR. ELLE FAIT PLACE A UNE SOUDAINE PLENITUDE" << std::endl;
            std::cout << "GRIMGOR PEUT DESORMAIS SE CONCENTRER BEAUCOUP PLUS FACILEMENT" << std::endl;
            std::cout << "GRIMGOR SE CONENTRE " << puissanceDeGrimgor << " SECONDES.." << std::endl;

            std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
            std::cout << std::endl;

            if (proteger_joueur)
            {
                puissanceDeGrimgor = puissanceDeGrimgor - puissanceDeGrimgor / 100 * 70;
                pv_joueur = pv_joueur - puissanceDeGrimgor;
                std::cout << "Grimgor lance waagh" << std::endl;
                std::cout << "La pls absorbe la majorite des degats" << std::endl;
            }

            else
            {
                pv_joueur = pv_joueur - puissanceDeGrimgor;
                std::cout << "Grimgor lance waagh" << std::endl;
            }

        }

        // float pv_joueur_alteration = pv_joueur_debut_tour - pv_joueur;
        // float pv_grimgor_alteration = pv_grimgor_debut_tour - pv_grimgor;

        std::cout << std::endl;

        if (proteger_joueur)
        {
            /*<< " (-" << pv_joueur_alteration << "++pls) " */
            /*<< " (-" << pv_grimgor_alteration << ") " */
            std::cout << "---PV----" << std::endl;
            std::cout << "LEOPOLD" << "|" << (pv_joueur <= 0 ? 0 : pv_joueur) << "|" << std::endl;
            std::cout << "GRIMGOR" << "|" << (pv_grimgor <= 0 ? 0 : pv_grimgor) << "|" << std::endl;;
            std::cout << std::endl << std::endl;

        }

        else
        {
            if (pv_joueur < pv_joueur_debut_tour)
            {
                /*<< " (-" << pv_joueur_alteration << ") "*/
                /*<< " (-" << pv_grimgor_alteration << ") " */
                std::cout << "---PV----" << std::endl;
                std::cout << "LEOPOLD" << "|" << (pv_joueur <= 0 ? 0 : pv_joueur) << "|" << std::endl;
                std::cout << "GRIMGOR" << "|" << (pv_grimgor <= 0 ? 0 : pv_grimgor) << "|" << std::endl;
                std::cout << std::endl << std::endl;
            }

            else if (pv_joueur > pv_joueur_debut_tour)
            {
                if (pv_joueur < 100)
                {
                    /*<< " (+" << -pv_joueur_alteration << ") "*/
                    /*<< " (-" << pv_grimgor_alteration << ") " */

                    std::cout << "---PV----" << std::endl;
                    std::cout << "LEOPOLD" << "|" << (pv_joueur <= 0 ? 0 : pv_joueur) << "|" << std::endl;
                    std::cout << "GRIMGOR" << "|" << (pv_grimgor <= 0 ? 0 : pv_grimgor) << "|" << std::endl;;
                    std::cout << std::endl << std::endl;
                }

                else
                {
                    /*<< " (+" << -pv_joueur_alteration << ") "*/
                    /*<< " (-" << pv_grimgor_alteration << ") " */

                    pv_joueur = 100;
                    std::cout << "---PV----" << std::endl;
                    std::cout << "LEOPOLD" << "|" << pv_joueur << "|" << std::endl;
                    std::cout << "GRIMGOR" << "|" << (pv_grimgor <= 0 ? 0 : pv_grimgor) << "|" << std::endl;
                    std::cout << std::endl << std::endl;
                }
            }

            else
            {
                /*<< " (+" << pv_joueur_alteration << ") "*/
                /*<< " (-" << pv_grimgor_alteration << ") "*/

                std::cout << "---PV----" << std::endl;
                std::cout << "LEOPOLD" << "|" << (pv_joueur <= 0 ? 0 : pv_joueur) << "|" << std::endl;
                std::cout << "GRIMGOR" << "|" << (pv_grimgor <= 0 ? 0 : pv_grimgor) << "|" << std::endl;
                std::cout << std::endl << std::endl;
            }

        }


    } while (pv_joueur > 0 && pv_grimgor > 0);

    if (pv_grimgor <= 0 && pv_joueur > 0)
    {
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << "TU GAGNES. waouh" << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    }

    else if (pv_joueur <= 0 && pv_grimgor > 0)
    {
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << "NOOB." << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    }

    else
    {
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << "ah." << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    }

    return EXIT_SUCCESS;
}
