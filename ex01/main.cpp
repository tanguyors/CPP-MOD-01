#include "PhoneBook.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
    PhoneBook phonebook;
    while(1)
    {
        std::cout << "-----Please enter a command-----" << std::endl;
        std::cout << "1. ADD" << std::endl;
        std::cout << "2. SEARCH" << std::endl;
        std::cout << "3. EXIT" << std::endl;

        std::string command;
        std::cin >> command;

        if(command == "ADD")
        {
            std::string input;
            Contact contact;

            std::cin.ignore(); // ignoré les /n

            std::cout << "First Name : ";
            std::getline(std::cin, input);
            if (input.empty())
            {
                std::cout << "First Name is empty, recommencez l'ajout du contact." << std::endl;
                continue;
            }
            contact.setFirstName(input);

            std::cout << "Last Name : ";
            std::getline(std::cin, input);
            if (input.empty())
            {
                std::cout << "Last Name is empty, recommencez l'ajout du contact." << std::endl;
                continue;
            }
            contact.setLastName(input);

            std::cout << "Nick Name : ";
            std::getline(std::cin, input);  
            if (input.empty())
            {
                std::cout << "Nick Name is empty, recommencez l'ajout du contact." << std::endl;
                continue;
            }
            contact.setNickName(input);

            std::cout << "Phone Number : ";
            std::getline(std::cin, input);  
            if (input.empty())
            {
                std::cout << "Phone Number is empty, recommencez l'ajout du contact." << std::endl;
                continue;
            }
            contact.setNumber(input);

            std::cout << "Darkest Secret : ";
            std::getline(std::cin, input);
            if (input.empty())
            {
                std::cout << "Darkest Secret is empty, recommencez l'ajout du contact." << std::endl;
                continue;
            }
            contact.setDarkestSecret(input);

            // N'oublie pas d'ajouter le contact au phonebook !
            phonebook.addContact(contact);
        }
        else if(command == "SEARCH")
        {
            phonebook.displayAllContacts();
            std::cout << "Entrez l'index du contact à afficher : ";
            std::string input;
            std::cin.ignore();
            std::getline(std::cin, input);

            bool isNumber = true;
            for (size_t i = 0; i < input.length(); ++i) 
            {
                if (!isdigit(input[i])) // on verifie que ce soit un chiffre si ca ne l'est pas on met la valeur sur false
                {
                    isNumber = false;
                    std::cout << "Enter a valid number please" << std::endl;
                    break;
                }
            }
            int index = -1;
            if (isNumber && !input.empty()) 
            {
                index = atoi(input.c_str());
                phonebook.displayContact(index);
            }
        }
        else if(command == "EXIT")
        {
            std::cout << "Happy to see you" << std::endl;
            break;
        }
        else
            std::cout << "Command invalid" << std::endl;
    }
}