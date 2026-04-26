#include "Files.h"

int main(int argc, char* argv[])
{
    std::string readed;
    if(argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    if(!read_check(argv[1]))
    {
        std::cerr << "Error: Could not read file " << argv[1] << std::endl;
        return 1;
    }
    if (argv[2][0] == '\0')
    {
        std::cerr << "Error: s1 cannot be empty" << std::endl;
        return 1;
    }
    readed = read(argv[1]);
    std::string output_filename = std::string(argv[1]) + ".replace";
    if (!write(output_filename.c_str(), readed, argv[2], argv[3]))
        return 1;
    return 0;

}