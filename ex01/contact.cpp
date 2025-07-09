#include "Contact.hpp"

void Contact::setFirstName(std::string str)
{
    firstName = str;
}

void Contact::setLastName(std::string str)
{
    lastName = str;
}

void Contact::setNickName(std::string str)
{
    nickName = str;
}

void Contact::setNumber(std::string str)
{
    number = str;
}

void Contact::setDarkestSecret(std::string str)
{
    darkestSecret = str;
}

std::string Contact::getFirstName() const
{
    return firstName;
}

std::string Contact::getLastName() const
{
    return lastName;
}

std::string Contact::getNickName() const
{
    return nickName;
}

std::string Contact::getNumber() const
{
    return number;
}

std::string Contact::getDarkestSecret() const
{
    return darkestSecret;
}



