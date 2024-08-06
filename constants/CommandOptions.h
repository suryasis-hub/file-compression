#ifndef COMMANDOPTIONS_H
#define COMMANDOPTIONS_H
#include <string>

enum class CommandOptions {
    Encode,
    Decode,
    Invalid
};

inline CommandOptions getCommandOption(const std::string& command) {
    if (command == "encode") {
        return CommandOptions::Encode;
    } else if (command == "decode") {
        return CommandOptions::Decode;
    } else {
        return CommandOptions::Invalid;
    }
}
#endif //COMMANDOPTIONS_H