#include "Contact.hpp"

void Contact::set_Contact(std::string f_name, std::string l_name, std::string p_num, std::string nickname, std::string d_secret)
{
    this->first_name = f_name;
    this->last_name = l_name;
    this->phone_number = p_num;
    this->nickname = nickname;
    this->darkest_secret = d_secret;
}

std::string Contact::get_first_name() const
{
    return this->first_name;
}

std::string Contact::get_last_name() const
{
    return this->last_name;
}

std::string Contact::get_phone_num() const
{
    return this->phone_number;
}

std::string Contact::get_nickname() const
{
    return this->nickname;
}

std::string Contact::get_darkest_secret() const
{
    return this->darkest_secret;
}
