#include <iostream>
#include <ctime>
// code by xTyzenIV
int main() {
    std::srand(time(nullptr));

    int essaie = 0;
    std::cout << "Entre un nombre de d'essaie : ";
    std::cin >> essaie;
    int numbermystere = rand() % 100;

    for (int i = 0; i < essaie; ++i)
    {
        int number = 0;
        std::cout << "\n";
        std::cout << "Veuillez entrez un nombre entre 0 et 100";
        std::cin >> number;
        std::cin.ignore();

        if (number == numbermystere)
        {
            std::cout << "\n";
            std::cout << "Bravo tu as gagné !";
            std::cin.ignore();
            break;
        }

        else if (number > numbermystere)
        {
            std::cout << "\n";
            std::cout << "Trop grand ! Continue";
            continue;
        }

        else if (number < numbermystere)
        {
            std::cout << "\n";
            std::cout << "Trop petit ! Continue !";
            continue;
        }

        if (i == essaie - 1)
        {
            std::cout << "\n";
            std::cout << "Mince trop de tentative ! Perdu !";
            break;
        }
    }

    // code by xTyzenIV
    return 0;
}
