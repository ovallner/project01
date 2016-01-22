#include "wordsearch.h"
#include <string>
#include <fstream>
#include <iostream>
#include <cstring>

using namespace std;

WordSearch::WordSearch(ifstream &fileIn)
{
    length = 0;
    string stringIn = " ";

    // reads in the input file until a number is found
    while (!isdigit(stringIn[0]))
    {
        fileIn >> stringIn;
        length++;
    }
    length--;

    //reads in the number containing the number of words in the list
    listSize = stoi(stringIn);
    cout << listSize << endl;
    string* wordList = new string[listSize];
    for(int x = 0; x < listSize; x++)
    {
        fileIn >> wordList[x];
        cout << wordList[x] << endl;
    }

    //puts the cursor at the beginning of the file and then saves the word search to an array
    fileIn.seekg(0, ios::beg);
    const char** letterArray = new const char*[length];
    for(int i = 0; i < length; i++)
    {
        fileIn >> stringIn;
        letterArray[i] = stringIn.c_str();
        cout << letterArray[i] << endl;
    }
    height = strlen(letterArray[0]);
    cout << "height: " << height << endl;
    cout << "length: " << length << endl;
}

