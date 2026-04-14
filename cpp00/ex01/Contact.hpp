#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    
    public:
        void set_Contact(std::string f_name, std::string l_name, std::string p_num, std::string nickname, std::string d_secret);
        std::string get_first_name() const;
        std::string get_last_name() const;
        std::string get_phone_num() const;
        std::string get_nickname() const;
        std::string get_darkest_secret() const;
};

#endif