#include "Utils.hpp"
#include "Contact.hpp"
#include <cctype>

std::string loop_input(const std::string& prompt)
{
    std::string input;
    while(true)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            return "";
        }
        if (input == "exit")
            return "";
        if (!input.empty())
            break;
    }
    return input;
}

std::string phone_input(const std::string& prompt)
{
    std::string input;
    while(true)
    {
        std::cout << prompt;
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            return "";
        }
        if (input == "exit")
            return "";
        if (input.empty())
            continue;
        if (!is_valid_integer(input))
        {
            std::cout << "Phone number must contain only digits. Please try again." << std::endl;
            continue;
        }
        break;
    }
    return input;
}

std::string format_field(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void print_att(const std::string& label, const std::string& value)
{
    std::cout << label << ": " << value << std::endl;
}

void print_data(const Contact &contact)
{
    print_att("First Name", contact.get_first_name());
    print_att("Last Name", contact.get_last_name());
    print_att("Nickname", contact.get_nickname());
    print_att("Phone Number", contact.get_phone_num());
    print_att("Darkest Secret", contact.get_darkest_secret());
}

bool is_valid_integer(const std::string& str)
{
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(str[i]))
            return false;
    }
    return true;
}