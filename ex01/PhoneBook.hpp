#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private :
        Contact repertoire[8]; // tableau pour mon repertoire
        int size; // Nombre de numero enregistré
        int index;

    public :
        PhoneBook();
        void addContact(const Contact& contact);
        void displayAllContacts() const;
        void displayContact(int n); // chercher un contact int n pour l'index ou se trouve le contact
};

#endif // PHONEBOOK_HPP
