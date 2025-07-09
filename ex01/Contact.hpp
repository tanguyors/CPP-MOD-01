#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
    private :
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string number;
        std::string darkestSecret;
    public :
        void setFirstName(std::string str);
        void setLastName(std::string str);
        void setNickName(std::string str);
        void setNumber(std::string str);
        void setDarkestSecret(std::string str);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getNumber() const;
        std::string getDarkestSecret() const;
};

#endif