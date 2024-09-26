#include <iostream>
#include <fstream>
#include <unordered_map>
#include <cctype>

void countWords(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }

    std::string word;
    int wordCount = 0;
    while (file >> word) {
        ++wordCount;
    }

    std::cout << "Number of words: " << wordCount << std::endl;
}

void countLetters(const std::string& filename, bool ignoreCase) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }

    std::unordered_map<char, int> letterCount;
    char c;
    while (file.get(c)) {
        if (ignoreCase) {
            c = std::tolower(c);
        }
        if (std::isalpha(c)) {
            ++letterCount[c];
        }
    }

    std::cout << "Letter frequency:" << std::endl;
    for (char letter = 'a'; letter <= 'z'; ++letter) {
        std::cout << letter << ": " << letterCount[letter] << std::endl;
    }
}

void countAsciiCharacters(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error opening file." << std::endl;
        return;
    }

    std::unordered_map<char, int> charCount;
    char c;
    while (file.get(c)) {
        ++charCount[c];
    }

    std::cout << "ASCII character frequency:" << std::endl;
    for (int i = 0; i < 128; ++i) {
        if (charCount[i] > 0) {
            std::cout << static_cast<char>(i) << ": " << charCount[i] << std::endl;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename> [options]" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string flag = "--all";
    bool ignoreCase = false;

    if (argc > 2) {
        flag = argv[2];
        if (argc > 3 && std::string(argv[3]) == "--ir") {
            ignoreCase = true;
        }
    }

    if (flag == "-w" || flag == "--word") {
        countWords(filename);
    } else if (flag == "--en") {
        countLetters(filename, ignoreCase);
    } else {
        countAsciiCharacters(filename);
    }

    return 0;
}
