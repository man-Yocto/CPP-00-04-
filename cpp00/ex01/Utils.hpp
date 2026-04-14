#ifndef UTILS_HPP
#define UTILS_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

std::string loop_input(const std::string& prompt);
std::string phone_input(const std::string& prompt);
std::string format_field(const std::string& str);
void print_att(const std::string& label, const std::string& value);
void print_data(const Contact &contact);
bool is_valid_integer(const std::string& str);

#endif
