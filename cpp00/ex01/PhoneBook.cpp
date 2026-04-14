#include "PhoneBook.hpp"
#include <cstdlib>

PhoneBook::PhoneBook(void)
{
    this->indexer = 0;
    this->count = 0;
}
PhoneBook::~PhoneBook()
{
}
void PhoneBook::add_contact()
{
    std::string f_name;
    std::string l_name;
    std::string p_num;
    std::string nickname;
    std::string d_secret;

    f_name = loop_input("Enter first name(or 'exit' to cancel): ");
    if (f_name.empty())
        return;
    l_name = loop_input("Enter last name(or 'exit' to cancel)   : ");
    if (l_name.empty())
        return;
    p_num = phone_input("Enter phone number(or 'exit' to cancel): ");
    if (p_num.empty())
        return;
    nickname = loop_input("Enter nickname(or 'exit' to cancel): ");
    if (nickname.empty())
        return;
    d_secret = loop_input("Enter darkest secret(or 'exit' to cancel): ");
    if (d_secret.empty())
        return;

    this->contact[this->indexer].set_Contact(f_name, l_name, p_num, nickname, d_secret);
    if (this->count < 8)
        this->count++;
    
    this->indexer = (this->indexer + 1) % 8;
}
void PhoneBook::print_head()
{
    std::cout << "|" << std::setw(10) << std::right << "Index" << "|";
    std::cout << std::setw(10) << std::right << "First Name" << "|";
    std::cout << std::setw(10) << std::right << "Last Name" << "|";
    std::cout << std::setw(10) << std::right << "Nickname" << "|" << std::endl;
    
    for(int i = 0; i < this->count; i++)
    {
        std::cout << "|" << std::setw(10) << std::right << i << "|";
        std::cout << std::setw(10) << std::right << format_field(this->contact[i].get_first_name()) << "|";
        std::cout << std::setw(10) << std::right << format_field(this->contact[i].get_last_name()) << "|";
        std::cout << std::setw(10) << std::right << format_field(this->contact[i].get_nickname()) << "|" << std::endl;
    }
}

void PhoneBook::search_contact()
{
    if (this->count == 0)
    {
        std::cout << "No contacts available." << std::endl;
        return;
    }
    this->print_head();
    while(1)
    {
        std::cout << "Enter index to view details (or 'exit' to return): ";
        std::string input;
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            return;
        }
        if (input == "exit")
            break;
        if (!is_valid_integer(input))
        {
            std::cout << "Invalid input." << std::endl;
            continue;
        }
        int index = atoi(input.c_str());
        if (index >= 0 && index < this->count)
        {
            print_data(this->contact[index]);
            break;
        }
        else
        {
            std::cout << "Invalid index. Please try again." << std::endl;
        }
    }
}

void PhoneBook::run()
{
    std::string command;
    while(true)
    {
        std::cout << "[PHONEBOOK]" << std::endl;
        std::cout << "Enter [ADD], [SEARCH] or [EXIT]: ";
        if (!std::getline(std::cin, command))
        {
            std::cout << std::endl;
            break;
        }
        if (command == "ADD")
        {
            this->add_contact();
        }
        else if (command == "SEARCH")
        {
            this->search_contact();
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting PhoneBook. Contacts lost forever!" << std::endl;
            break;
        }
    }
}