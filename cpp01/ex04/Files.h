#ifndef FILES_H
#define FILES_H

#include <iostream>
#include <fstream>

int read_check(const char* filename);
std::string read(const char* filename);
std::string replace_at(const std::string& src, size_t pos, size_t len, const std::string& replacement);
bool write(const char* filename, const std::string& content, const std::string& s1, const std::string& s2);


#endif