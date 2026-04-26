#include "Files.h"

int read_check(const char* filename)
{
    std::ifstream file(filename);
    if(!file.is_open())
        return 0;
    file.close();
    return 1;
}

std::string read(const char* filename)
{
    std::ifstream file(filename);
    std::string content;
    if(file.is_open())
    {
        std::string line;
        while(std::getline(file, line))
        {
            content += line;
            if (!file.eof())
                content += "\n";
        }
        file.close();
    }
    return content;
}

std::string replace_at(const std::string& src, size_t pos, size_t len, const std::string& replacement)
{
    std::string result;
    size_t i = 0;

    result.reserve(src.length() - len + replacement.length());
    while (i < pos)
    {
        result += src[i];
        ++i;
    }
    result += replacement;
    i = pos + len;
    while (i < src.length())
    {
        result += src[i];
        ++i;
    }
    return result;
}

bool write(const char* filename, const std::string& content, const std::string& s1, const std::string& s2)
{
    std::ofstream file(filename);
    if(file.is_open())
    {
        std::string modified_content = content;
        size_t pos = 0;
        while((pos = modified_content.find(s1, pos)) != std::string::npos)
        {
            modified_content = replace_at(modified_content, pos, s1.length(), s2);
            pos += s2.length();
        }
        file << modified_content;
        file.close();
        return true;
    }
    else
    {
        std::cerr << "Error: Could not write to file " << filename << std::endl;
        return false;
    }
}