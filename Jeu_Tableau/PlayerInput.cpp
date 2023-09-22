
#include <iostream>
#include <tuple>
#include <string>
#include "PlayerInput.h"

//Vérifie si une des valeurs est une chaine de characters
int validInput()
{

    bool isValidInput = true;
    int result = -1;

    std::string inputString;

    do
    {
        std::getline(std::cin, inputString);

        isValidInput = true;
        for (char inputChar : inputString)
        {
            if (!isdigit(inputChar))
            {
                // not valid input -----------------
                std::cout << "[" << inputChar << "] n'est pas un nombre" << std::endl;
                isValidInput = false;
                break;
            }
        }

        if (isValidInput)
        {
            //std::cout << "Your number is: " << inputString << "\n";
            std::string value = inputString.substr(0, 10);

            result = std::stoi(inputString);

            std::cout << "Votre nombre est: " << result << "\n";
            break;
        }

    } while (!isValidInput);

    return result;

}

void Input(int& x, int& y)
{
    //Demande au joueurs d'input les coordonées
    std::cout << "Coordonee x" << std::endl;
    x = validInput();


    std::cout << "Coordonee y" << std::endl;
    y = validInput();
}