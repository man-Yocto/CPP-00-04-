#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include "Utils.hpp"
#include <iomanip>

class PhoneBook
{
    private:
        Contact contact[8];
        int indexer;
        int count;
        void print_head();
    public:
        PhoneBook(void);
        ~PhoneBook();
        void add_contact();
        void search_contact();
        void run();
};

#endif