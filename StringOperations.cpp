#include <iostream>
#include <string>

class StringOperations {
public:
    static std::string concatenate(const std::string& str1, const std::string& str2) {
        return str1 + str2;
    }

    static std::string substring(const std::string& str, int start, int length) {
        return str.substr(start, length);
    }

    static bool compare(const std::string& str1, const std::string& str2) {
        return str1 == str2;
    }

    static std::map<char, int> characterFrequency(const std::string& str) {
        std::map<char, int> frequency;
        for (char c : str) {
            frequency[c]++;
        }
        return frequency;
    }
};
