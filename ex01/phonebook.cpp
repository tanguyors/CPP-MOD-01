#include <iostream>
#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
    size = 0;
    index = 0;
}

void PhoneBook::addContact(const Contact& contact)
{
    // Ajouter le contact à la position courante
    repertoire[index] = contact;
    // Avancer l'index pour le prochain ajout
    index++;
    // Si on atteint la fin du tableau, on recommence au début
    if (index == 8)
        index = 0;
    // Incrémenter le compteur de contacts, sans dépasser 8
    if (size < 8)
        size++;
}

static std::string formatField(const std::string& str) 
{
    if (str.length() > 10) // Si la longueur de la chaîne dépasse 10 caractères
        return str.substr(0, 9) + "."; // On prend les 9 premiers caractères et on ajoute un point
    else
        return std::string(10 - str.length(), ' ') + str;  // Sinon, on ajoute des espaces à gauche pour aligner à droite
}

void PhoneBook::displayAllContacts() const
{
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for(int i = 0; i < size; i++) 
    {
        // Affiche l'index aligné à droite sur 10 caractères
        std::cout << "|" << std::setw(10) << i
                  << "|" << formatField(repertoire[i].getFirstName())
                   << "|" << formatField(repertoire[i].getLastName())
                  << "|" << formatField(repertoire[i].getNickName())
                  << "|" << std::endl;
    }
}

void PhoneBook::displayContact(int n) 
{
    if (n < 0 || n >= size) 
    {
        std::cout << "Index invalide !" << std::endl;
        return;
    }
    std::cout << "First Name    : " << repertoire[n].getFirstName() << std::endl;
    std::cout << "Last Name     : " << repertoire[n].getLastName() << std::endl;
    std::cout << "Nickname      : " << repertoire[n].getNickName() << std::endl;
    std::cout << "Phone Number  : " << repertoire[n].getNumber() << std::endl;
    std::cout << "Darkest Secret: " << repertoire[n].getDarkestSecret() << std::endl;
}

