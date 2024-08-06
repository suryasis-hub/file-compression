#include <iostream>
#include <string>

#include "constants/CommandOptions.h"

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        std::cerr << "Usage: " << argv[0] << " encode file_path" << std::endl;
        return 1;
    }
    const std::string command = argv[1];
    const std::string filePath = argv[2];
    switch (getCommandOption(command)) {
        case CommandOptions::Encode:
            std::cout << "Encoding the file: " << filePath << std::endl;
        break;
        case CommandOptions::Decode:
            std::cout << "Decoding the file: " << filePath << std::endl;
        break;
        default:
            std::cerr << "Unknown command: " << command << std::endl;
        return 1;
    }

    return 0;
}