#include <fstream>

#ifndef WORDSEARCH_H
#define WORDSEARCH_H


class WordSearch
{
public:
    WordSearch(std::ifstream &);
    void findWord(std::string);
private:
    size_t height;
    size_t length;
    char** letterArray [];
    size_t listSize;
    std::string* wordList[];
};

#endif // WORDSEARCH_H
